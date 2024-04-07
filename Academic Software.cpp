#include<iostream>
#include<string>
#include <stdlib.h>
using namespace std;
class student
{
	public:
		static int size;
		int a,b,c,e,h[sizeof(size)],re,re2,roll;  
		double j[sizeof(size)];
		char d;
		string f[sizeof(size)],g[sizeof(size)],i[sizeof(size)];
		public:
			student()
			{
			}//For Students
			void main_menu()
			{
				cout<<"Enter number to access the following"<<endl;
				cout<<"1 for student"<<endl;
				cout<<"2 for faculty"<<endl;
				cout<<"3 to exit"<<endl;
				cout<<"Enter= ";
				cin>>a;
			}
			void Department()
			{
				cout<<"Enter number to access the following departments"<<endl;
				cout<<"1 for CS"<<endl;
				cout<<"2 for SE"<<endl;
				cout<<"3 for IT"<<endl;
				cout<<"4 to return to main menu"<<endl;
				cout<<"Enter= ";
				cin>>b;
			}
			void semester()
			{
					cout<<"Enter number to access the following semester"<<endl;
					cout<<"1 for 1st semester"<<endl;
					cout<<"2 for 2nd semester"<<endl;
					cout<<"3 for 3rd semester"<<endl;
					cout<<"4 for 4th semester"<<endl;
					cout<<"5 for 5th semester"<<endl;
					cout<<"6 for 6th semester"<<endl;
					cout<<"7 for 7th semester"<<endl;
					cout<<"8 for 8th semester"<<endl;
					cout<<"9 to return to previous menu"<<endl;
					cout<<"10 to return to main menu"<<endl;
					cout<<"Enter= ";
					cin>>c;
			}
			void section()
			{
				cout<<"Enter character to access the following section"<<endl;
				cout<<"A for section A"<<endl;
				cout<<"B for section B"<<endl;
				cout<<"C for section C"<<endl;
				cout<<"D to return to previous menu"<<endl;
				cout<<"E to return to main menu"<<endl;
				cout<<"Enter= ";
				cin>>d;
			}
			void  menu_of_student_record()
			{
				cout<<"Enter number to access the following menu"<<endl;
				cout<<"1 to add record"<<endl;
				cout<<"2 to display specific record"<<endl;
				cout<<"3 to display all records"<<endl;
				cout<<"4 to delete specific record"<<endl;
				cout<<"5 to delete all records"<<endl;
				cout<<"6 to return to previous menu"<<endl;
				cout<<"7 to return to main menu"<<endl;
				cout<<"Enter= ";
				cin>>e;
			}
			
		void  input_student_data()
			{    
			   	cout<<"How many data of the students you want to enter=";
			cin>>size;
			
				for (int ai=0;ai<size;ai++)
				{
				cout<<"Enter Student Name=";
				cin>>f[ai];
				cout<<"Enter father name=";
				cin>>g[ai];
				cout<<"Enter Roll Number=";
				cin>>h[ai];
				cout<<"Enter session=";
				cin>>i[ai];
				cout<<"Enter marks in intermedaite or CGPA =";
				cin>>j[ai];}
				cout<<"1 to return to previous menu"<<endl;
				cout<<"2 to return to main menu"<<endl;	
				cin>>re;		
			}
			void display_all_student_data()
			{ 
				for(int ai=0;ai<size;ai++)
				{
				cout<<"Enter Student Name="<<f[ai]<<endl;
				cout<<"Enter father name="<<g[ai]<<endl;
				cout<<"Enter Roll Number="<<h[ai]<<endl;
				cout<<"Enter session="<<i[ai]<<endl;
				cout<<"Enter marks in intermedaite or CGPA ="<<j[ai];cout<<endl;
				}		
				cout<<"1 to return to previous menu"<<endl;
				cout<<"2 to return to main menu"<<endl;	
				cin>>re2;
			}
			
			void display_specific_student_data()
			{ 
			   cout<<"Enter the Roll no of the student=";
			   cin>>roll;
				for(int ai=0;ai<size;ai++)
				{ if(roll==h[ai])
				{
				cout<<"Enter Student Name="<<f[ai]<<endl;
				cout<<"Enter father name="<<g[ai]<<endl;
				cout<<"Enter Roll Number="<<h[ai]<<endl;
				cout<<"Enter session="<<i[ai]<<endl;
				cout<<"Enter marks in intermedaite or CGPA ="<<j[ai];cout<<endl;
				}else
				{cout<<"This Roll no "<<roll<<" not found"<<endl;
						}	}	
				cout<<"1 to return to previous menu"<<endl;
				cout<<"2 to return to main menu"<<endl;	
				cin>>re2;}
				
				void delete_specific_student_data()
				{
					cout<<"Enter the Roll no of the student=";
			   cin>>roll;
				for(int ai=0;ai<size;ai++)
				{ if(roll==h[ai])
				{
				 f[ai] = "";
                 g[ai] = "";
                 h[ai] = 0;
                 i[ai] = "";
                 j[ai] = 0;
				}else
				{cout<<"This Roll no "<<roll<<" not found"<<endl;
						}	}	
				cout<<"1 to return to previous menu"<<endl;
				cout<<"2 to return to main menu"<<endl;	
				cin>>re2;	
				}
				void delete_all_student_data()
				{
				for(int ai=0;ai<size;ai++)
				{
				 f[ai] = "";
                 g[ai] = "";
                 h[ai] = 0;
                 i[ai] = "";
                 j[ai] = 0;
				}	
				cout<<"1 to return to previous menu"<<endl;
				cout<<"2 to return to main menu"<<endl;	
				cin>>re2;}
	};
	int student::size=0;
	class faculty:public student
	{//for faculty
	// menu is same as data for student	
			public:
			static int size2;
				int re3,re4,re5,re6,re7;
				string k[sizeof(size2)],p[sizeof(size2)];  
				char l[sizeof(size2)],m[sizeof(size2)]; 
				int n[sizeof(size2)],o[sizeof(size2)];
				student obj1;
				int e2,id;
				public:
			int  faculty_record()
			{
				cout<<"Enter number to access the following menu"<<endl;
				cout<<"1 to add record"<<endl;
				cout<<"2 to display specific record"<<endl;
				cout<<"3 to display all records"<<endl;
				cout<<"4 to delete specific record"<<endl;
				cout<<"5 to delete all records"<<endl;
				cout<<"6 to return to main menu"<<endl;
				cout<<"Enter= ";
				cin>>e2;
			}
			void faculty_data()
			{  
			cout<<"how many data of teachers you want to enter=";
			cin>>size2;
			for(int i2=0;i2<size2;i2++)
			{cout<<"Enter Name= ";
				cin>>k[i2];
				cout<<"Enter Gender M for male or F for female=";
				cin>>l[i2];
				cout<<"Enter marriage status M for married or U for unmaried=";
				cin>>m[i2];
				cout<<"Enter ID=";
				cin>>n[i2];
				cout<<"Enter age=";
				cin>>o[i2];
				cout<<"Enter education=";
				cin>>p[i2];}
				cout<<"1 to return to previous menu"<<endl;
				cout<<"2 to return to main menu"<<endl;	
				cin>>re3;
			}
			void display_all_data()
			{for(int i3=0;i3<size2;i3++)
				{
				cout<<"Name= "<<k[i3]<<endl;
				cout<<"Gender="<<l[i3]<<endl;
				cout<<"Marriage status="<<m[i3]<<endl;
				cout<<"ID="<<n[i3]<<endl;
				cout<<"Age="<<o[i3]<<endl;
				cout<<"Education="<<p[i3]<<endl;}
				cout<<"1 to return to previous menu"<<endl;
				cout<<"2 to return to main menu"<<endl;	
				cin>>re4;
				}
			
			void display_specific__member()
			{ 
			cout<<"Enter ID=";
			cin>>id;
			for(int i4=0;i4<size2;i4++)
				{if(id==n[i4])
				{
				cout<<"Name= "<<k[i4]<<endl;
				cout<<"Gender="<<l[i4]<<endl;
				cout<<"Marriage status="<<m[i4]<<endl;
				cout<<"ID="<<n[i4]<<endl;
				cout<<"Age="<<o[i4]<<endl;
				cout<<"Education="<<p[i4]<<endl;}
				else{ cout<<"ID not found"<<endl;
				} }
				cout<<"1 to return to previous menu"<<endl;
				cout<<"2 to return to main menu"<<endl;	
				cin>>re5;	
		}
			void delete_specific_member()
			{
			cout<<"Enter ID=";
			cin>>id;
			for(int i5=0;i5<size2;i5++)
				{if(id==n[i5])
				{
				k[i5]=" ";
				l[i5]=' ';
				m[i5]=' ';
				n[i5]=0;
				o[i5]=0;
				p[i5]=" ";}
				else{ cout<<"ID not found"<<endl;
				} }
				cout<<"1 to return to previous menu"<<endl;
				cout<<"2 to return to main menu"<<endl;	
				cin>>re6;	
			}
			void delete_all()
			{
			for(int i6=0;i6<size2;i6++)
				{
				k[i6]=" ";
				l[i6]=' ';
				m[i6]=' ';
				n[i6]=0;
				o[i6]=0;
				p[i6]=" ";}
				cout<<"1 to return to previous menu"<<endl;
				cout<<"2 to return to main menu"<<endl;	
				cin>>re7;}	
			//int a,b,c,e,n,o,h,j;
		//char d,l,m;
	//	string f,g,i,k,p;
};
int faculty::size2=0;


class university: public faculty
{public:
	university()
	{cout<<"<========================================>"<<endl;
	cout<<"University Academic Management System - C++"<<endl;
	cout<<"<=========================================>"<<endl;
	cout<<"Submitted to: Zainab Zafar"<<endl;
	cout<<"Submitted by: Ahtisham (120)"<<endl;
	cout<<"<==========================>"<<endl;
	cout<<"\n";
	} 

	faculty obj;
	void University_menu()
	{
		menu:
		obj.main_menu();
		if(obj.a==1)
		{ to:
		obj.Department();
		if(obj.b==1)
		{   jump2:
			obj.semester();
			if(obj.c==1)
			{   jump1:
				obj.section();
				if(obj.d=='A')
				{   jump:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
						 goto jump;
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
						goto jump;		
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jump;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jump1;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='B')
				{ jump3:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump3;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump3;
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump3;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jump3;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump3;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jump1;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='C')
					{ jump4:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump4;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump4;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump4;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
						goto jump4;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump4;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jump1;
					}
					else
					{
						goto menu;
					}
				}// C
				else if(obj.d=='D')
				{
					goto jump2;
				}
				else
				{
					goto menu;
				}
			  }
			else if(obj.c==2)
			{   jum:
				obj.section();
				if(obj.d=='A')
				{   jum2:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
						 goto jum2;
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
						goto jum2;		
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jum2;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jum2;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jum2;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jum;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='B')
				{ jum1:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jum1;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jum1;
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jum1;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jum1;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jum1;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jum;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='C')
					{ jum3:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jum3;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jum3;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jum3;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
						goto jum3;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jum3;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jum;
					}
					else
					{
						goto menu;
					}
				}// C
				else if(obj.d=='D')
				{
					goto jump2;
				}
				else
				{
					goto menu;
				} 
		    	}//Semester 2
		    else if(obj.c==3)
			{   jump22:
				obj.section();
				if(obj.d=='A')
				{   jum33:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
						 goto jum33;
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
						goto jum33;		
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jum33;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jum33;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jum33;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jump22;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='B')
				{ jump33:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump33;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump33;
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump33;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
						goto jump33;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump33;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jump22;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='C')
					{ jump44:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump44;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump44;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump44;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
						goto jump44;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump44;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
					goto jump22;
					}
					else
					{
						goto menu;
					}
				}// C
				else if(obj.d=='D')
				{
					goto jump2;
				}
				else
				{
					goto menu;
				} 
		    	}//semsester 3
		    else if(obj.c==4)
			{  jump12:
				obj.section();
				if(obj.d=='A')
				{   jump45:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
						 goto jump45;
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
						goto jump45;		
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump45;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jump45;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump45;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jump12;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='B')
				{ jump46:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump46;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump46;
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump46;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jump46;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump46;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jump12;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='C')
					{ jump47:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump47;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump47;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump47;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
						goto jump47;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump47;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jump12;
					}
					else
					{
						goto menu;
					}
				}// C
				else if(obj.d=='D')
				{
					goto jump2;
				}
				else
				{
					goto menu;
				} 
		    	}//semester 4
		    else if(obj.c==5)
			{   jump13:
				obj.section();
				if(obj.d=='A')
				{   jump48:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
						 goto jump48;
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
						goto jump48;		
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump48;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jump48;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump48;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jump13;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='B')
				{ jump49:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump49;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump49;
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump49;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jump49;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump49;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jump13;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='C')
					{ jump50:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump50;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump50;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump50;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
						goto jump50;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump50;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jump13;
					}
					else
					{
						goto menu;
					}
				}// C
				else if(obj.d=='D')
				{
					goto jump2;
				}
				else
				{
					goto menu;
				} 
		    	}//semester 5
		    else if(obj.c==6)
			{   jump14:
				obj.section();
				if(obj.d=='A')
				{   jump51:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
						 goto jump51;
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
						goto jump51;		
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump51;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jump51;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump51;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jump14;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='B')
				{ jump52:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump52;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump52;
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump52;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jump52;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump52;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jump14;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='C')
					{ jump53:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump53;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump53;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump53;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
						goto jump53;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump53;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jump14;
					}
					else
					{
						goto menu;
					}
				}// C
				else if(obj.d=='D')
				{
					goto jump2;
				}
				else
				{
					goto menu;
				} 
		    	}// semester 6
		    	else if(obj.c==7)
			{   jump15:
				obj.section();
				if(obj.d=='A')
				{   jump54:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
						 goto jump54;
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
						goto jump54;		
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump54;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jump54;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump54;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jump15;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='B')
				{ jump55:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump55;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump55;
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump55;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jump55;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump55;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jump15;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='C')
					{ jump56:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump56;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump56;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump56;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
						goto jump56;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump56;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jump15;
					}
					else
					{
						goto menu;
					}
				}// C
				else if(obj.d=='D')
				{
					goto jump2;
				}
				else
				{
					goto menu;
				} 
		    	}//semester 7
		    	else if(obj.c==8)
			{   jump16:
				obj.section();
				if(obj.d=='A')
				{   jump57:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
						 goto jump57;
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
						goto jump57;		
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump57;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jump57;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump57;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jump16;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='B')
				{ jump58:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump58;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump58;
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump58;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jump58;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump58;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jump16;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='C')
					{ jump59:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump59;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump59;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump59;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
						goto jump59;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump59;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jump16;
					}
					else
					{
						goto menu;
					}
				}// C
				else if(obj.d=='D')
				{
					goto jump2;
				}
				else
				{
					goto menu;
				} 
		    	}// sesmter 8
		    	else if(obj.c==9)
		    	{
		    		goto to;
				}// semester 9
				else 
				{
					goto menu;
				}	
			}	
		//department 2 
		else if(obj.b==2)
		{  jump5:
			obj.semester();
			if(obj.c==1)
			{   jump17:
				obj.section();
				if(obj.d=='A')
				{   jump60:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
						 goto jump60;
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
						goto jump60;		
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump60;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jump60;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump60;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jump17;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='B')
				{ jump61:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump61;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump61;
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump61;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jump61;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump61;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jump17;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='C')
					{ jump62:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump62;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump62;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump62;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
						goto jump62;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump62;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jump17;
					}
					else
					{
						goto menu;
					}
				}// C
				else if(obj.d=='D')
				{
					goto jump5;
				}
				else
				{
					goto menu;
				}
			  }
			else if(obj.c==2)
			{   jump18:
				obj.section();
				if(obj.d=='A')
				{   jump63:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
						 goto jump63;
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
						goto jump63;		
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump63;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jump63;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump63;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jump18;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='B')
				{ jump64:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump64;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump64;
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump64;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jump64;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump64;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jump18;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='C')
					{ jump65:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump65;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump65;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump65;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
						goto jump65;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump65;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jump18;
					}
					else
					{
						goto menu;
					}
				}// C
				else if(obj.d=='D')
				{
					goto jump5;
				}
				else
				{
					goto menu;
				} 
		    	}//Semester 2
		    else if(obj.c==3)
			{   jump19:
				obj.section();
				if(obj.d=='A')
				{   jump66:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
						 goto jump66;
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
						goto jump66;		
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump66;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jump66;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump66;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jump19;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='B')
				{ jump67:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump67;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump67;
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump67;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jump67;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump67;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jump19;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='C')
					{ jump68:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump68;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump68;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump68;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
						goto jump68;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump68;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jump19;
					}
					else
					{
						goto menu;
					}
				}// C
				else if(obj.d=='D')
				{
					goto jump5;
				}
				else
				{
					goto menu;
				} 
		    	}//semsester 3
		    else if(obj.c==4)
			{  jump20:
				obj.section();
				if(obj.d=='A')
				{   jump69:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
						 goto jump69;
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
						goto jump69;		
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump69;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jump69;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump69;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jump20;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='B')
				{ jump70:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump70;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump70;
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump70;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jump70;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump70;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jump20;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='C')
					{ jump71:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump71;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump71;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump71;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
						goto jump71;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump71;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jump20;
					}
					else
					{
						goto menu;
					}
				}// C
				else if(obj.d=='D')
				{
					goto jump5;
				}
				else
				{
					goto menu;
				} 
		    	}//semester 4
		    else if(obj.c==5)
			{   jump21:
				obj.section();
				if(obj.d=='A')
				{   jump72:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
						 goto jump72;
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
						goto jump72;		
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump72;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jump72;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump72;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jump21;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='B')
				{ jump73:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump73;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump73;
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump73;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jump73;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump73;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jump21;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='C')
					{ jump74:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump74;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump74;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump74;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
						goto jump74;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump74;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jump21;
					}
					else
					{
						goto menu;
					}
				}// C
				else if(obj.d=='D')
				{
					goto jump5;
				}
				else
				{
					goto menu;
				} 
		    	}//semester 5
		    else if(obj.c==6)
			{   jum23:
				obj.section();
				if(obj.d=='A')
				{   jump75:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
						 goto jump75;
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
						goto jump75;		
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump75;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jump75;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump75;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jum23;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='B')
				{ jump76:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump76;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump76;
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump76;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jump76;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump76;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jum23;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='C')
					{ jump77:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump77;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump77;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump77;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
						goto jump77;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump77;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jum23;
					}
					else
					{
						goto menu;
					}
				}// C
				else if(obj.d=='D')
				{
					goto jump5;
				}
				else
				{
					goto menu;
				} 
		    	}// semester 6
		    	else if(obj.c==7)
			{   jum24:
				obj.section();
				if(obj.d=='A')
				{   jump78:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
						 goto jump78;
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
						goto jump78;		
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump78;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jump78;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump78;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jum24;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='B')
				{ jump79:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump79;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump79;
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump79;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jump79;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump79;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jum24;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='C')
					{ jump80:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump80;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump80;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump80;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
						goto jump80;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump80;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jum24;
					}
					else
					{
						goto menu;
					}
				}// C
				else if(obj.d=='D')
				{
					goto jump5;
				}
				else
				{
					goto menu;
				} 
		    	}//semester 7
		    	else if(obj.c==8)
			{   jum25:
				obj.section();
				if(obj.d=='A')
				{   jump81:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
						 goto jump81;
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
						goto jump81;		
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump81;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jump81;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump81;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jum25;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='B')
				{ jump82:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump82;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump82;
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump82;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jump82;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump82;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jum25;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='C')
					{ jump83:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump83;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump83;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump83;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
						goto jump83;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump83;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jum25;
					}
					else
					{
						goto menu;
					}
				}// C
				else if(obj.d=='D')
				{
					goto jump5;
				}
				else
				{
					goto menu;
				} 
		    	}// sesmter 8
		    	else if(obj.c==9)
		    	{
		    		goto to;
				}// semester 9
				else 
				{
					goto menu;
				}	
			
	}
		//department 3
		else if(obj.b==3)
		{  jump6://at the D
			obj.semester();
			if(obj.c==1)
			{   jum26:
				obj.section();
				if(obj.d=='A')
				{   jump84:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
						 goto jump84;
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
						goto jump84;		
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump84;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jump84;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump84;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jum26;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='B')
				{ jump85:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump85;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump85;
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump85;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jump85;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump85;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jum26;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='C')
					{ jump86:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump86;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump86;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump86;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
						goto jump86;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump86;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jum26;
					}
					else
					{
						goto menu;
					}
				}// C
				else if(obj.d=='D')
				{
					goto jump6;
				}
				else
				{
					goto menu;
				}
			  }
			else if(obj.c==2)
			{   jum27:
				obj.section();
				if(obj.d=='A')
				{   jump87:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
						 goto jump87;
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
						goto jump87;		
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump87;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jump87;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump87;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jum27;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='B')
				{ jump88:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump88;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump88;
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump88;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jump88;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump88;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jum27;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='C')
					{ jump89:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump89;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump89;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump89;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
						goto jump89;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump89;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jum27;
					}
					else
					{
						goto menu;
					}
				}// C
				else if(obj.d=='D')
				{
					goto jump6;
				}
				else
				{
					goto menu;
				} 
		    	}//Semester 2
		    else if(obj.c==3)
			{   jum28:
				obj.section();
				if(obj.d=='A')
				{   jump90:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
						 goto jump90;
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
						goto jump90;		
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump90;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jump90;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump90;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jum28;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='B')
				{ jump91:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump91;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump91;
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump91;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jump91;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump91;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jum28;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='C')
					{ jump92:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump92;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump92;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump92;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
						goto jump92;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump92;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jum28;
					}
					else
					{
						goto menu;
					}
				}// C
				else if(obj.d=='D')
				{
					goto jump6;
				}
				else
				{
					goto menu;
				} 
		    	}//semsester 3
		    else if(obj.c==4)
			{  jum29: //goto jum29;
				obj.section();
				if(obj.d=='A')
				{   jump93:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
						 goto jump93;
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
						goto jump93;		
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump93;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jump93;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump93;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jum29;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='B')
				{ jump94:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump94;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump94;
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump94;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jump94;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump94;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jum29;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='C')
					{ jump95:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump95;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump95;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump95;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
						goto jump95;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump95;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jum29;
					}
					else
					{
						goto menu;
					}
				}// C
				else if(obj.d=='D')
				{
					goto jump6;
				}
				else
				{
					goto menu;
				} 
		    	}//semester 4
		    else if(obj.c==5)
			{   jum30://goto jum30;
				obj.section();
				if(obj.d=='A')
				{   jump96:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
						 goto jump96;
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
						goto jump96;		
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump96;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jump96;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump96;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jum30;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='B')
				{ jump97:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump97;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump97;
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump97;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jump97;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump97;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jum30;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='C')
					{ jump98:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump98;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump98;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump98;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
						goto jump98;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump98;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jum30;
					}
					else
					{
						goto menu;
					}
				}// C
				else if(obj.d=='D')
				{
					goto jump6;
				}
				else
				{
					goto menu;
				} 
		    	}//semester 5
		    else if(obj.c==6)
			{   jum31://goto jum31;
				obj.section();
				if(obj.d=='A')
				{   jump99:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
						 goto jump99;
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
						goto jump99;		
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump99;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jump99;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump99;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jum31;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='B')
				{ jump100:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump100;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump100;
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump100;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jump100;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump100;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jum31;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='C')
					{ jump101:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump101;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump101;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump101;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
						goto jump101;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump101;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jum31;
					}
					else
					{
						goto menu;
					}
				}// C
				else if(obj.d=='D')
				{
					goto jump6;
				}
				else
				{
					goto menu;
				} 
		    	}// semester 6
		    	else if(obj.c==7)
			{   jum32://goto jum32;
				obj.section();
				if(obj.d=='A')
				{   jump102:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
						 goto jump102;
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
						goto jump102;		
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump102;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jump102;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump102;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jum32;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='B')
				{ jump103:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump103;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump103;
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump103;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jump103;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump103;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jum32;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='C')
					{ jump104:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump104;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump104;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump104;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
						goto jump104;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump104;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto jum32;
					}
					else
					{
						goto menu;
					}
				}// C
				else if(obj.d=='D')
				{
					goto jump6;
				}
				else
				{
					goto menu;
				} 
		    	}//semester 7
		    	else if(obj.c==8)
			{   ju33://goto jum33;
				obj.section();
				if(obj.d=='A')
				{   jump105:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
						 goto jump105;
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
						goto jump105;		
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump105;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jump105;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump105;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto ju33;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='B')
				{ jump106:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump106;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump106;
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump106;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
							goto jump106;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump106;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto ju33;
					}
					else
					{
						goto menu;
					}
				}
				else if(obj.d=='C')
					{ jump107:
					obj.menu_of_student_record();
					if(obj.e==1)
					{
						obj.input_student_data();
						if(obj.re==1)
						{
							goto jump107;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==2)
					{
						obj.display_specific_student_data();
						if(obj.re==1)
						{
							goto jump107;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
						
					}
					else if(obj.e==3)
					{
						obj.display_all_student_data();
						if(obj.re==1)
						{
							goto jump107;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==4)
					{
						obj.delete_specific_student_data();
						if(obj.re==1)
						{
						goto jump107;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==5)
					{
						obj.delete_all_student_data();
						if(obj.re==1)
						{
							goto jump107;
							
						}else if(obj.re==2)
						{
							goto menu;
						}
					}
					else if(obj.e==6)
					{
						goto ju33;
					}
					else
					{
						goto menu;
					}
				}// C
				else if(obj.d=='D')
				{
					goto jump6;
				}
				else
				{
					goto menu;
				} 
		    	}// sesmter 8
		    	else if(obj.c==9)
		    	{
		    		goto to;
				}// semester 9
				else 
				{
					goto menu;
				}	
			
		}
		else
		{
			goto menu;
		}
	}
    else if(obj.a==2)
	{   label:
	  obj.faculty_record();
		if(obj.e2==1)
		{
			obj.faculty_data();
			if(obj.re3==1)
			{
				goto label;
			}
			if(obj.re3==2)
			{
				goto menu;
			}
		}
		else if(obj.e2==2)
		{
			obj.display_specific__member();
			if(obj.re4==1)
			{
			goto label;	
			}
			if(obj.re4==2)
			{
				goto menu;
			}
		}
		else if(obj.e2==3)
		{
			obj.display_all_data();
			if(obj.re5==1)
			{
			goto label;	
			}
			if(obj.re5==2)
			{
				goto menu;
			}
		}
		else if(obj.e2==4)
		{
			obj.delete_specific_member();
			if(obj.re6==1)
			{
		goto label;	
			}
			if(obj.re6==2)
			{
				goto menu;
			}
		}
		else if(obj.e2==5)
		{
			obj.delete_all();
			if(obj.re7==1)
			{
			goto label;	
			}
			if(obj.re7==2)
			{
				goto menu;
			}
		}
		else
		{
			goto menu;
		}
	} 
	
	else if(a==3)
	{
		exit(0);
	}
}
~university()
{
	cout<<"End of program";
 } 
};
int main()
{   
	university ob;
ob.University_menu();
}
