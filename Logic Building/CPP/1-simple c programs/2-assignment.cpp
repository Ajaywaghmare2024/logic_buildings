//2. Accept a character from user and display ASCII value of it.

#include  <iostream> 
using namespace std;

int main() {
    char c;

    cout  <<  "Enter a character: ";
    cin  >>  c;

    int asciiValue = (int)c;

    cout  <<  "The ASCII value of character "  <<  c  <<  " is "  <<  asciiValue  <<  endl;

    return 0;
}
