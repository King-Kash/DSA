#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int &r = a; /*& symbol indicates a refrence variable, 
    a refrence variable needs to be initilized at the same 
    time that it is declared. You can not change what r 
    refrences later.*/
    cout << "r:a" << r << ":" << a;

    int b = 30;
    r = b; /*I mentioned earlier that you can not change what r has been
    set to. In this line r now holds the VALUE of b. This means that 'a' 
    also holds that value since a and r refer to the same memory.*/
    cout << "r:a" << r << ":" << a;
}