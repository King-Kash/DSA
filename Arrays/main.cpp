#include<iostream>

using namespace std;

int main()
{
    int A[5];
    A[0] = 12;
    A[1] = 15;
    A[2] = 25;
    A[3] = 15;
    A[4] = 11;
    //integers take up 4 bytes per integer in memory

    cout<< sizeof(A) << endl; //give us how many bits used by array
    cout<<A[1]<<endl;
    printf("%d\n", A[2]);

    int B[] = {1, 2, 3, 4};

    int C[10] = {5, 6, 7}; //first three elements have value so the rest are 0.

    for(int i =0; i <10; i++) {
        cout << A[i] << endl;
    }

    for(int x:A){ //x takes the value of each element of the array A
        cout << x << endl;
    }

    //We can use varialble size arrays but we cant initilize them
    int n;
    cout << "Enter Array Size";
    cin >> n;
    int A[n];
    A[0] = 2;

    return 0;

}