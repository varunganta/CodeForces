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
    string s;
    cin >> s;
    ll count_0=0, count_1=0;
    for(ll i=0; i<s.size(); i++)
    {
        if(s[i]=='0')
            count_0++;
        else
            count_1++;
    }
    if(abs(count_0-count_1)!=0)
    {
        cout << 1 << "\n";
        cout << s << "\n";
    }
    else
    {
        cout << 2 << "\n";
        cout << s[0] << " " << s.substr(1) << "\n";
    }

    return 0;
}
