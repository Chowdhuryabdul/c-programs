#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    //    it is vector of vector -
    // (n, vector<int>(n)) - this part is - n is the size of the main vector and next vector will be the size of the inside vector. this is the 2d matrix of N size.
    vector<vector<int>> mat(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << mat[i] [j] << " ";
    //     }
    //     cout << endl;
    // }

    // take another vector to stroe the edge from matirx in edge list
    vector<vector<int>> adjlist(n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (mat[i][j] == 1) // t means i and j are connected
            {
                adjlist[i].push_back(j);
               
            }
        }

        // to print to see the edges from the matirx to edge
        //    first loop will run in the outer veector
        for (int i = 0; i < n; i++)
        {
            cout << i<< " : ";
            // second vector will run on inside vector
            for (auto val : adjlist[i])
            {
                cout << val << " ";
            }
            cout << endl;
        }
    }
    return 0;
}