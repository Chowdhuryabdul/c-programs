#include<bits/stdc++.h>
using namespace std;
// since value and weight we have to send to the recursion. so we do not send it repeatedly rather we can declare it globally
 int val[1005], weight[1005];

 int  knapsack(int i, int mx_weight) // it will return a value so i have to take int data type
{
    //    base case for the recursion

    // here we are workinng with the two value index and weight. by -i we are going to the index of value and weight array. so if the value of i is smaller than 0 we will return from here
    if(i < 0)
    return 0;

    // if mx_weight also get 0 than we will stop there as we do not have place in the bag. if it is filled by two elements or 100 elements that not a matter
    if(mx_weight <= 0)
    return 0;
    
    // we can also write it like this
    // if(i < 0 || mx_weight <= 0)
    // return 0;


        // before going two options we have to compare the weight of bag and weight of item. if weight of item is same or smaller than mx_weight. in that case we have two options to keep or not keep. otherwise we will have only one answer not keep
        
        if(weight[i] <= mx_weight)
        {
        // here we have two options -- > we will store it in the bag or Not
        
        // first option bag e rakhbo 
        // what will be happend after storing in bag that we will depends on the recursion
        // why i-1 as we have already send the recursion with n-1. so than we need to come backward so we need to deduct 1 from the last element
        // we need to give another element which is weight of bag. after storing the item it will redcue the weight of bag. so it will be mx_weight - weight[i]. mx_weight will be deducted from that index of weight array

        // one more thing that after recursion give me the max wieght of a item, than i have to add the value of that item as well. that is why i have + val[i]. it means of value of that item

        // so by option 1 - reduction the space of bag and increase the value of bag - here we have workd for the space reduction mx_weight - weight[i]) and + val[i] - increase the value of bag
        int option_1 = knapsack(i-1, mx_weight - weight[i]) + val[i];

        // option - 2 - we will not store it in the bag. recursion also give the answer what will happend if we do not store in the bag. why not deduction weight here as if we do not store in the bag so the weight wil be same
        int option_2 = knapsack(i-1, mx_weight);

        // we will reutn the max between these two options. why max as we know that we will keep the max with the max weight in the bag which will not cross the weight of bag
        return max(option_1, option_2);
        }
        else // if the upper condition is not true than i have only one option that i can not store it in the bag
        {
            // bag e rakhte parbo na
            int option_2 = knapsack(i-1, mx_weight);
            return option_2; // before we have two options among them we have to choose the max one. but here we have just one option so we will return it

            // we can write it like this also
            // return knapsack(i-1, mx_weight);
        }

 };
int main()
{
    int n; cin >> n;
    // take arry to input value and weight
   
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }
   
    // runn the loop again to take weight
      for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }

    // weight of bag
    int mx_weight;
    cin >> mx_weight;


    // rest of the work we will done by recursion
    // we have to send value and weight both
    // it will starts from last index. we have to send the last index. so it will be n-1
    // since we have declared the value and weight globally so we do not need to send these here. here we need to send last index and nad the limit of bag. if we take mx_weight globally than we also do not need to send it
    cout << knapsack(n-1, mx_weight) << endl;;
    return 0;
}