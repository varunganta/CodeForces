#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int maxA=-1000;
    int maxB=-1000;

    int n;
    cin >> n;
    int A[n];

    for(int i=0; i<n; ++i)
    {
       cin >> A[i];
       maxA=max(A[i], maxA);
    }

    int m;
    cin >> m;
    int B[m];

    for(int i=0; i<m; ++i)
    {
       cin >> B[i];
       maxB=max(B[i], maxB);
    }

    cout << maxA << " " << maxB << "\n";

    return 0;
}