#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;
const int N = 1000005;

int arr[21] = {1, 64, 729, 4096, 15625, 46656, 117649, 262144, 531441, 1000000, 1771561, 2985984, 4826809, 7529536, 11390625, 16777216, 24137569, 34012224, 47045881, 64000000, 85766121};

int n;

void init(){
	while(scanf("%d",&n)==1 and n){
		bool b = 0;
		for(int i = 0; i < 21; i++){
			if(n == arr[i]) b = 1;
		}
		if(b) puts("Special");
		else puts("Ordinary");
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
