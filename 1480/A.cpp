
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
        string s;
        cin >> s;
        for(ll i=0; i<s.size(); i++)
        {
            if(i%2==1)
            {
                if(s[i]!='z')
                    s[i]='z';
                else
                    s[i]='y';
            }
            else
            {
                if(s[i]!='a')
                    s[i]='a';
                else
                    s[i]='b';
            }
        }
        cout << s << "\n";
    }

    return 0;
}
