#include <iostream>
using namespace std;


int add(int a, int b) /*formal parameters*/
{
    return a + b; /*return type is int*/
}

int main()
{
    int num1 = 10, num2 = 5, sum;
    sum = add(num1, num2); /*actual parameters*/
    cout << "sum is " << sum << endl;


}