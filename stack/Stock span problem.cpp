/* Problem Link:
https://practice.geeksforgeeks.org/problems/stock-span-problem/0  */

//With the help of recursion

#include<bits/stdc++.h>
using namespace std;
int getspam(stack<int>s, int num)
{
    if(s.empty())
        return 1;
    if(s.top()<=num)
    {
        s.pop();
        return getspam(s,num)+1;
    }
    else
    return 1;
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        vector<int>result;
        stack<int>s;
        for(int i=0;i<n;i++)
        {
           int ans = getspam(s,arr[i]);
           result.push_back(ans);
           s.push(arr[i]);
        }
        for(int i=0;i<n;i++)
            cout<<result[i]<<" ";
        cout<<endl;
    }
}

//With using stack





