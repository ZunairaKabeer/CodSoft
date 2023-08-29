#include <iostream>  // Include input/output stream library
#include <string>    // Include string library
#include <iomanip>   // Include input/output manipulation library
using namespace std; // Use the standard namespace

string calAvg(int Marks[], int Num)
{
    int avg = 0;     // Initialize variable to store the average
    string avgGrade; // Initialize variable to store the average grade
    int sum = 0;     // Initialize variable to store the sum of marks

    for (int i = 0; i < Num; i++) // Loop through all the marks in the array
    {
        sum += Marks[i]; // Calculate the sum of marks
    }

    avg = sum / Num; // Calculate the average by dividing the sum by the number of marks

    if (avg >= 90) // Determine the average grade based on the average
    {
        avgGrade = "A";
    }
    else if (avg >= 80)
    {
        avgGrade = "B";
    }
    else if (avg >= 70)
    {
        avgGrade = "C";
    }
    else if (avg >= 60)
    {
        avgGrade = "D";
    }
    else if (avg >= 50)
    {
        avgGrade = "E";
    }
    else
    {
        avgGrade = "F";
    }

    return avgGrade; // Return the calculated average grade
}

int main()
{
    int stdNum; // Declare variable to store the number of students
    cout << "Enter the number of students: ";
    cin >> stdNum; // Read the number of students from the user

    string stdName[stdNum];  // Declare an array to store the names of students
    int arrMarks[stdNum];    // Declare an array to store the marks of students
    string arrGrade[stdNum]; // Declare an array to store the grades of students

    for (int i = 0; i < stdNum; i++) // Loop through all the students
    {
        cout << "Enter the name of student " << i + 1 << ": ";
        cin >> stdName[i]; // Read the name of the student

        cout << "Enter the marks of student " << i + 1 << ": ";
        cin >> arrMarks[i]; // Read the marks of the student

        if (arrMarks[i] >= 90) // Determine the grade based on the marks
        {
            arrGrade[i] = "A";
        }
        else if (arrMarks[i] >= 80)
        {
            arrGrade[i] = "B";
        }
        else if (arrMarks[i] >= 70)
        {
            arrGrade[i] = "C";
        }
        else if (arrMarks[i] >= 60)
        {
            arrGrade[i] = "D";
        }
        else if (arrMarks[i] >= 50)
        {
            arrGrade[i] = "E";
        }
        else
        {
            arrGrade[i] = "F";
        }
    }

    cout << "\nStudent Grades Summary:\n";
    cout << "-------------------------------------------------------\n";
    cout << setw(4) << "ID" << setw(20) << "Name" << setw(10) << "Marks" << setw(8) << "Grade" << endl;
    cout << "-------------------------------------------------------\n";

    for (int i = 0; i < stdNum; i++) // Loop through all the students again
    {
        cout << setw(4) << i + 1 << setw(20) << stdName[i] << setw(10) << arrMarks[i] << setw(8) << arrGrade[i] << endl;
        // Output the student ID, name, marks, and grade in formatted columns
    }

    cout << "-------------------------------------------------------\n";

    // Calculate and display the class average
    int classAvg = 0;
    for (int i = 0; i < stdNum; i++) // Loop through all the students once more
    {
        classAvg += arrMarks[i]; // Calculate the sum of all marks for class average
    }
    classAvg /= stdNum; // Calculate the average by dividing the sum by the number of students

    cout << "Average Marks of the Class: " << classAvg << endl;                 // Output the class average
    cout << "Average Grade of the Class: " << calAvg(arrMarks, stdNum) << endl; // Output the class average grade using the calAvg function

    return 0; // Return 0 to indicate successful execution of the program
}