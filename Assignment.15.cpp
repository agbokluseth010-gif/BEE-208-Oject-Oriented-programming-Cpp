#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(long long binary) {
    int decimal = 0, i = 0, rem;
    while (binary != 0) {
        rem = binary % 10;
        decimal += rem * pow(2, i);
        binary /= 10;
        i++;
    }
    return decimal;
}

int main() {
    long long binary;
    cout << "enter a binary number: ";
    cin >> binary;
    int decimal = binaryToDecimal(binary);
    cout << "decimal equivalent: " << decimal << endl;
    cout << "hexadecimal equivalent: " << hex << decimal << endl;
    cout << endl;
    cout << "octal equivalent: " << oct << decimal << endl;
    return 0;
}








