#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double radius, area;
   cout << "enter the radius of the circle:";
    cin >> radius;
     area = M_PI * pow(radius,2) ;
        cout << "the area of the circle is" << area << endl;
          return 0;
}