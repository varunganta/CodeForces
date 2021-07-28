#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    string s;
    cin >> s;
    int na=0;
    int nd=0;

    for(int i=0; i<n; i++)
    {
        if(s[i]=='A')
            na++;
        else
            nd++;
    }
    if(na>nd)
        cout << "Anton" << "\n";
    if(na<nd)
        cout << "Danik" << "\n";
    if(na==nd)
        cout << "Friendship" << "\n";

    return 0;
}