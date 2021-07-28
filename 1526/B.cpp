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
        ll x;
        cin >> x;

        for(int i=0; i<20; i++)
        {
            if(x%11==0)
            {
                cout << "YES" << "\n";
                goto done;
            }
            x-=111;
            if(x<0)
                break;
        }
        cout << "NO" << "\n";

        done:;
    }

   return 0;
}