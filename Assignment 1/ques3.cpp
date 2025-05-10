//Take two numbers as input and perform addition, subtraction, multiplication and division. Display the results.
#include <iostream>
using namespace std;
int main() {
    int a,b;
    cout << "enter first no. : ";
    cin >> a;
    cout << "enter second no. : ";
    cin >> b;
    cout << "addition : " << a+b << endl;
    cout << "subtraction : " << a-b << endl;
    cout << "multiplication : " << a*b << endl;
    cout << "division : " << a/b << endl;
    return 0;
}