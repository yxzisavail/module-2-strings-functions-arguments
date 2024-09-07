#include <iostream>
#include <string>
using namespace std;

// Function declarations for the check1 and check2 functions.
bool check1(string stringToCheck);
bool check2(string stringToCheck);

// The main function, were the program begins.
int main(int argc, char* argv[])
{
    // If the argument count does not equal 2,
    // then print a usage message.
    if (argc != 2)
    {
        cerr << "Usage: " << argv[0]
             << " <string-to-check>" << endl;
        exit(1);
    }

    // Create a new string named inputString.
    string inputString = argv[1];

    // Call check1 function.
    if (check1(inputString))
    {
        cout << inputString << " is a palindrome according to check 1" << endl;
    }
    else
    {
        cout << inputString << " is NOT a palindrome according to check 1" << endl;
    }

    // Call check2 function.
    if(check2(inputString))
    {
        cout << inputString << " is a palindrome according to check 2" << endl;
    }
    else
    {
        cout << inputString << " is NOT a palindrome according to check 2" << endl;
    }

    return 0;
}

// This function will return true if the input string is a palindrome.
// Algorithm: Iterate from forward to back, and from back to forward, and check that they are the same.
bool check1(string stringToCheck)
{
    for (int i=0;i<=stringToCheck.size();i++)
    {
        char char1=stringToCheck[i];
        char char0=stringToCheck[stringToCheck.size()-1-i];
        if (char1!=char0)
            return false;
    }
    return true;
}

// This function will return true if the input string is a palindrome.
// Algorithm: Create a copy of the string, in reverse, and check that the copy matches the original.
bool check2(string stringToCheck)
{
    string string1;
    for (int i=stringToCheck.size();i>0;i--)
    {
        char char0=stringToCheck[i-1];
        string1+=char0;
    }

    if (stringToCheck==string1)
        return true;
    else
        return false;
    
}