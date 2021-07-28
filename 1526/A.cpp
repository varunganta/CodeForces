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
        int arr[2*n];

        for(int i=0; i<2*n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr+2*n);

        for(int i=0; i<n; i++)
        {
            cout << arr[i] << " " << arr[i+n] << " ";
            cout << "\n";
        }
    }

    return 0;
}