#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    int numbers[9];
    for (int i = 0; i <= 100; i++ )
    {
        int remainder = i % 10;
        int quotient = i / 10;
        if (remainder == quotient && i != 0 )
        {
            numbers[n++] = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << numbers[i] << "  " ;
    }
}