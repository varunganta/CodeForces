#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, i=1, count=0;
    cin >> n;
    while(1)
    {
        if(n>0)
            count++;
        else
            break;
        n-=i;
        i*=2;
    }
    cout << count << "\n";

    return 0;
}
