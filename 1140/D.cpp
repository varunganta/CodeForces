#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    ll res=0;
    for(ll i=2; i<n; i++)
    {
        res+=1LL*i*(i+1);
    }
    cout << res << "\n";

    return 0;
}