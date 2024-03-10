#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, i = 2;
    cout << "Enter the value of n: ";
    cin >> n;
    while (i <= n)
    {
        sum = sum + i;
        i = i + 2;
    }
    cout << "Sum of all even numbers: " << sum;
}