#include<stdio.h>
#include<string.h>
#include<stack>
using namespace std;

int check(char str[]){
	stack<char> s;
	for(int i=0;i<strlen(str);i++)
		if(str[i]=='(') s.push('(');
		else if(!s.empty()) s.pop();
		else return 0;
	return s.empty();
}
int main(){
	int n;
	scanf("%d",&n);
	char str[100];
	for(int i=0;i<n;i++){
		scanf("%s",str);
		if(check(str)) printf("YES\n");
		else printf("NO\n");\
	}
}
