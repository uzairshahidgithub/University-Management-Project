#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string title;
    string author;
    int bookID;
    bool isAvailable;

public:
    Book() {
	
	 title=" ";
	  author=" ";
	   bookID=-1;
	    isAvailable=false ;
}
    void setDetails(string a, string b, int c) {
        title = a;
        author = b;
        bookID = c;
        isAvailable = true;
    }

    void checkOut() {
        if (isAvailable) {
            isAvailable = false;
            cout << "Book checked out successfully." << endl;
        } else {
            cout << "Book is not available." << endl;
        }
    }

    void returnBook() {
        isAvailable = true;
    }

    bool isBookAvailable() const {
        return isAvailable;
    }

    int getBookID() {
        return bookID;
    }

    void displayBook() {
        if (bookID != -1) {
            cout << "Book Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Book ID: " << bookID << endl;
            cout << "Availability: " << (isAvailable ? "Available" : "Not Available") << endl;
        } else {
            cout << "No book in the system." << endl;
        }
    }
};

class Member {
private:
    string name;
    int memberID;
    int borrowedBookID;

public:
    Member() {
	 name=" ";
	  memberID=-1;
	   borrowedBookID=-1 ;
}

    void setDetails(string d, int e) {
        name = d;
        memberID = e;
    }

    void borrowBook(int bookID) {
        borrowedBookID = bookID;
    }

    void returnBook() {
        borrowedBookID = -1;
    }

    int getMemberID() {
        return memberID;
    }

    int getBorrowedBookID() {
        return borrowedBookID;
    }

    void displayMember() {
        if (memberID != -1) {
            cout << "Member Name: " << name << endl;
            cout << "Member ID: " << memberID << endl;
            cout << "Borrowed Book ID: ";
            if (borrowedBookID != -1) {
                cout << borrowedBookID;
            } else {
                cout << "None";
            }
            cout << endl;
        } else {
            cout << "No member in the system." << endl;
        }
    }
};

class Library {
private:
    Book book;
    Member member;

public:
    void addBook(string title, string author, int bookID) {
        book.setDetails(title, author, bookID);
    }

    void addMember(string name, int memberID) {
        member.setDetails(name, memberID);
    }

    void borrowBook(int bookID) {
        if (book.getBookID() == bookID) {
            if (book.isBookAvailable()) {
                book.checkOut();
                member.borrowBook(bookID);
                cout << "Book borrowed successfully." << endl;
            } else {
                cout << "Book is not available." << endl;
            }
        } else {
            cout << "No book found with the given ID." << endl;
        }
    }

    void returnBook(int bookID) {
        if (member.getBorrowedBookID() == bookID) {
            if (book.getBookID() == bookID) {
                book.returnBook();
                member.returnBook();
                cout << "Book returned successfully." << endl;
            } else {
                cout << "No book with the given ID is borrowed." << endl;
            }
        } else {
            cout << "The book ID does not match the borrowed book." << endl;
        }
    }

    void displayDetails() {
        cout << "Library Status:"<<endl;
        cout << "---------------"<<endl;
        book.displayBook();
        member.displayMember();
        if (member.getBorrowedBookID() != -1) {
            cout << "The book with ID " << member.getBorrowedBookID();
			 cout<<"this is currently borrowed by the member."<<endl;
        } else {
            cout << "No books are currently borrowed."<<endl;
        }
        cout << "---------------"<<endl;
    }
};

int main() {
	
    Library universityLibrary;
    int choice;
    
    cout<<"<=========================================>"<<endl;
	cout<<"University Liberary Management System - C++"<<endl;
	cout<<"<=========================================>"<<endl;
	cout<<"Submitted to: Zainab Zafar"<<endl;
	cout<<"Submitted by: Naseer (048)"<<endl;
	cout<<"<========================>"<<endl;
	cout<<"\n";

    while (true) {
        cout << "University Library Management System" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. Add Member" << endl;
        cout << "3. Borrow Book" << endl;
        cout << "4. Return Book" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string title, author;
                int bookID;
                cout << "Enter book title: ";
                cin.ignore();
                getline(cin, title);
                cout << "Enter author name: ";
                getline(cin, author);
                cout << "Enter book ID: ";
                cin >> bookID;
                universityLibrary.addBook(title, author, bookID);
                cout << "Book added successfully!" << endl;
                break;
            }
            case 2: {
                string name;
                int memberID;
                cout << "Enter member name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter member ID: ";
                cin >> memberID;
                universityLibrary.addMember(name, memberID);
                cout << "Member added successfully!" << endl;
                break;
            }
            case 3: {
                int bookID;
                cout << "Enter the book ID to borrow: ";
                cin >> bookID;
                universityLibrary.borrowBook(bookID);
                break;
            }
            case 4: {
                int bookID;
                cout << "Enter the book ID to return: ";
                cin >> bookID;
                universityLibrary.returnBook(bookID);
                break;
            }
            case 5:
                cout << "Exiting the system." << endl;
                universityLibrary.displayDetails();
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}

