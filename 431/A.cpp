#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a[5];
    for(int i=1; i<5; i++)
        cin >> a[i];
    string s;
    cin >> s;
    int sum=0;
    for(int i=0; i<s.size(); i++)
        sum+=a[s[i]-'0'];
    cout << sum << "\n";

    return 0;
}