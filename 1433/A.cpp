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
        string x;
        cin >> x;
        int l=x.length();
        int res=(int(x[0]-48)-1)*10;
        if(l==1)
            res+=1;
        else if(l==2)
            res+=3;
        else if(l==3)
            res+=6;
        else
            res+=10;
        cout << res << "\n";
    }

    return 0;
}