#include <iostream>

using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle() //Always include a default constructor.
    {
        length = 0;
        breadth = 0;
    }
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return (2*length) + (2*breadth);
    }
    int getlen()
    {
        return length;
    }
    int getbreadth()
    {
        return breadth;
    }
    void setlen(int l)
    {
        length = l;
    }
    void setbreadth(int b)
    {
        breadth = b;
    }
    ~Rectangle()
    {
        cout << "Good to always have a destructor" << endl;
    }
};

int main()
{
    Rectangle r(10,5);
    cout << "Area: " << r.area();
    cout << "Perimeter: " << r.perimeter();
    return 0;
}