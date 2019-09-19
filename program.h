#include <iostream>

namespace sict {
	class Employee {
		int max_employees = 10;
		char name[50];
		char emp_id[6];
		double salary;
		int experience;

	public:
		void displayEmployee();
		void addEmployee();
		void deleteEmployee();
		void updateEmployee();
		void menuSelect();
	};

	void clearKeyboard();
}