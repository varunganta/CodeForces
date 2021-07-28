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
        int count=0;
        int k=0;

        for(int i=0; i<n; ++i)
        {
            cin >> a[i];
            count=count+a[i];
        }
        if(count%n!=0)
            cout << "-1" << "\n";
        else
        {
            for(int i=0; i<n; ++i)
            {
                if(a[i]>count/n)
                    k++;
            }
            cout << k << "\n";
        }
    }

    return 0;
}