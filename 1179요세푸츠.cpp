#include<iostream>
#include<vector>
using namespace std;
vector<int> v;
int main(){
	int n,k,pos;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		v.push_back(i);
	}
	pos=k-1;
	cout<<"<";
	while(v.size()-1){
		cout<<v[pos]<<", ";
		v.erase(v.begin()+pos);
		pos=(pos+k-1)%v.size();
	}
	cout<<v.back()<<">";
}
