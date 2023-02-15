#include <bits/stdc++.h>

using namespace std;
// ->1000101AKA69 nigga<-
int main(int args, char *argc[])
{
    // CODE HERE
    int n;
    cin >> n;
    int next_num = 1;
    int t = 0;

    for (int i = 1; i <= n - 1; i++)
    {
        next_num = next_num + i;
        if (next_num > n)
        {
            next_num %= n;
        }

        cout << next_num << " ";
    }

    return 0;
};