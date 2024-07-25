#include <stdio.h>
#include <iostream>
using namespace std;

struct Rectangle{ 

    int length; //4 bytes
    int bredth; //4 bytes
    char x; //1 byte
    //total size = 12 because of padding, there will be 3 more bytes taken after x because we want chunks of the largest data type which in this case is the int.

} r1, r2, r3; //Struct needs a semicolon at the end. You can declare global vars like this

struct Rectangle r4; //now r4 is also a global variable

int main() {
    struct Rectangle r5 = {10, 5}; //r5 is not a global variable it is only usable within the main function
    printf("size of r5 is %lu due to padding.", sizeof(r5));

    r5.length = 15;
    r5.bredth = 7;
    cout << r5.length << endl;
    cout << r5.bredth <<endl;
    return 0;
}
