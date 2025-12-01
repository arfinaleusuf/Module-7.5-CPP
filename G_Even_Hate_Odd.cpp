#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        if (n % 2 == 0)
        {
            int mid = n / 2;
            int even = 0;
            for (int j = 0; j < n; j++)
            {
                if (a[j] % 2 == 0)
                {
                    even++;
                }
            }
            cout << abs(even - mid) << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}
