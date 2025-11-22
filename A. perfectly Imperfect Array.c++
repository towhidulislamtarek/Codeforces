#include <iostream>
#include <cmath>
using namespace std;

bool isperfectSquare(int x)
{
    int root = sqrt(x);
    return root * root == x;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        bool found = false;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if (!isperfectSquare(x))
            {
                found = true;
            }
        }

        if (found)
        {
            cout << "Yes" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}