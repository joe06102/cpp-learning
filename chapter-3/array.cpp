#include <iostream>
#include <iterator>

using namespace std;

int data[5] = {6, 3, 7, 4, 1};

void printArray(int &input[])
{
    int *start = begin(input);
    int *end = end(input);

    while (start != end && *start >= 0)
    {
        cout << *start << ',' << endl;
        ++start;
    }
}

printArray(data);
