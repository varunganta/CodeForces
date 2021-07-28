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
        vector<int> a(n);
        int res=0;
        for(int i=0; i<n; i++)
            cin >> a[i];
        if(is_sorted(a.begin(), a.end()))
            res=0;
        else if(a[0]==1 || a[n-1]==n)
            res=1;
        else if(a[0]==n && a[n-1]==1)
            res=3;
        else
            res=2;
        cout << res << "\n";
    }

    return 0;
}
