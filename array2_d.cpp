#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter the number i and j " << i << " " << j << endl;
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        cout << endl;
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
    cout << endl;

    int count = 1;
    int j = n - 1;
    while (j >= 0)
    {
        if (count == 1)
        {
            for (int i = 0; i < m; i++)
            {
                cout << arr[i][j] << " ";
            }
            count = 0;
            j--;
        }
        else
        {
            for (int i = m - 1; i >= 0; i--)
            {
                cout << arr[i][j] << " ";
            }
            count = 1;
            j--;
        }
    }
}