#include <bits/stdc++.h>

using namespace std;

int main(int args, char *argc[])
{

    int n;
    cin >> n;
    for (int a = 1; a < n; a++)
    {
        for (int b = 1; b < n; b++)
        {
            for (int c = 1; c < n; c++)
            {
                if (a + b + c == n && (a * b * c % 3) != 0)
                {
                    cout << a << " " << b << " " << c;
                    return 0;
                }
            }
        }
    }
    
        /* code */


    return 0;
};