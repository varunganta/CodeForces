#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll a, b, c;
    ll count=0;
    cin >> a >> b >> c;
    
    while(a>=0 && b>=0 && c>=0)
    {
        a--;
        b-=2;
        c-=4;
        count++;
    }
    cout << (count-1)*7 << "\n";

    return 0;
}