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
        int n, m;
        cin >> n >> m;
        int sum=0;
        for(int i=1; i<=n; i++)
        {
            int x;
            cin >> x;
            sum+=x;
        }
        cout << min(sum, m) << "\n";
    }

    return 0;
}
