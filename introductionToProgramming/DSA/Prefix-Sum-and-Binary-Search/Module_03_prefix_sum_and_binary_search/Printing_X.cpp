#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int left = 0;
    int right = n - 1;
    int mid = n / 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i < mid)
            {
                if (j == left)
                {
                    cout << "\\";
                }
                else if (j == right)
                {
                    cout << "/";
                }
                else
                {
                    cout << " ";
                }
            }
            else if (i == mid)
            {
                if (j == left)
                {
                    cout << "X";
                }
                else
                {
                    cout << " ";
                }
            }
            else
            {
                if (j == left)
                {
                    cout << "/";
                }
                else if (j == right)
                {
                    cout << "\\";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
        if (i < mid)
        {
            left++;
            right--;
        }
        else
        {
            left--;
            right++;
        }
    }

    return 0;
}