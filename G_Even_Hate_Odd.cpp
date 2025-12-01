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
            int a[n];
            for (int j = 0; j < n; j++)
            {
                cin >> a[j];
            }
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
//#include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while(t--) {
//         int n;
//         cin >> n;

//         vector<int> a(n);
//         int cnt_even = 0;

//         for(int i = 0; i < n; i++) {
//             cin >> a[i];
//             if(a[i] % 2 == 0) cnt_even++;
//         }

//         if(n % 2 == 1) {
//             cout << -1 << "\n";
//             continue;
//         }

//         int target = n / 2;
//         cout << abs(cnt_even - target) << "\n";
//     }

//     return 0;
// }