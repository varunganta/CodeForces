#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    double m, n;
    cin >> m >> n;
    double s=m;
    for(double i=1; i<m; i++)
        s-=pow(i/m, n);

    cout << fixed;
    cout << setprecision(15) << s << "\n";

    return 0;
}