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
        ll n;
        cin >> n;
        ll arr[n];
        float s=0;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            s=s+arr[i];
        }
        if(s/n==1)
            cout << 0 << "\n";
        else if(s/n>1)
            cout << s-n << "\n";
        else
            cout << 1 << "\n";
    }

    return 0;
}