#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, p, c;
    p=0;
    c=0;
    cin >> t;
    for (int i=0; i<t; ++i)
    {
        int x;
        cin >> x;
        if (x==-1)
        {
            if (p==0)
                c++;
            else
                p--;
        }
        else
            p+=x;
    }
    cout << c;   
}