#include <bits/stdc++.h>
using namespace std;
int main()
{

    int X, Y;
    int a;
    cin >> X >> Y;
    string s;
    cin >> s;
    int count = 0;
    int twd = 0;
    int lwd = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            count++; 
            twd++;
        }

        else
        {
            count = 0;
        }
        lwd = max(lwd, count);
    }
    a = (twd * X) + (lwd * Y);
    cout << a << endl;
}