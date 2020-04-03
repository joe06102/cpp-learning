#include <iostream>
#include <string>

int main()
{
    int n = 666;
    int *p = &n;
    int *np;
    int &ref = n;
    int *ptr1 = 0, *ptr2 = 0;

    std::cout << "number: " << n << '\n'
              << "pointed value: " << *p << '\n'
              << "pointer address: " << p << '\n'
              << "null pointer: " << np << '\n'
              << "ref value: " << ref << '\n'
              << "ref address: " << &ref << '\n'
              << "null pointer equal: " << (ptr1 == ptr2) << std::endl;
}