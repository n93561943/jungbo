#include<iostream>
#include<string.h>
#include<stack>
using namespace std;
stack<char> s;

void view(){
	while(!s.empty()){
		cout<<s.top();
		s.pop();
	}
}
int main(){
	int toggle;
	char str[100]={};
	fgets(str,sizeof(str),stdin);
	toggle=0;
	for(int i=0;i<strlen(str);i++){
		if(str[i]=='<'){
			view();
			cout << str[i];
			toggle = 1;
		}
		else if(str[i]=='>'){
			cout << str[i];
			toggle = 0;
		}
		else if(toggle)
			cout << str[i];
		else if(str[i]==' ' || str[i]=='\n'){
			view();
			cout << str[i];
		}
		else if(!toggle){
			s.push(str[i]);
		}
	}
	view();
}
