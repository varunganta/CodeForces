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
        int a[n];
        int ma=INT_MIN;
        int mi=INT_MAX;
        int ma_i, mi_i;

        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            if(a[i]>ma)
            {
                ma=a[i];
                ma_i=i;
            }
            if(a[i]<mi)
            {
                mi=a[i];
                mi_i=i;
            }
        }
        int ans;
        ans=min(max(ma_i, mi_i)+1, max(n-ma_i, n-mi_i));
        ans=min(ans, ma_i+1+(n-mi_i));
        ans=min(ans, mi_i+1+(n-ma_i));
        cout << ans << "\n";
    }
    
    return 0;
}