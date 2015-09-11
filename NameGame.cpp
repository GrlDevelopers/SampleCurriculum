#include <iostream>
#include <string>
	/*
	** the following function is an ode to the famous song
	** "the name game"! it gets a person's name and 
	** changes it to fit the song.
	** example:
	** input name: "Lincoln"
	** Lincoln, Lincoln, bo Bincoln,
	** Bonana fanna fo Fincoln,
	** Fee fy mo Mincoln,
	** Lincoln!
	*/

using namespace std;

int main()
{	// create string and allow user to assign value to it
    string name;
    cout << "Enter your name!" << endl;
    getline(cin, name);

    const string nam = name;
    // create a constant string nam that holds the original name--
    // this is because when we manipulate the name later, it will
    // change the original value for the variable name.
    // by creating an additional constant, the original value of
    // name will be stored in nam.

    string last = name.erase (0,1);
    // name.erase(0,1) erases the first letter of the inputted name
    // and leaves the remaining letters.
    // the format for the erase function goes like this:
    // string.erase(position to erase code at, number of characters to erase)

    // print out the name game with the user's name!
    cout << nam << ", " << nam << " bo B" << last << "," << endl;
    cout << "Fee fy mo " << "M" << last << "," << endl;
    cout << nam << "!"  << endl;
}
