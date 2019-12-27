#include <iostream>

int printAllEvens(int num)
{
    int mod = 0;

    while (num--)
    {
        if (num % 2 == 0)
        {
            std::cout << num << std::endl;
        }
    }

    return 0;
}

int main()
{
    std::cout << "Enter 2 numbers: " << std::endl;

    int n1 = 0, n2 = 0, n3 = 0;

    std::cin >> n1 >> n2;
    std::cout << "The sum of :" << n1 << " and " << n2 << " is " << n1 + n2 << std::endl;

    std::cout << "input range: " << std::endl;
    std::cin >> n3;

    // printAllEvens(n3);

    return 0;
}