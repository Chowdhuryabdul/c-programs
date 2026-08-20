#include<bits/stdc++.h>
using namespace std;

 vector<int>adj_list[1005]; // i have declared this list inside the input taking part. as i need to use this also in the bfs part that is why i have taken it globally. Now here we can not write node here so we can assume that our node will be 1005, but it usually will be said in the question.

//  taking visited array - we are taking it globally so we can aceess it from anywhere - size will be same as node size- data type will be boolean as we are returning true or false.
bool vis[1005];


void bfs(int src)
{
    // taking q

    queue<int> q;
    // push src node
    q.push(src);
    // when ever we push sth we will make the value of visited arrray will true- so we will go in that index of visited array and make it true.
    vis[src] = true;

    while (!q.empty())
    {
        /* code - three steps which we followed in level order binary*/
        //take out the first element from q
        int parent = q.front();
        q.pop();
        
        // work on that - here just print
        cout << parent << " ";

        // push children
        // where we will get the childre? - as we are taking input by adjacency list, so we will go to that array of vector. so each index of array contains a vector where you will get the child. then we will go the parent node of the adjacency list array. there we will get a vector which contains several value. to get those value i can run a loop. it is itself a vecotr
        for(int child : adj_list[parent]){
            
            // we will write a condtion to check whether this child is visited or not- if false than we will push that in the q
            if(vis[child] == false){

                q.push(child); 
                vis[child] = true;       
            }
            
        }
    }
    
}
int main()
{
    int node, edge;
    cin >> node >> edge;

    // vector<int>adj_list[node];
     while(edge--){
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);

     }

    //  at the all the value of visited array will be flase which we can do by memset function
    memset(vis, false, sizeof(vis));
    //  this function is to run the bfs- i have given 0 by my hand as we assume that source nde will be 0
    bfs(0);
    return 0;
}