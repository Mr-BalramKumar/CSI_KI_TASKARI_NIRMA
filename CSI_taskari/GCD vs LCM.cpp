#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {

        int n;
        cin >> n;

        for (int a = 1; a < n; a++)
        {
            for (int b = a; b < n; b++)
            {
                for (int c = 1; c < n; c++)
                {
                    for (int d = c; d < n; d++)
                    {
                        if (a + b + c + d == n && gcd(a, b) == lcm(c, d))
                        {
                            cout << a << " " << b << " " << c << " " << d << endl;
                            
                        }
                    }
                }
            }
        }
    }
    return 0;
}
