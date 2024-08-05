#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

void fun(struct Rectangle r){ //Call by Value Example
    r.length  = 20;
    cout << "Length" << r.length <<endl<< "Breadth" << r.breadth <<endl;
} /* if you pass in a struct by value and that struct contains an array, a copy of that array is created in the function,
a pointer to the array is not used. */

void fun1(struct Rectangle *r){ //Call by Value Address
    r->length  = 20;
    cout << "Length" << r->length <<endl<< "Breadth" << r->breadth <<endl;
}

void fun2(struct Rectangle &r){ //Call by Value Address
    r.length  = 20; //This will in fact change the value of the length in the rectangle in the main function
    cout << "Length" << r.length <<endl<< "Breadth" << r.breadth <<endl;
}

struct Rectangle * makeRectangle(){ //Returns a pointer to a Rectangle struct
    struct Rectangle *temp = new Rectangle;
    temp->length = 10;
    temp->breadth = 5;

    return temp;
}


int main()
{
    struct Rectangle r = {10,5};
    fun(r);
    cout << "Length" << r.length <<endl<< "Breadth" << r.breadth <<endl;
    fun1(&r);
    cout << "Length" << r.length <<endl<< "Breadth" << r.breadth <<endl;
    Rectangle *newRect = makeRectangle();

}