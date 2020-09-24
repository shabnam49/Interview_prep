/*
Problem Link:
https://practice.geeksforgeeks.org/problems/smallest-number-on-left/0   */

#include <iostream>
#include <vector>
#include <stack>
#define ll long long 
using namespace std;

 
int main() {
	//code
	int t;
    int n;
	cin >> t;
	while(t--){
	    //Taking input

	    cin >> n;
	    ll arr[n];
	    for(int i = 0; i < n; i++) cin >> arr[i];
	    vector<ll> vec;
	    stack<ll> stack;

	    
	    //actual functionalities starts here
	    for(int i = 0; i < n; i++){
	            while(!stack.empty() && stack.top() >= arr[i]) stack.pop();
	            stack.empty() ? vec.push_back(-1) : vec.push_back(stack.top());
	            
	            stack.push(arr[i]);
	        }
	    for(int i = 0; i < n; i++)
	        cout << vec[i] << " ";
	        
	    cout << endl;
	    }
	return 0;
}
