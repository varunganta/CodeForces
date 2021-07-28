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
    ll arr[n];
    ll count=0;
    ll res=0;
    for(ll i=1; i<=n; i++)
    {
        cin >> arr[i];
    }
    for(ll i=1; i<=n; i++)
    {
        res=max(res, arr[i]);
        if(res==i)
            count++;
    }
    cout << count << "\n";


    return 0;
}