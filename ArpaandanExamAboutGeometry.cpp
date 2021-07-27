#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll ax, ay, bx, by, cx, cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;
    if((bx-ax)*(bx-ax)+(by-ay)*(by-ay)!=(cx-bx)*(cx-bx)+(cy-by)*(cy-by))
        cout << "NO" << "\n";
    else if(((bx-ax)*(cy-ay)==(cx-ax)*(by-ay)) || ((bx-ax)*(cy-ay)==-(cx-ax)*(by-ay)))
        cout << "NO" << "\n";
    else
        cout << "YES" << "\n";
    return 0;
}
