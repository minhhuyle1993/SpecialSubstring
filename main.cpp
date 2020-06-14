#include <iostream>
#include <vector>

using namespace std;

/**
 * Special strings are defined as:
 * - a string with only 1 type of characters (aaaaa) (bbbb) (1111) (a)
 * - a palindrome (ooo2ooo) 
 * Find all special substrings in a given string
 * 
 * Example:
 * abcpo2ooo
 * 
 * special substrings: a, b, c, p, o, 2, o, o, o, o2o, oo, oo, ooo
 * */

// Build F7, Run Shift F5. OR Ctrl Shift P Cmake -> build/run/debug...

bool isPalindrome(std::string &inputString)
{
    bool returnValue = true;
    int middleChar;
    int stringLength = inputString.length();

    //Check if length is even -> not palindrome
    if (stringLength % 2 == 0)
    {
        returnValue = false;
        return returnValue;
    }

    middleChar = stringLength / 2;

    if ((inputString.at(middleChar) <= '9') && (inputString.at(middleChar) >= '0'))
    {
        //do nothing
    }
    else
    {
        returnValue = false;
        return returnValue;
    }

    for (int n = 0; n <= middleChar; n++)
    {
        if (inputString.at(n) != inputString.at(stringLength - n - 1))
        {
            returnValue = false;
            break;
        }
    }
    return returnValue;
}

bool isSpecial(std::string &inputString)
{
    bool returnValue = true;
    if (inputString.length() == 1)
    {
        returnValue = true;
    }
    else if (isPalindrome(inputString))
    {
        returnValue = true;
    }
    else
    {
        for (int n = 1; n < inputString.length(); n++)
        {
            if (inputString.at(0) != inputString.at(n))
            {
                returnValue = false;
                break;
            }
        }
    }
    return returnValue;
}

void getSpecialSubstrings(std::string &inputString)
{
    int count = 0;
    cout << "Special substrings:" << endl;
    /*
    Loop through the string, looking for n-sized special substring
    checked with isSpecial
    */

    for (int n = 1; n <= inputString.length(); n++)
    {
        for (int i = 0; i <= inputString.length() - n; i++)
        {
            std::string mysubString;
            mysubString = inputString.substr(i, n);
            //cout << mysubString << endl;
            if (isSpecial(mysubString))
            {
                cout << mysubString << endl;
                count++;
            }
        }
    }
    cout << "Number of special substrings" << count << endl;
}

int main(int, char **)
{
    std::string givenString = "abcpo2ooo";
    //std::string givenString = "oo2oo";
    getSpecialSubstrings(givenString);
}
