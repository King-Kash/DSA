//Start with a non-template class and then convert it into a template making sure the right things are converted to a template.

#include <iostream>

using namespace std;

template<class T>
class Arithmetic
{
private:
    T a;
    T b;
public:
    Arithmetic(T a, T b);
    T add();
    T sub();
};

template<class T>
Arithmetic<T>::Arithmetic(T a, T b) //we need to specify which class the function belongs to when defining the class outside of the class body.
{
    this->a=a; //this indicates that we are refering to the a variable belonging to the class and not the parameter.
    this->b=b;
}

template<class T>
T Arithmetic<T>::add() //return type is also of class T
{
    return a + b;
}

template<class T>
T Arithmetic<T>::sub() //return type is also of class T
{
    return a - b;
}

int main()
{
    Arithmetic<int> ar(5,7);
    cout<<"Add: "<<ar.add() << endl;
    cout<<"Subtract: "<<ar.add() << endl;
    Arithmetic<float> br(5,7);
    cout<<"Add: "<<br.add() << endl;
    cout<<"Subtract: "<<br.add() << endl;
}