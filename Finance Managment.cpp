#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
#include <unordered_map>
using namespace std;

//---------------------------------------------------------> STARTS FROM FORCASTING CODE

class Forecasting {
	private:
		string name;
		double initial;
		double historical;

	public:
		Forecasting(const string &deptName, double initial, double historical) {
			name = deptName;
			this->initial = initial;
			this->historical = historical;
			}

		const string &getName() const {
			return name;
			}

		double getInitial() const {
			return initial;
			}

		double getHistorical() const {
			return historical;
			}
	};

class ForecastGenerator {
	public:
		static double generateForecast(double historical, double probability) {
			return historical * (1 + probability);
			}
	};

void inputForecasting(Forecasting &dept) {
	cout << "Enter initial budget for the " << dept.getName() << " department: $";
	double initial;
	cin >> initial;

	cout << "Enter overall data for the " << dept.getName() << " department: $";
	double historical;
	cin >> historical;

	dept = Forecasting(dept.getName(), initial, historical);
	}

void displayForecasting(const Forecasting &dept, double probability) {
	double forecast = ForecastGenerator::generateForecast(dept.getHistorical(), probability);
	cout << "Forecast for the " << dept.getName() << " department: $" << forecast << "\n";
	}

//---------------------------------------------------------> NOW THE SPENDING CODE BEGINS

class Department {
	protected:
		string name;
		double allocatedFunds;
		unordered_map<int,string> options;

	public:
		Department(const string& deptName) : allocatedFunds(0.0) {
			name=deptName;
			}

		void displayOptions() const {
			cout << "Options for " << name << " Department:\n";
			for (const auto& option : options) {
				cout << option.first << ". " << option.second << "\n";
				}
			cout << "Total: $" << fixed << setprecision(2) << allocatedFunds << "\n\n";
			}

		void allocateFunds(int option, double funds) {
			if (options.find(option) != options.end()) {
				allocatedFunds += funds;
				cout << "Funds allocated to " << options[option] << " in " << name << ": $" << funds << "\n";
				}
			else {
				cout << "Invalid option selected.\n";
				}
			}
	};

class TechnologyDepartment : public Department {
	public:
		TechnologyDepartment() : Department("Technology") {
			options = {
					{1, "Teaching and Learning Salaries for Faculty and Staff"},
					{2, "Instructional materials and equipment"},
					{3, "Textbooks, Lab Supplies, Software"}
				};
			}
	};

class MedicalDepartment : public Department {
	public:
		MedicalDepartment() : Department("Medical") {
			options = {
					{7, "Teaching and Learning Salaries for Faculty and Staff"},
					{6, "Simulators and Mannequins"},
					{5, "Technology Infrastructure"},
					{4, "Research Facilities and Equipment"},
					{3, "Clinical Services"},
					{2, "Community Outreach Programs"},
					{1, "Public Service and Outreach"}
				};
			}
	};

class SellOldTechnologies {
	private:
		unordered_map <string,double> prices;
		double totalEarned;

	public:
		SellOldTechnologies() : totalEarned(0.0) {
			prices = {
					{"X-ray machines", 5000.0},
					{"CT scanners", 10000.0},
					{"ultrasound machines", 5000.0},
					{"Centrifuges", 500.0},
					{"microscopes", 200.0},
					{"analyzers", 1000.0},
					{"Furniture and medical carts", 200.0},
					{"Desktops", 1000.0},
					{"laptops", 1000.0},
					{"printers", 1000.0},
					{"Servers and network equipment", 1000.0},
					{"Routers, switches, firewalls", 1000.0},
					{"Software licenses", 500.0}
				};
			}

		void displayOptions() const {
			cout << "Option 3. To Sell Old Technologies:\n";
			for (const auto& item : prices) {
				cout << item.first << " $" << item.second << "\n";
				}
			cout << "Total: $" << std::setprecision(2) << fixed << totalEarned << "\n\n";
			}

		void sellItem(const string& item) {
			if (prices.find(item) != prices.end()) {
				totalEarned += prices[item];
				cout << "Sold " << item << " for $" << prices[item] << "\n";
				}
			else {
				cout << "Invalid item selected.\n";
				}
			}

		double getTotalEarned() const {
			return totalEarned;
			}
	};

//---------------------------------------------------------> Now We Create an Object Section

int main() {
	TechnologyDepartment techDept;
	MedicalDepartment medicalDept;
	SellOldTechnologies sellOldTech;

	cout<<"<========================================>"<<endl;
	cout<<"University Finance Management System - C++"<<endl;
	cout<<"<========================================>"<<endl;
	cout<<"Submitted to: Zainab Zafar"<<endl;
	cout<<"Submitted by: Muhammad Uzair (129)"<<endl;
	cout<<"<================================>"<<endl;
	cout<<"\n";

	string user;
	cout << "Enter 'A' For Department Spendings\n";
	cout << "Enter 'B' For Department Forecasting: ";
	cin >> user;
	cout<<"\n";

	while (user == "A") {
		cout << "Select an option:\n";
		cout << "1. Technology Department\n";
		cout << "2. Medical Department\n";
		cout << "3. Sell Old Technologies\n";
		cout << "0. Exit\n";

		cout<<"\n";
		cout << "From 0 to 3 - Select Option : ";
		int option;
		cin >> option;
		cout<<"\n";

		if (option == 0) {
			break;
			}

		switch (option) {
			case 1:
				techDept.displayOptions();
				cout << "Enter the option to allocate funds: ";
				int techOption;
				double techFunds;
				cin >> techOption;
				cout << "Enter the amount to allocate: $";
				cin >> techFunds;
				techDept.allocateFunds(techOption, techFunds);
				break;

			case 2:
				medicalDept.displayOptions();
				cout << "Enter the option to allocate funds: ";
				int medOption;
				double medFunds;
				cin >> medOption;
				cout << "Enter the amount to allocate: $";
				cin >> medFunds;
				medicalDept.allocateFunds(medOption, medFunds);
				break;

			case 3:
				sellOldTech.displayOptions();
				cout << "Enter the item to sell (type 'done' to finish): ";
				string item;
				cin >> item;
				while (item != "done") {
					sellOldTech.sellItem(item);
					sellOldTech.displayOptions();
					cout << "Enter the next item to sell (type 'done' to finish): ";
					cin >> item;
					}
				cout << "Total earned from selling old technologies: $" << sellOldTech.getTotalEarned() << "\n";
				break;


			}
		}

	while (user == "B") {
		cout << "Select an option:\n";
		cout << "1. Display Medical Department Forecast\n";
		cout << "2. Display Technology Department Forecast\n";
		cout << "0. Exit\n";

		cout<<"\n";
		cout << "From 0 to 2 - Select Option : ";
		int option2;
		cin >> option2;
		cout<<"\n";

		switch (option2) {
			case 1: {
				Forecasting medDepObj("Medical", 0.0, 0.0);
				inputForecasting(medDepObj);
				displayForecasting(medDepObj, 0.1);
				break;
				}

			case 2: {
				Forecasting techDepObj("Technology", 0.0, 0.0);
				inputForecasting(techDepObj);
				displayForecasting(techDepObj, 0.08);
				break;
				}

			case 0:
				cout << "Exiting program.\n";
				break;

			default:
				cout << "Invalid option selected.\n";
				break;
			}
		}

	return 0;
	}
