
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
        ll xa, ya, xb, yb, xf, yf;
        cin >> xa >> ya;
        cin >> xb >> yb;
        cin >> xf >> yf;
        ll res=abs(xb-xa)+abs(yb-ya);
        if((xa==xb && xa==xf && yf>min(ya, yb) && yf<max(ya, yb)) || (ya==yb && ya==yf && xf>min(xa, xb) && xf<max(xa, xb)))
           cout << res+2 << "\n";
        else
            cout << res << "\n";
    }

    return 0;
}
