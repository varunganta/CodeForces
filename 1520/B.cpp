#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while(t-->0)
    {
        ll n;
        cin >> n;
        ll res=0;
        for(ll i=1; i<=n; i=i*10+1)
        {
            for(int d=1; d<=9; d++)
            {
                if(i*d<=n)
                    res++;
            }
        }
        cout << res << "\n";
    }

    return 0;
}