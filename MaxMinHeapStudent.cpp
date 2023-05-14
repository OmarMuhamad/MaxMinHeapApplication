// Author: OMohammad
// Purpose: Store info in Max Heap
#include "Header.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <cctype>
#include <cstring>
#include <string>
using namespace std;
int main(){
	while (true) {
		int choice;
		cout << "Choose Data Structure:\n1 - BST\n2 - AVl\n3 - Min Heap\n4 - Max Heap\n5 - Exit Program\n";
		cin >> choice;
		if (choice == 3) {
			int NumberOfStudents = students();
			Student* StudentsList = new Student[NumberOfStudents];
			loadStudents(StudentsList);
			while (true) {
				int choice1;
				cout << "Choose one of the following options:\n1 - Add student\n2 - Print All (sorted by gpa)\n3 - Main Menu\n";
				cin >> choice1;
				if (choice1 == 1) {
					string name, department; double GPA; int id;
					cout << "Enter Student's ID: "; cin >> id;
					cout << "\nEnter Student's Name: "; cin.ignore(); getline(cin, name);
					cout << "\nEnter Student's GPA: "; cin >> GPA;
					cout << "\nEnter Student's Department: "; cin >> department;
					Student student(id, name, GPA, department);
					StudentsList = addStudent(StudentsList, NumberOfStudents, student);
					NumberOfStudents++;
					sortMin(StudentsList, NumberOfStudents, 0);
					printStudents(StudentsList, NumberOfStudents);
					cout << endl;
				}
				else if (choice1 == 2) {
					sortMin(StudentsList, NumberOfStudents, 0);
					printStudents(StudentsList, NumberOfStudents);
					cout << endl;
				}
				else break;
			}
		}
		if (choice == 4) {
			int choice1;
			int NumberOfStudents = students();
			Student* StudentsList = new Student[NumberOfStudents];
			loadStudents(StudentsList);
			while (true) {
				cout << "Choose one of the following options:\n1 - Add student\n2 - Print All (sorted by gpa)\n3 - Main Menu\n";
				cin >> choice1;
				if (choice1 == 1) {
					string name, department; double GPA; int id;
					cout << "Enter Student's ID: "; cin >> id;
					cout << "\nEnter Student's Name: "; cin.ignore(); getline(cin, name);
					cout << "\nEnter Student's GPA: "; cin >> GPA;
					cout << "\nEnter Student's Department: "; cin >> department;
					Student student(id, name, GPA, department);
					StudentsList = addStudent(StudentsList, NumberOfStudents, student);
					NumberOfStudents++;
					sortMax(StudentsList, NumberOfStudents, 0);
					printStudents(StudentsList, NumberOfStudents);
				}
				else if (choice1 == 2) {
					sortMax(StudentsList, NumberOfStudents, 0);
					printStudents(StudentsList, NumberOfStudents);
				}
				else break;

			}
		}
	}
}


