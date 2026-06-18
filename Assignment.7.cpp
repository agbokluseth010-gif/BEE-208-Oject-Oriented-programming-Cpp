#include <iostream>
#include <string>
using namespace std;

int main(){
string str;
  cout << "enter a string:";
     cin >> str;

     if(str.find('a')!= string::npos){
        cout << "string contains 'a'" << endl;
     }
     else{
        cout << "string does not contain 'a'" << endl;
     }
             return 0;
}

