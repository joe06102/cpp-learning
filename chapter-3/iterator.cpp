#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1(10);

    cout << "uninitialized vectors: ";

    for (auto it : v1)
    {
        cout << it << ", ";
    }

    cout << endl
         << "initializing vectors: ";

    for (int i = 0; i < 10; i++)
    {
        v1[i] = i;
    }

    for (auto it = v1.begin(); it != v1.end(); ++it)
    {
        *it = *it * 2;
        cout << *it << ", "; //1 << "(" << 2 << ")";
    }

    cout << endl;
}
