#include <iostream>
using namespace std;

int_least64_t add(int a, int b) /*Uses call by value method. The value of num1 and num2
is coppied into a and b respectively. Changes to these formal params in the
function do not impact the actual parameters in main. We want to use call by val
when the function needs to do some computation and return a value.*/
{
    int c;
    a++;
    c = a+b;
    cout << c << endl;
}

void swap(int *x, int *y){ /*Using call by address. In call by adress the formal parameters are
pointers because the hold addresses to the real parameters. We need to use the * operator to 
access the value held by the actual parameters.*/
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}/* Use this when modifying the actual parameters, when you need to modify more than one value, we 
want a function to modify a value outside of its scope.*/

void swapback(int *x, int *y){ /*Using call by refrence. In call by refrence the formal parameters are
just another name for the real parameters. The body of this function may get inserted into the main body of
the main function, so techincally everything is whithin the scope of main.*/
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
} /*The point is that the actual parameters get to be changed. This function behaves like the pass by address function*/

/*you can have different types of passing arguments if you want*/



int main()
{
    int num1 = 10, num2 = 5, sum;
    sum = add(num1, num2); /*actual parameters*/
    cout << "sum is " << sum << " but num1 is still " << num1 << endl;
    swap(&num1, &num2); /*We need to pass in the address of the vars to the pointers*/

}