#include <iostream>

using namespace std;

int main()
{
    char character;
    cout << "Please enter one character: ";
    cin >> character;
    string type;

    if ((48 <= (int)character) && ((int)character <= 57))
    {
    type = "digit.";
    }
    else if ((65 <= (int)character) && ((int)character <= 90))
    {
    type = "upper case letter.";
    }
    else if ((97 <= (int)character) && ((int)character <= 122))
    {
    type = "lower case letter.";
    }
    else
    {
    type = "symbol/punctuation mark";
    }

    cout << "Your character is a/an " << type;

    return 0;
}
