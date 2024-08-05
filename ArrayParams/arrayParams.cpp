#include <iostream>

using namespace std;

void fun(int A[], int size) /* The Array is passed as a pointer. the formal paramter A is actually a pointer variable that holds the address of the first element of the array.*/
{
    for(int i = 0; i < size; i++){
        cout << A[i] << endl; /* the square brackets derefrence A. First the i is multiplied with the size of the data type in the array, then the compiler adds that value to the adress
        of the first element in the array, then it accesses the value at that memroy address*/
    }
    /* we can not use the for loop in main here because we need to derefrence the pointer each time we access an element. That's not possible with the other for loop*/
    A[0] = 15; //The value in the array will be changed because we pass in a pointer.
}

int * fun2(int size){ //To return an array we need to return a pointer to the first element in that array, hence we have a pointer as the return type.
   
    int *p = new int[size];/*declared the pointer in the heap using new in this case, but we would still be reuturing a pointer if we made a pointer in
    stack frame of fun2*/

    for(int i = 0; i < size; i++){
        p[i] = i+1;
    }
}

int main()
{
    int A[] = {1,2,3,4,5};
    int n = 5;
    fun(A, 5);

    for(int x: A){/*We can iterate through each element in A because it is in the scope of main*/
        cout << x << " ";
    }
    cout << endl;

    int *ptr;
    int size = 7;
    ptr = fun2(size);
}