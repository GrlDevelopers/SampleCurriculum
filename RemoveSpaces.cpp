#include <string>
#include <cctype>
#include <iostream>
    /*
    ** the function below takes in a user's sentence and removes
    ** all vowels and spaces.
    */
using namespace std;

int main()
{
    string x;
    string space = " ";
    string vowels = "aeiou";
    // initialized user's string (x), space string,
    // and vowels

    cout << "Enter sentence: " << endl;
    getline(cin, x);
    // get user's string.

    cout << "Your sentence without vowels: " << endl;

   for(size_t i=0; i < x.size(); i++)
    // for loop cycles through each character in the string x.
    {
        if(space.find(x.at(i)) == string::npos)
        // if the current character is not a space...
        {
            if(vowels.find(x.at(i)) == string::npos)
            // ... and if the current character is not a vowel...
                cout << x.at(i);
                // ... print the character!
        }
    }
    cout << "\n";
}
