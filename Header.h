// Author: OMohammad
// Purpose: Store info in Min/Max Heap

/* MAIN ALOG
* 1 - first we will open the file and get the information from it
* 2 - we will create an array of Student (of objects)
* 3 - we will then sort the array of Student based on the GPA in the array
* 4 - if we add a student we will create object and add to the array
*/
#include <iostream>
#include <fstream>
#include <vector>
#include <cctype>
#include <cstring>
#include <string>
using namespace std;
class Student {
	int id;
	string name;
	double GPA;
	string department;
public:
	Student(int id, string name, double GPA, string department) :
		id(id), name(name), GPA(GPA), department(department)
	{}
	Student() {
		id = 0;
		name = "N/A";
		GPA = 0.0;
		department = "N/A";
	}
	void setID(int id) {
		id = id;
	}
	void setName(string name) {
		name = name;
	}
	void setGPA(double GPA) {
		GPA = GPA;
	}
	void setDep(string dep) {
		department = dep;
	}
	int getID() {
		return id;
	}
	double getGPA() {
		return GPA;
	}
	string getName() {
		return name;
	}
	string getDepartment() {
		return department;
	}
};
// return number of students in the file
int students();

// to load students from file
void loadStudents(Student StudentsList[]);

// heapify Process
void HeapifyMax(Student studentsList[], int students, int i);

// heapify Process
void HeapifyMin(Student studentsList[], int students, int i);

// print students
void printStudents(Student studentsList[], int students);

// sorting in maxHeap
void sortMax(Student studentsList[], int students, int i);

// sorting in minHeap
void sortMin(Student studentsList[], int students, int i);

/* add student
* to add student you add to the leave then you reHeapify the tree to in max Heap
* after you insert the student at the end of the array you will check its parent to Heapify the tree again
*/
Student* addStudent(Student studentsList[], int students, Student);
