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
        int n, m;
        cin >> n >> m;
        if(n==0)
            cout << 0 << "\n";
        else
        {
            cout << min(2, n-1)*m << "\n";
        }
    }

    return 0;
}
