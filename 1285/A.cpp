#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    string s;
    cin >> s;
    int l=0, r=0;
    for(int i=0; i<n; ++i)
    {
        if(s[i]=='L')
            l--;
        else
            r++;
    }
    cout << (r-l)+1 << "\n";
    
    return 0;
}
