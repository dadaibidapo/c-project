#include <fstream>
#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int id;
    double gpa;

public:
    // Constructors
    Student() : name(""), id(0), gpa(0.0) {}
    Student(const string& n, int i, double g) : name(n), id(i), gpa(g) {}

    // Function to calculate modified GPA
    double calculateModifiedGpa() const {
        return gpa + 0.5;
    }

    // Function to display student information
    void displayInfo(ofstream& out) const {
        out << "Name: " << name << "\n";
        out << "ID: " << id << "\n";
        out << "Original GPA: " << gpa << "\n";
        out << "Modified GPA: " << calculateModifiedGpa() << "\n";
        out << "------------------------\n";
    }
};

int main() {
    ifstream inputFile("students.txt");
    ofstream outputFile("modified_students.txt");

    if (!inputFile.is_open()) {
        cout << "Error opening the input file.\n";
        return 1;
    }

    if (!outputFile.is_open()) {
        cout << "Error opening the output file.\n";
        return 1;
    }

    // Read student information from the input file and write modified info to the output file
    while (!inputFile.eof()) {
        string name;
        int id;
        double gpa;

        // Read data from the file
        inputFile >> name >> id >> gpa;

        // Create a Student object
        Student student(name, id, gpa);

        // Display modified student information
        student.displayInfo(outputFile);
    }

    // Close files
    inputFile.close();
    outputFile.close();

    cout << "Modified student information has been written to 'modified_students.txt'.\n";

    return 0;
}

