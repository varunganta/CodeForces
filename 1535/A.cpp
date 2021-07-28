#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int s1, s2, s3, s4;
        cin >> s1 >> s2 >> s3 >> s4;
        int w1=max(s1, s2);
        int w2=max(s3, s4);
        int l1=min(s1, s2);
        int l2=min(s3, s4);
        if(l1>w2 || l2>w1)
            cout << "NO" << "\n";
        else
            cout << "YES" << "\n";
    }

    return 0;
}