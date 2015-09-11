	/*
	** this file takes in a user's dna input
	** and returns the complementary base pairs.
    ** some basic info about base pairs:
    ** during dna transcription, we use complementary
    ** base pairs. here is the key:
    ** A <-> T
    ** G <-> C
	** 
	** TOPICS COVERED:
	** 1. input/output
	** 2. strings
	** 3. the 'auto' keyword
	** 4. switch statements
	*/

#include <iostream>

using namespace std;

int main()
{
    // create string and allow user to assign value
	string dna;
	cout << "ENTER DNA TO BE REPLICATED IN ALL CAPS:" << endl;
	getline(cin, dna);

    // give user their complementary DNA strand
	cout << "YOUR COMPLEMENTARY DNA: " << endl;

    for(auto c : dna)
    // this is a range-based for. the format is:
    // for(declaration : expression) statement
    // for every character in string y (each character is called c),
    // the code will follow through with the statement below the for.
    // essentially, it is a simplified for loop that allows us to
    // cycle through each character in a string.
    {
        switch(c)
        {
        case'A':
            cout << "T";
            break;
        case 'C':
            cout << "G";
            break;
        case 'G':
            cout << "C";
            break;
        case 'T':
            cout << "A";
            break;
        default:
        cout << " ";
        }
    }
    cout << "\n";
}