#include<iostream>
#include <stdio.h>
using namespace std;

int main() {
    // %d displays the integer value of a character
    // %c displays the actual character
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
   // char ch = 'A';

    // Find the ASCII value of a character using typecasting
    int asciiValue = (int)ch;

    printf("ASCII value of %c is %d\n", ch, asciiValue);
    return 0;
}
