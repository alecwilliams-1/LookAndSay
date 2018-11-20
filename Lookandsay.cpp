#include <iostream>
#include <string>
using namespace std;
int main()
{
    /*chars to store
    next char in the string,
    the character being looked for,
    and the number of characters of lookFor that have been seen so far*/
    char next, LookFor, count;

    /* the string that is being analyzed and
    the string that is being constructed from the one being parsed*/
    string LookSayString = "1";
    string newString;

    //debug statement because I'm not exactly a pro.
    cout << LookSayString;

    for (int i = 0; i < LookSayString.size; i++)
    {
        LookFor = LookSayString[i];
        cout << LookFor;
    }

    return 0;
}
