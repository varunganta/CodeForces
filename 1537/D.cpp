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
        if(n%2==1)
        {
            cout << "Bob" << "\n";
            continue;
        }
        while(n%2==0)
        {
            count++;
            n/=2;
        }
        if(n>1)
            cout << "Alice" << "\n";
        else if(count%2==0)
            cout << "Alice" << "\n";
        else
            cout << "Bob" << "\n";
    }

    return 0;
}
