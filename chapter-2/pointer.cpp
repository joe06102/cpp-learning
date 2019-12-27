#include <iostream>
#include <string>

int main()
{
    int n = 666;
    int *p = &n;
    int *np;
    int &ref = n;
    std::cout << "number: " << n << '\n'
              << "pointed value: " << *p << '\n'
              << "pointer address: " << p << '\n'
              << "null pointer: " << np << '\n'
              << "ref value: " << ref << '\n'
              << "ref address: " << &ref << std::endl;
}