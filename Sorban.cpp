
#include <bits/stdc++.h>

using namespace std;

#define ll long long
/*vector<ll> bleh(ll x)
{
    vector<ll> res;
    do
    {
        res.push_back(x%10);
        x/=10;
    }while(x);
    return res;
}
*/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    /*ll n;
    cin >> n;
    vector<ll> digits=bleh(n);
    for(ll i=0; i<digits.size(); i++)
    {
        if(digits[i]<5)
        {
            cout << "O-|";
            digits[i]-=5;
        }
        for(ll i=0; i<digits[i]; i++)
        {
            cout << "O";
        }
        cout << "-";
        for(ll i=0; i<4-digits[i]; i++)
        {
            cout << "O";
        }
        cout << "\n";
    }*/
    string s;
    cin >> s;
    for(ll i=s.size()-1; i>-1; i--)
    {
        if(s[i]>='5' && s[i]<='9')
        {
            cout << "-O|";
            for(int j=1; j<=s[i]-'5'; j++)
                cout << "O";
            cout << "-";
            for(int j=1; j<='9'-s[i]; j++)
                cout << "O";
            cout << "\n";
        }
        else
        {
            cout << "O-|";
            for(int j=1; j<=s[i]-'0'; j++)
                cout << "O";
            cout << "-";
            for(int j=1; j<='4'-s[i]; j++)
                cout << "O";
            cout << "\n";
        }
    }

    return 0;
}
