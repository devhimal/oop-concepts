#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Input number of rows: ";
    cin >> rows;

    for (int i = rows; i >= 1; i--)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int k = i; k <= rows; k++)
        {
            cout << k;
        }
        cout << endl;
    }
    return 0;
}