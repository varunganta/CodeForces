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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int res=n-1;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='>' || s[n-1-i]=='<')
                res=min(res, i);
        }
        cout << res << "\n";
    }

    return 0;
}
