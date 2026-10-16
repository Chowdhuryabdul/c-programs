/* #include<bits/stdc++.h>
using namespace std;
int main()
{
    int s_length;
    cin >> s_length;
    int k;
    cin >> k;
    string s;
    cin >> s;

    string original_string = s;
    for (int i = 0; i <= s_length - k; i++)
    {
     string copy_current_string = s;
     sort(copy_current_string.begin() + i, copy_current_string.begin() + i + k);

     if(copy_current_string < original_string){
      original_string = copy_current_string;
     }
    }
  cout << original_string;
    
    
    return 0;
} */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s_length;
    cin >> s_length;
    int k;
    cin >> k;
    string s;
    cin >> s;

    string original_string = s;
    for (int i = 0; i <= s_length - k ; i++)
    {
          /* code */
        string copying_current_string = s;

        string k_part = copying_current_string.substr(i, k);

        sort(k_part.begin(), k_part.end());

        copying_current_string.replace(i, k, k_part);

        if(copying_current_string < original_string){
            original_string = copying_current_string;
        }


    }
    
  cout << original_string;
    
    
    return 0;
}

