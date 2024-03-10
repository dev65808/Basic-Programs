#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a Character: ";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        cout << "Lower Case";
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "Upper Case";
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "Numeric";
    }
}