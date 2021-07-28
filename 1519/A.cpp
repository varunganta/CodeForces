#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long r, b, d;
        cin >> r >> b >> d;
        long long x=min(r, b), diff=abs(r-b);
        if (ceil(diff*1.0/x)<=d)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}