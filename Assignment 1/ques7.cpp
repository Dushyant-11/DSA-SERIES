/* Take an integer between 65 and 90 as input and print its corresponding uppercase
letter. */

#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter your number : "; 
    cin >> n;
    if (n>65 && n<90) {
        cout << "It's uppercase value is " << char(n) << endl ;
    } else {
        cout << "enter a number between 65 and 90" << endl; 
    }
    return 0;
}