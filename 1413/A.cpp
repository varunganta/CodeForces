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
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        for(int i=0; i<n/2; i++)
            cout << arr[n-i-1]*-1 << " ";
        for(int i=n/2; i<n; i++)
            cout << arr[n-i-1] << " ";
        cout << "\n";
    }

    return 0;
}
