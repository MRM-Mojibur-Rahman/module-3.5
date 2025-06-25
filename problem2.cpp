#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> vsum(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i == 0)
        {
            vsum[0] = v[0];
        }
        else
        {
            vsum[i] = v[i] + vsum[i - 1];
        }
    }
    for (int i = 0; i < n; i++)
    {
        int low = vsum[i - 1];
        int high = vsum[n - 1] - vsum[i];
        if (low == high)
        {
            cout << i;
            break;
        }
    }

    return 0;
}