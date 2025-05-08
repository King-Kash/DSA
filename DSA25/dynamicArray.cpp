#include <cstddef>   // for size_t
#include <iostream>  // for demonstration (cout)

// A simple dynamic list (array-based) for integers
class DynamicList {
private:
    int* data_;        // pointer to the dynamic array
    size_t size_;      // current number of elements
    size_t capacity_;  // current allocated capacity

public:
    // Constructor
    DynamicList();

    // Destructor
    ~DynamicList();

    // Add an element to the end
    void push_back(int value);

    // Access element by index
    int& operator[](size_t index);

    // Get current size
    size_t size() const;
};

// Constructor: initialize members and allocate initial array
/*
Initilizer list:
- members constructed only once with given value. Else, default value used for
construction then overwritten with another assignment value.
- if class has const or refrence the must be initialized with initializer list.
- 
*/
DynamicList::DynamicList()
    : data_(nullptr), size_(0), capacity_(0)  // initializer list syntax
{
    // Start with capacity 1
    capacity_ = 1;
    data_ = new int[capacity_];  // allocate array of ints
}

// Destructor: free allocated memory
DynamicList::~DynamicList() {
    delete[] data_;  // delete array allocated with new[]
}


// TODO: Implement push_back, operator[], and size() below

// push_back:
//  - Check if size_ == capacity_
//  - If full, allocate a new array with larger capacity (e.g., double)
//  - Copy existing elements into new array
//  - delete[] old array
//  - Update data_ and capacity_
//  - Append new value and increment size_
//
// operator[]:
//  - Return reference to data_[index]

// size():
//  - Return size_


int main() {
    DynamicList list;
    list.push_back(10);
    list.push_back(20);
    std::cout << "Element 0: " << list[0] << ", size: " << list.size() << std::endl;
    return 0;
}