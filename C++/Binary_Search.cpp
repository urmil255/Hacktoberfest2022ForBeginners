/*
Author - Prajjwal Pathak
Date - 19/10/22
*/

#include<bits/stdc++.h>
 
using namespace std;
 
void fastio() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
}

//Iterative - Efficient
int sol1(vector<int>& nums, int k) {
	int l = 0;
	int r = nums.size()-1;
	int m;
	while(l <= r) {
		m = (l+r)/2;
		if(nums[m] == k) return m;
		else if(nums[m] > k) r = m-1;
		else l = m+1;
	}
	return -1;
}

//Recursive
int sol2(vector<int>& nums, int k, int l, int r) {
	if(l > r) {
		return -1;
	}
	int m = (l+r)/2;
	if(nums[m] == k) return m;
	else if(nums[m] > k) return sol2(nums,k,l,m-1);
	else return sol2(nums,k,m+1,r);
}

int main() {
 
	fastio();
	
	vector<int> nums = {1,2,4,6,8,23,34,45,67};
	int k = 4;
	cout<<sol1(nums,k);
	cout<<"\n";
	cout<<sol2(nums,k,0,nums.size()-1);
 
	return 0;
}