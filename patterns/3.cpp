#include <iostream>
using namespace std;

int main()
{
    int rows, num = 1;
    cout << "Input number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num++ << " ";
        }
        cout << endl;
    }
    return 0;
}