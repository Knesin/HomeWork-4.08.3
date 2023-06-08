#include <iostream>
#include "my_unique_ptr.h"
#include "counter.h"

int main()
{
    my_unique_ptr<int> ptr1(new int);
    my_unique_ptr<Counter> ptr2(new Counter(2));
    *ptr1 = 100;
    std::cout << *ptr1 << std::endl;
    ptr2->print();
    auto ptr = ptr2.release();
    std::cout << ptr2.release() << std::endl;
    delete ptr;
}
