#include <iostream>
using namespace std;

int main() { 
  int a, b, c;
   cout << "enter first number:";
    cin >> a;
   cout << "enter the second number:";
     cin >> b; 
    cout << "enter the third number::";
      cin >> c;
       if (a==b && b==c && a==c){
cout << "equal" << endl;
         } else {
           cout << "not equal" << endl;
         }

      return 0;
}