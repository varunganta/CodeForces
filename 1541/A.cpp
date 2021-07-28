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
        ll n;
        cin >> n;
        ll arr[n];
        for(ll i=0; i<n; i++)
            arr[i]=i+1;
        for(ll i=1; i<n; i+=2)
            swap(arr[i], arr[i-1]);
        if(n%2==1)
            swap(arr[n-1], arr[n-3]);
        for(ll i =0; i<n; i++)
            cout << arr[i] << " ";
        cout << "\n";
    }

    return 0;
}
