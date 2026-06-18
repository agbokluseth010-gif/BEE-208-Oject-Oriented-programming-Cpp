#include <iostream>
#include <cmath>

using namespace std;
int main(){
long long binary, decimal = 0, i = 0, rem;
    cout << "enter a binary number:";
        cin >> binary;
    while (binary != 0) {
        rem = binary % 10;
        decimal += rem * pow(2, i);
        binary /= 10;
        i++;
    }
    cout << "decimal equivalent: " << decimal << endl;
    return 0;







}