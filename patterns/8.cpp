#include <iostream>
using namespace std;

int main()
{
    int rows;

    // Input number of rows
    cout << "Enter the number of rows: ";
    cin >> rows;

    // Outer loop for each row
    for (int i = rows; i >= 1; i--)
    {
        // Inner loop to print stars in each row
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        // Newline after each row
        cout << endl;
    }

    return 0;
}
