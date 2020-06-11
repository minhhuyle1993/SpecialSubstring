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
 * special substrings: a, b, c, p, o, 2, o, o, o2o, oo, oo, ooo
 * */

void getSpecialSubstrings(std::string& inputString)
{
    cout << "Special substrings:" << endl;
}

int main(int, char**) {
    std::string givenString = "abcpo2oo";
    getSpecialSubstrings(givenString);
}
