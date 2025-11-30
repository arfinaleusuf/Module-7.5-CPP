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
        if (n % 2 == 0)
        {
            vector<int> a(n);
            for (int j = 0; j < n; j++)
            {
                cin >> a[j];
            }
            int mid = n / 2;
            int even = 0;
            int odd = 0;
            for (int j = 0; j < n; j++)
            {
                if (a[j] % 2 == 0)
                {
                    even++;
                }
                else
                {
                    odd++;
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