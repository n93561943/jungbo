#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

long long solution(int n, vector<int> works) {
    long long answer = 0;
    long long max;
    sort(works.begin(),works.end(),greater<int>());
    while(n){
        max = works[0];
        for(int i=0;i<works.size();i++){
            if(max<=works[i]){
                works[i]--;
                n--;                
            }
            if(!n) break;
        }
    }
    for(int i=0;i<works.size();i++){
        if(works[i]>0){
            answer += works[i]*works[i];
        }
    }
    return answer;
}
int main(){
	int n,works;
	vector<int> v;
	cin>>n;
	cin>>works;
	while(works){
		v.push_back(works);
		cin>>works;
	}
	cout<<solution(n,v);
}
