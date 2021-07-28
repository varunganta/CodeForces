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
        ll count=0;
        while(n!=0)
        {
            count++;
            n=n/2;
        }
        cout << (1<<(count-1))-1 << "\n";
    }

    return 0;
}
