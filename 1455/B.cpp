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
        ll steps=0;
        while(steps*(steps+1)<2*x)
            steps++;
        if(steps*(steps+1)/2==x+1)
            steps++;
        cout << steps << "\n";
    }

   return 0;
}