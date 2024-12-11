#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Class for student details
class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    // Constructor
    Student() : rollNo(0), marks(0.0) {}

    // Function to input student details
    void inputDetails() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cin.ignore(); // To clear the newline character from input buffer
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Marks: ";
        cin >> marks;
    }

    // Function to display student details
    void displayDetails() const {
        cout << "Roll Number: " << rollNo << "\n";
        cout << "Name: " << name << "\n";
        cout << "Marks: " << marks << "\n";
    }

    // Function to save student details to file
    void saveToFile(ofstream &outfile) const {
        outfile << rollNo << "\n" << name << "\n" << marks << "\n";
    }

    // Function to load student details from file
    void loadFromFile(ifstream &infile) {
        infile >> rollNo;
        infile.ignore(); // Ignore newline character
        getline(infile, name);
        infile >> marks;
    }

    // Getter for roll number
    int getRollNo() const {
        return rollNo;
    }
};

// Function to add a student
void addStudent(const string &filename) {
    ofstream outfile(filename, ios::app); // Open file in append mode
    if (!outfile) {
        cerr << "Error opening file for writing.\n";
        return;
    }

    Student student;
    student.inputDetails();
    student.saveToFile(outfile);

    outfile.close();
    cout << "Student added successfully.\n";
}

// Function to display all students
void displayAllStudents(const string &filename) {
    ifstream infile(filename);
    if (!infile) {
        cerr << "Error opening file for reading.\n";
        return;
    }

    Student student;
    cout << "\nAll Students:\n";
    while (infile.peek() != EOF) {
        student.loadFromFile(infile);
        student.displayDetails();
        // Prevent displaying the last entry twice
        if (infile.peek() == EOF) {
            break;
        }
        cout << "------------------------\n";
    }

    infile.close();
}

// Function to search for a student by roll number
void searchStudent(const string &filename) {
    ifstream infile(filename);
    if (!infile) {
        cerr << "Error opening file for reading.\n";
        return;
    }

    int rollNoToSearch;
    cout << "Enter Roll Number to search: ";
    cin >> rollNoToSearch;

    Student student;
    bool found = false;

    while (infile.peek() != EOF) {
        student.loadFromFile(infile);
        if (student.getRollNo() == rollNoToSearch) {
            cout << "\nStudent Found:\n";
            student.displayDetails();
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Student with Roll Number " << rollNoToSearch << " not found.\n";
    }

    infile.close();
}

int main() {
    string filename = "students.txt";
    int choice;

    do {
        cout << "\nStudent Management System\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search Student\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            addStudent(filename);
            break;
        case 2:
            displayAllStudents(filename);
            break;
        case 3:
            searchStudent(filename);
            break;
        case 4:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
