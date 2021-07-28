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
        int min_ele=INT_MAX;
        int count=0;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            min_ele=min(arr[i], min_ele);
        }
        for(int i=0; i<n; i++)
        {
            arr[i]-=min_ele;
        }
        for(int i=0; i<n; i++)
        {
            if(arr[i]>0)
                count++;
        }
        cout << count << "\n";
    }

    return 0;
}