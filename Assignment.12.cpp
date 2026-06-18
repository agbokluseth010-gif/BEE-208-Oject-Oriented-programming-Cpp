#include <iostream>
using namespace std;

 int main() {
   float a, b;
    cout << "enter floating number:";
      cin >> a;
    cout << "enter floating number:";
       cin >> b;  
    float larger = (a>b)? a:b;
      cout <<"larger number is:" << larger << endl;
         return 0;
 }