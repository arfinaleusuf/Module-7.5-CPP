#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    getline(cin, a);
    string t;
    cin >> t;
    stringstream ss(a);
    string word;
    int count = 0;
    while (ss >> word)
    {
        if(word == t)
        {
            count ++;
        }
    }
    cout << count;
    return 0;
}