
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
        ll n, a, b;
        cin >> n >> a >> b;
        bool flag=false;
        for(ll i=1; i<=n; i*=a)
        {
            if((n-i)%b==0)
            {
                flag=true;
                break;
            }
            if(a==1)
                break;
        }
        if(flag==true)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }

    return 0;
}
