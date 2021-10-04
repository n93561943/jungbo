#include<iostream>
#include<vector>
using namespace std;
int main(){
	int x,n;
	vector<int> v;
	
	cin>>x>>n;
	for(int i=1;i<=n;i++){
		v.push_back(x*i);
	}
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
}
