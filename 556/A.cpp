#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll zeros=0;
    ll ones=0;
    for(ll i=0; i<n; i++)
    {
        if(s[i]=='0')
            zeros++;
        else
            ones++;
    }
    cout << n-2*min(zeros, ones) << "\n";

    return 0;
}