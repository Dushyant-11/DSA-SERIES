/* Take a floating-point number as input, typecast it into an integer, and print both
values. */

# include <iostream>
using namespace std;

int main () {
    float n;
    cout << "enter your number : ";
    cin >> n;
    cout << n << endl;
    cout << int(n);
return 0;

}