#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(string binary)
{
    int decimal = 0;
    int power = 0;
    for (int i = binary.length() - 1; i >= 0; i--)
    {
        if (binary[i] == '1')
        {
            decimal += pow(2, power);
        }
        power++;
    }
    return decimal;
}

int main()
{
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;
    cout << "Decimal: " << binaryToDecimal(binary) << endl;
    return 0;
}
