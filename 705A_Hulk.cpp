#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i != n)
        {
            if (i % 2 == 1)
            {
                cout << "I hate that ";
            }
            else
            {
                cout << "I love that ";
            }
        }
        else
        {
            if (i % 2 == 1)
            {
                cout << "I hate it";
            }
            else
            {
                cout << "I love it";
            }
        }
    }
    return 0;
}
