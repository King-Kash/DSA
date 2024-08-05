#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Rectangle
{
    int length;
    int bredth;
};

int main()
{
    Rectangle r = {10, 5}; /*in C++ we do not need 'struct' in front of 
    Rectangle. We do need it in C.*/
    cout<<r.length<<endl;
    cout<<r.bredth<<endl;

    Rectangle *p = &r; /*Pointer p holds the memory address of rectangle r*/
    cout<<p->length<<endl;
    cout<<p->bredth<<endl;

    Rectangle *heapRectangle = new Rectangle; /*Dynamically allocated objects
    get stored on the heap rather than the stack.*/
    heapRectangle->length = 15;
    heapRectangle->bredth = 7;

    cout<<heapRectangle->length<<endl;
    cout<<heapRectangle->bredth<<endl;
    return 0;
}