#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, r, c, w, x, y, z;
        cin >> n;
        cin >> m;
        cin >> r;
        cin >> c;
        w=abs(1-r)+abs(1-c);
        x=abs(1-c)+abs(n-r);
        y=abs(1-r)+abs(m-c);
        z=abs(n-r)+abs(m-c);
        cout << max(w, max(x, max(y, z))) << endl;
    }
}