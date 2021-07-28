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
    while(t--)
    {
        ll n, p;
        ll count=0;
        cin >> n;
        ll arr[n+1];
        for(ll i=1; i<=n; i++)
            cin >> arr[i];
        for(ll i=1; i<=n; i++)
        {
            p=i%arr[i];
            for(ll j=arr[i]-p; j<=n; j+=arr[i])
            {
                if(i<j && arr[i]*arr[j]==i+j)
                    count++;
            }
        }
        cout << count << "\n";
    }
}
