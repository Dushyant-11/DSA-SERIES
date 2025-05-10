// Take a character as input and print its corresponding ASCII value.
#include <iostream>
using namespace std;
int main () {
    char ch;
    cout << "Enter your character : ";
    cin >> ch;
    cout << "ASCII value of " << ch << "is " << int(ch) << endl;
    return 0;
}