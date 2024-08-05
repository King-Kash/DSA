#include <iostream>
#include <stdio.h>

using namespace std;

struct Rectangle {
    int length;
    int height;
};

int main(){
    int a = 10;
    int *p;
    p = &a;

    cout << a << endl;
    printf("using pointer %d at location %d.", *p, p);

    int A[5] = {2, 4, 6, 8, 10};
    int *g;
    g = A; /*In C++, the name of an array A acts as a pointer to its first element. This is only true for arrays and in
            some ways lists but not for vectors. the name of a vector is not a pointer to the first element in the vector.
            This means that A already represents the address of the first element in the array. Therefore, when assigning A 
            to the pointer p, we don't need to use the address-of operator &. The assignment p = A directly assigns the 
            address of the first element of A to p. */
    
    //C++ Dynamic allocation 
    int *n;
    n = new int[5];
    //The pointer n holds the memory adress of the first element of this dynamically allocated array
    //This array is created in the heap

    //C Dynamic Allocation
    int *f; 
    f = (int *)malloc(5 * sizeof(int));

    //C++ Deallocate Heap Memory
    delete [] n; /*when we dynamically allocate we need to deallocate that memory at the end of the program to avoid a memory leak.
                 for an array we use [] to deallocate all the elements in the array*/
    //C Deallocate Heap Memory
    free(f);


    /*Regardless  of type a pointer always takes up 8 bytes of memory*/
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    Rectangle *p5;





    return 0;
}

