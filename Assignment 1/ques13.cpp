/* Write a program to find the euclidean distance between two coordinates.Take both
the coordinates from the user as input. */

# include <iostream>
# include <cmath>
using namespace std;

int main () {
int x1, x2, y1, y2;
float d;
cout << "enter your x coordinates : ";
cin >> x1 >> x2;
cout << "enter your y coordinates : ";
cin >> y1 >> y2;
d = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
cout << "your euclidean distance is " << d << endl;
return 0;

}