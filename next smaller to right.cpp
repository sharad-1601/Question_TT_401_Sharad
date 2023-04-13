#include<iostream>
#include<stack>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> nextsmallertoright(vector<int>arr){ 
	vector<int>ans;
	stack<int>st;
	for(int i=arr.size()-1;i>=0;i--){
		if(st.size()==0){
			ans.push_back(-1);
		}
		else if(st.size()>0 && st.top()<arr[i]){
			ans.push_back(st.top());
		}
		else if(st.size()>0 && st.top()>=arr[i]){
			while(st.size()>0 && st.top() >=arr[i]){
				st.pop();
			}
		
			if(st.size()==0){
				ans.push_back(-1);
			}
			else{
				ans.push_back(st.top());
			}
			}
			st.push(arr[i]);
		}
		reverse(ans.begin(),ans.end());
		return ans;
	}


int main() { 


vector<int> vect;
vector<int> a;


  
    vect.push_back(10);
    vect.push_back(20);
    vect.push_back(30);
    vect.push_back(84);
    vect.push_back(3);
    vect.push_back(12);
    vect.push_back(98);

    a = nextsmallertoright(vect);
        int n = a.size();
        int m = vect.size();
    
     for(int i=0; i<m; i++){
        cout << vect[i] << " ";
    }
    
    cout<<" "<<endl;
    
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }

}
