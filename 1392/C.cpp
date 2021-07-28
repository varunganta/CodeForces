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
        ll n, p, sum=0;
        cin >> n;
        cin >> p;
        for(ll i=1; i<n; i++)
        {
            ll x;
            cin >> x;
            ll diff=p-x;
            if(diff>0)
                diff=diff;
            else
                diff=0;
            sum+=diff;
            p=x;
        }

        cout << sum << "\n";

    }

    return 0;
}
