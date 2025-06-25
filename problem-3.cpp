#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
       sort(v.begin(), v.end());
    for (int i = 0; i < q; i++)
    {
        int querry;
        cin >> querry;
        int r = 0, l = n - 1, f = 0;
        while (r<=l)
        {
            int mild = (r + l) / 2;
            if ( querry==v[mild])
            {
                cout << "YES" << endl;
                f=1;
                break;
            }
            else if (v[mild] > querry)
            {
                l = mild - 1;
            }
            else
            {
                r = mild + 1;
            }
        }
        if (f==0)
        {
           cout<<"NO"<<endl;
        }
        
    }

    return 0;
}