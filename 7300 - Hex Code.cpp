#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;
const int N = 1000005;

int digit(char ch){
	if(ch >= 'A' and ch <= 'Z') return ch - 'A' + 10;
	return ch - '0';
}

char s[255];
int n, v;

void init(){
	while(scanf("%s",s)==1){
		n = strlen(s);
		for(int i = 0; i < n; i+=2){
			v = digit(s[i]) * 16 + digit(s[i + 1]);
			putchar(v); 
		}
		putchar('\n');
	}
}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	init();
	return 0;
}
