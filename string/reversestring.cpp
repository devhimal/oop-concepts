#include <iostream>
#include <algorithm>
using namespace std;

string reverseString(const string &str)
{
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return reversed;
}

int main()
{
    string input = "Himal Tamang";
    string output = reverseString(input);
    cout << "Reversed String: " << output << endl;
    return 0;
}