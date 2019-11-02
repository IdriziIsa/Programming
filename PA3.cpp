/******************************
   Name
   Date
   PA3_Starter.cpp
   Write a description of the program
********************************/

// Headers
#include <iostream>		// cout, cin
#include <cstdlib>		// exit()
#include <string>		// strings
#include <fstream>		// file processing
#include <iomanip>		// stream manipulation

using namespace std;


// Global variables
const int MAX_STUDENTS = 25;	// We will not process more than 25 students even if the file contains more
const int MAX_GRADES = 5;		// Each student has exactly 5 grades
const string FILENAME = "NamesGrades.txt";	// The name of the file that you will read

// Function declarations
int loadStudentNamesGrades(string students[], int grades[][MAX_GRADES], string fileName, int maxStudents);
void displayAverages(string students[], int grades[][MAX_GRADES], int studentCount);
void displayMax(string students[], int grades[][MAX_GRADES], int studentCount);
void displayMin(string students[], int grades[][MAX_GRADES], int studentCount);
char getLetterGrade(double grade);
int getLongestNameLength(string students[], int studentCount);

int main()
{
	// You will need some variables here
	bool isaIsKill = true;
	string menuNames[] = { "Display Average Grade","Display Maximum Grade","Display Minumum Grade", "Quit Program" };
	// You need one to keep up with the actual number of students
	// You need an array of strings for the student names
	// You need a two dimensional array of ints for the grades of the students
	// You need a variable to hold the choice of the user for the menu


	// Get students and grades

	cout << "Grade Report Program" << endl;
	cout << setprecision(2) << fixed << endl;
	// Loop until user says to quit
	do
	{
		system("CLS"); // clear the screen

		// present menu and get user's choice

		for (int i = 0; i < 3; i++) // prints out menu
		{
			int j = 0;
			cout << i + 1 << '.' << ' ' << menuNames[j] << endl;
			j++;
		}

		// Process the choice

	} while (isaIsKill != false);


	// End of program    
	//	Make sure we place the end message on a new line
	cout << endl;

	return 0;
}

/***********************************************************
loadStudentNameGrades opens and read fileName. It will read in two strings, concatenate them, and then save
to the students array. It then reads five integers and save each to the grades array. The function will return
the actual number of student/grade combinations read
PARAM:	students is an array of strings that can hold up ot maxStudents values
		grades is a two dimensional array for holding the grades of each student
		fileName is the name of the file that will be opened and read
		maxStudents is the maximum number of students that we will read from the file
PRE:	students[] is large enough to contain up to maxStudents elements
		grades[] is large enough ot contain up to maxStudents elements
POST:	students[] contains the names of up to maxStudents
		grades[][] contains the grades for up to maxStudents
		The number of student/grade combinations actually read from the file is returned. This value can range
		between 0 <= numStudents <= maxStudents
NOTE:	students[] and grades[] are meant to be parralel arrays. students[0] and grades[0] are the same student
************************************************************/
int loadStudentNamesGrades(string students[],
	int grades[][MAX_GRADES],
	string fileName, int maxStudents)
{
	fileName = FILENAME;
	ifstream studentGrades;
	studentGrades.open(fileName, ios::in);
	/*
	for (int i = 0; i < MAX_GRADES; i++)
	{

	}*/


	cout << "" << endl;


	studentGrades.close();
	return 0;	// for stub out purposes, change this in your code
}

/***********************************************************
displayAverages calculates the average of each student and displays the
students name, average, and letter grade of the average in a table
PARAM:	students[] is an array of strings that contains the names of studentCount students
		grades[] is an array of integers that contains the grades of studentCount students
		studentCount contains the value of the number of elements in the students[] and grades[] arrays
PRE:	students[] and grades[] contain values for studentCount elements
POST:	table of student names, averages, and letter grades is displayed
************************************************************/
void displayAverages(string students[], int grades[][MAX_GRADES], int studentCount)
{

}

/***********************************************************
displayMax calculates the maximum grade of each student and displays the
students name, maximum grade, and letter grade of the maximum grade in a table
PARAM:	students[] is an array of strings that contains the names of studentCount students
		grades[] is an array of integers that contains the grades of studentCount students
		studentCount contains the value of the number of elements in the students[] and grades[] arrays
PRE:	students[] and grades[] contain values for studentCount elements
POST:	table of student names, maximum grades, and letter grades is displayed
************************************************************/
void displayMax(string students[], int grades[][MAX_GRADES], int studentCount)
{

}

/***********************************************************
displayMin calculates the minimum grade of each student and displays the
students name, minimum grade, and letter grade of the minimum grade in a table
PARAM:	students[] is an array of strings that contains the names of studentCount students
		grades[] is an array of integers that contains the grades of studentCount students
		studentCount contains the value of the number of elements in the students[] and grades[] arrays
PRE:	students[] and grades[] contain values for studentCount elements
POST:	table of student names, minimum grades, and letter grades is displayed
************************************************************/
void displayMin(string students[], int grades[][MAX_GRADES], int studentCount)
{

}

/***********************************************************
getLetterGrade converts a numerical grade to a letter grade
PARAM:	grade is the numerical grade to convert. Expected range is 0 <= grade <= 100
PRE:	grade contains a value in the correct range
POST:	The corresponding letter grade of the numerical grade is returned
************************************************************/
char getLetterGrade(double grade)
{
	char ig = 'e';
	return ig;
}

/***********************************************************
getLongestNameLength returns the length of the longest string from a list of strings
PARAM:	students[] is an array of strings that contains the name of students
		studentCount is the size of the students[] array
PRE:	students[] contains studentCount names
POST:	The length of the longest string in students[] is returned
************************************************************/
int getLongestNameLength(string students[], int studentCount)
{

	return 0;
}