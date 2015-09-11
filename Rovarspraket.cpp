#include <iostream>

using namespace std;

    /*
    ** the following function translates regular phrases into
    ** the fictional swedish language of rovarspraket.
    ** rovarspraket goes like this:
    ** each consonant is repeated with the letter 'o' in between
    ** examples:
    ** hello -> hohelollolo
    ** rovarspraket -> rorovovarorsospoprorakoketot
    */
    
int main()
{
    string con = "bcdfghjklmnpqrstvwxyz";
    // declared consonants as a string for later reference.

    string input;
    getline(cin, input);
    // get user string.

    for (auto c : input)
    // cycle through each character in the string "input".
    {
        if(con.find(c) != string::npos)
            cout << c << "o" << c;
        // if the character is a consonant, print it out...
        else
            cout << c;
        // ... else just print out the character
    }
    cout << "\n";
    // prints out a new line
}