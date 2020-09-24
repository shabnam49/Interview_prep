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

#include <bits/stdc++.h>
using namespace std;
int main()
    {
        int t;
        cin >> t;
        while(t--)
            {
                int n;
                cin >> n;
                int a[n];
                for(int i = 0; i < n; i++) cin >> a[i];
                stack <pair<int,int>> s;
                vector <int> v;
                for(int i = 0; i < n; i++)
                    {
                        if(s.empty()) v.push_back(-1);
                        else if(!s.empty() && s.top().first > a[i])
                            v.push_back(s.top().second);
                        else if(!s.empty() && s.top().first<=a[i])
                            {
                                while(!s.empty() && s.top().first<=a[i])
                                    s.pop();

                                if(s.empty()) v.push_back(-1);
                                else v.push_back(s.top().second);
                            }
                        s.push({a[i],i});
                    }
                
            for(int i = 0; i < v.size(); i++)
                cout << i - v[i] << " ";
            cout << endl;
            
            }
        return 0;
    }

// with using stack and same approach as above but compact code

#include <iostream>
#include <vector>
#include <stack>
#define ll long long
using namespace std;

int main()
{
	int t, n;
	cin >> t;
	while(t--) {
	    cin >> n;
	    vector <ll> arr(n), ans(n);
	    
	    for(int i = 0; i < n; i++)
	            cin >> arr[i];
	    stack <pair<ll,int>> s;
	    for(int i = 0; i < n; i++) {
	        while(!s.empty() && s.top().first <= arr[i])
	            s.pop();
	        ans[i] = s.empty() ? -1 : s.top().second;
	        s.push({arr[i],i});
	    }
	    for(int i = 0; i < n; i++) ans[i] = i - ans[i];
	    
	    for(int i = 0; i < n; i++)
	        cout << ans[i] << " ";
	    cout << endl;
	}
	return 0;
}


