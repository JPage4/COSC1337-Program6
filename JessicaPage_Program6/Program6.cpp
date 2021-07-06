//***************************************************************
//
//  Developer:         Jessica Page
//
//  Program #:         Program 6
//
//  File Name:         Program6.cpp
//
//  Course:            COSC 1337 Programming Fundamentals II 
//
//  Due Date:          7/6/2021
//
//  Instructor:        Prof. Fred Kumi 
//
//  Chapter:           Chapter 6 & 13
//
//  Description:
//     <An explanation of what the program is designed to do>
//
//***************************************************************

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

void developerInfo();
void calcFacultyNewSalary();
void readFile();

//*********************************************************************
//
//  Function:     main
// 
//  Description:  The main function of the program
//
//  Parameters:   None
//
//  Returns:      Zero (0) 
//
//*********************************************************************
int main()
{
    cout << fixed << showpoint << setprecision(2);

    developerInfo();
    calcFacultyNewSalary();


    system("PAUSE");
    return 0;
}

//***************************************************************
//
//  Function:     calcFacultyNewSalary
// 
//  Description:  The function calculates the faculty's new pay
//
//  Parameters:   None
//
//  Returns:      Zero (0) 
//
//**************************************************************
void calcFacultyNewSalary()
{
    double salary;                              // declare variables
    double raise;
    double newSalary;
    double totalOldSalary = 0;
    double totalNewSalary = 0;
    double totalRaise = 0;
    double percent = 0;

    int counter = 0;

    ifstream inFile;                            // create an input file object
    inFile.open("Program6.txt");                // open the file for read


}

//*********************************************************************
//
//  Function:     readFile
// 
//  Description:  Reads data from input file
//
//  Parameters:   None
//
//  Returns:      None 
//
//*********************************************************************
void readFile()
{

}

//*********************************************************************
//
//  Function:     developerInfo
// 
//  Description:  Prints Programmer's information
//
//  Parameters:   None
//
//  Returns:      None 
//
//*********************************************************************
void developerInfo()
{
    cout << "Name:     Jessica Page" << endl;
    cout << "Course:   COSC 1337 Programming Fundamentals II" << endl;
        cout << "Program:  Six"
        << "\n\n";

}// End of developerInfo

