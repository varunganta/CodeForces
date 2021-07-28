#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int k, r;
    cin >> k >> r;
    int d=k%10;
    int i=1;
    while(1)
    {
        if((d*i)%10==0 || (d*i)%10==r)
            break;
        i++;
    }
    cout << i << "\n";

    return 0;
}