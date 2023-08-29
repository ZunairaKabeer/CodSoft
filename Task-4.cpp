#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Function to count words in a file stream
int wordCount(ifstream& fin) {
    int count = 0;
    string word;

    // Loop through the file, reading words using the >> operator
    while (fin >> word) {
        count++; // Increment the word count
    }

    return count; // Return the total word count
}

int main() {
    string filename;
    cout << "Enter the file name: ";
    cin >> filename; // Get the filename from the user

    ifstream inputFile(filename); // Open the file for reading
    
    if (!inputFile.is_open()) { // Check if the file was opened successfully
        cout << "File not found." << endl;
        return 1; // Exit the program with an error code
    }

    int totalWords = wordCount(inputFile); // Call the wordCount function to count words
    cout << "Total word count: " << totalWords << endl; // Display the word count

    inputFile.close(); // Close the input file

    return 0; // Exit the program successfully
}
