//Take input of principle, time and rate and find the simple interest.
#include <iostream>
using namespace std;
int main () {
    int p,r,t,SI;
    cout << "Enter principal amount (in Rs.) : ";
    cin >> p;
    cout << "Enter annual rate of interest (in percentage) : ";
    cin >> r;
    cout << "Enter time for which the money is invested or borrowed (in years) : ";
    cin >> t;
    SI=(p*r*t)/100;
    cout << "Simple Interest = " << SI << endl;

    return 0;

}