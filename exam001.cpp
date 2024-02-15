#include <iostream>
//#include <iomanip>

using namespace std;

class Employee {
private:
    int employeeID;
    string name;
    int age;
    double salary;

public:
    // Constructor with parameters
    Employee(int id = 0, const string& n = "", int a = 0, double s = 0.0) : employeeID(id), name(n), age(a), salary(s) {}

    // Getter methods
    int getEmployeeID() const { return employeeID; }
    string getName() const { return name; }
    int getAge() const { return age; }
    double getSalary() const { return salary; }

    // Setter methods
    void setEmployeeID(int id) { employeeID = id; }
    void setName(const string& n) { name = n; }
    void setAge(int a) { age = a; }
    void setSalary(double s) { salary = s; }

    // Declare friend functions
    friend void calculateAverageSalary(const Employee[], int);
    friend void searchAndDisplayEmployee(const Employee[], int);
//    friend void inputEmployeeInfo(Employee[], int, const int);
    friend void displayAllEmployees(const Employee[], int);
};


// Method to add information for a new employee

void inputEmployeeInfo(Employee employees[], int& numEmployees, const int maxSize) {
    if (numEmployees < maxSize) {
        int id, age;
        double salary;
        string name;
        cout << "Enter employee ID: ";
        cin >> id;
        cout << "Enter employee name: ";
        cin.ignore(); // Ignore the newline character in the input buffer
        getline(cin, name);
        cout << "Enter employee age: ";
        cin >> age;
        cout << "Enter employee salary: ";
        cin >> salary;
        employees[numEmployees++] = Employee(id, name, age, salary); // Create Employee object using constructor with parameters
        cout << "Employee added successfully." << endl;
    } else {
        cout << "Maximum number of employees reached." << endl;
    }
}

// Method to display details of all employees
void displayAllEmployees(const Employee employees[], int numEmployees) {
    if (numEmployees > 0) {
        cout << "Employee details:" << endl;
        cout << setw(10) << "ID" << setw(20) << "Name" << setw(10) << "Age" << setw(15) << "Salary" << endl;
        for (int i = 0; i < numEmployees; ++i) {
            cout << setw(10) << employees[i].getEmployeeID() << setw(20) << employees[i].getName() << setw(10) << employees[i].getAge() << setw(15) << employees[i].getSalary() << endl;
        }
    } else {
        cout << "No employees to display." << endl;
    }
}

// Friend function to calculate and display the average salary of all employees
void calculateAverageSalary(const Employee employees[], int numEmployees) {
    if (numEmployees > 0) {
        double totalSalary = 0.0;
        for (int i = 0; i < numEmployees; ++i) {
            totalSalary += employees[i].getSalary();
        }
        double averageSalary = totalSalary / numEmployees;
        cout << "Average salary of all employees: " << averageSalary << endl;
    } else {
        cout << "No employees to calculate average salary." << endl;
    }
}

// Friend function to search for an employee by their ID and display their details
void searchAndDisplayEmployee(const Employee employees[], int numEmployees) {
    int id;
    cout << "Enter employee ID to search: ";
    cin >> id;
    bool found = false;
    for (int i = 0; i < numEmployees; ++i) {
        if (employees[i].getEmployeeID() == id) {
            cout << "Employee found:" << endl;
            cout << setw(10) << "ID" << setw(20) << "Name" << setw(10) << "Age" << setw(15) << "Salary" << endl;
            cout << setw(10) << employees[i].getEmployeeID() << setw(20) << employees[i].getName() << setw(10) << employees[i].getAge() << setw(15) << employees[i].getSalary() << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Employee with ID " << id << " not found." << endl;
    }
}

int main() {
    const int maxSize = 100;
    Employee employees[maxSize]; // Array of Employee objects
    int numEmployees = 0; // Number of employees currently in the array

    int choice;
    do {
        cout << "\nMenu:" << endl;
        cout << "1. Add information for a new employee" << endl;
        cout << "2. Display details of all employees" << endl;
        cout << "3. Calculate and display the average salary of all employees" << endl;
        cout << "4. Search for an employee by their ID and display their details" << endl;
        cout << "5. Exit the program" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
//            	void inputEmployeeInfo(Employee employees[], int& numEmployees, const int maxSize);

                inputEmployeeInfo(employees, numEmployees, maxSize);
                break;
            case 2:
                displayAllEmployees(employees, numEmployees);
                break;
            case 3:
                calculateAverageSalary(employees, numEmployees);
                break;
            case 4:
                searchAndDisplayEmployee(employees, numEmployees);
                break;
            case 5:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}

