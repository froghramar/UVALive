#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;
const int N = 1000005;

int a, b, c, A, B, C;

void init(){
	int T;
	scanf("%d",&T);
	for(int t=1; t<=T; t++){
		scanf("%d%d%d",&a,&b,&c);
		A += a, B += b, C += c;
		int r = min(min(A,B),C);
		if(r < 30){
			puts("NO");
		}
		else{
			printf("%d\n",r);
			A -= r, B -= r, C -= r;
		}
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
