/*
 * Student.cpp
 *
 *  Created on: Feb 21, 2020
 *      Author: michaelengling
 */

#include "Student.h"
#include <iostream>
#include <vector>

using namespace std;


Student::Student() {
	// TODO Auto-generated constructor stub

	cout << "Constructing new Student" << endl;

}

Student::~Student() {
	// TODO Auto-generated destructor stub
	cout << "Deleting instantiation of Student" << endl;
}

string first_;
string last_;
float gpa_;
int id_;

string get_First() {
	return first_;
}

string get_Last() {
	return last_;
}

float get_GPA() {
	return gpa_;
}

int get_ID() {
	return id_;
}


/**
 * Take a vector of Student objects and returns a new vector
 * with all Students whose GPA is lower than 1.0
 */

vector<Student> find_failing_students(vector<Student> &students) {

	 vector<Student> failing_students;

	 // Declaring an iterator

	// vector<Student>::iterator i;

	     for (int i = 0; i < students.size(); i++) {
	    	 if (students.at(i).get_GPA() < 1.0){
	    		 	failing_students.push_back(students.at(i));
	    	 }
	     }

	//iterates through the students vector, appending each student whose
	//GPA is less than 1.0 to the failing_students vector

	 // iterators
	 /**
	Declaring a vector
    vector<int> v = { 1, 2, 3 };

    // Declaring an iterator
    vector<int>::iterator i;

    int j;

    cout << "Without iterators = ";

    // Accessing the elements without using iterators
    for (j = 0; j < 3; ++j)
    {
        cout << v[j] << " ";
    }

    cout << "\nWith iterators = ";

    // Accessing the elements using iterators
    for (i = v.begin(); i != v.end(); ++i)
    {
        cout << *i << " ";
    }

	  */

	return failing_students;
}

/**
 * called with a Student and prints their First and Last name, GPA, and ID
 */
void print_info() {
	Student s1;

	s1.get_First();
	s1.get_Last();
	s1.get_GPA();
	s1.get_ID();

	//cout << s1_firstName + s1_lastName << "GPA: ", s1_GPA << "ID: ", s1_ID << endl;
}
/**
 * Takes a vector of Student objects and prints them to the screen
 */

void print_students (const vector<Student> &students){
	//iterates through the students vector
	//calling print_info for each student
}
