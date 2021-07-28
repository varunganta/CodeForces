#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, count=0;
    cin >> n;
    string a, b;
    cin >> a >> b;
    for(ll i=0; i<n; i++)
    {
        if(a[i]==b[i])
            continue;
        else if(a[i]!=b[i] && i+1<n && a[i+1]!=b[i+1] && a[i]!=a[i+1])
        {
            count++;
            a[i]=b[i];
            a[i+1]=b[i+1];
        }
        else
        {
            count++;
            a[i]=b[i];
        }

    }
    cout << count << "\n";

    return 0;
}
