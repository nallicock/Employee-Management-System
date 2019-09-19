#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include <cstdlib>
#include <iomanip>

#include "program.h"
using namespace std;
namespace sict {

	void clearKeyboard() {
		
			std::cout << endl << "\t\tPress enter to continue...";
			cin.get();
			cin.get();

	}

	void Employee::addEmployee() {
		std::cout << "\t\t\t\t\t\tEnter first name of employee: ";
		std::cin >> name;
		std::cout << "\t\t\t\t\t\tEnter employee ID: ";
		std::cin >> emp_id;
		std::cout << "\t\t\t\t\t\tEnter employee salary: ";
		std::cin >> salary;
		std::cout << "\t\t\t\t\t\tEnter years of experience: ";
		std::cin >> experience;

		char yn;
		std::cout << endl << "\t\tPress 'y' to save above information: ";
		std::cin >> yn;
		if (yn == 'y') {
			std::ofstream file("data.txt", std::ios_base::app);
			file << name << "\t" << setw(10) << setfill(' ') << emp_id << "\t" << setw(6) << setfill(' ') << salary << "\t" << setw(6) << setfill(' ') << experience << "\t" << setw(2) << setfill(' ') << std::endl;
			file.close();
			std::cout << endl << "\t\tEmployee added to database!" << endl;
			std::cout << endl;
			clearKeyboard();
			menuSelect();
		}
		else
			addEmployee();
		
	}

	void Employee::displayEmployee() {
		ifstream file;
		file.open("data.txt");
		std::string s;
		while (getline(file, s)){
			if (s[0] != '\0')
				std::cout << "\t\t\t\t\t\t" << s << endl;
		}
		clearKeyboard();
		menuSelect();
	}

	void Employee::menuSelect() {
		int choice;
		std::cout << endl <<
			"\t\t\t\t\t\t1. Display employees" << endl <<
			"\t\t\t\t\t\t2. Add Employees" << endl
			<< "\t\tPlease enter a selection: ";
		std::cin >> choice;
		std::cout << endl;
		if (choice == 1)
			displayEmployee();
		if (choice == 2)
			addEmployee();
		cout << endl;
	}

	void deleteEmployee() {
		cout << "\t\t\t\t\t\tEnter Employee ID to Delete: ";
		char ID[7];
		cin >> ID;

		//if (ID ==)
	}

	void updateEmployee() {

	}

}