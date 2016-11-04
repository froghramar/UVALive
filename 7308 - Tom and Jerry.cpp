#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;
const int N = 1000005;

int R, V;

void init(){
    int T;
    scanf("%d",&T);
    for(int t=1; t<=T; t++){
        scanf("%d%d",&R,&V);
        double res = acos(-1) * R / (2 * V);
        printf("Case %d: %.8lf\n",t,res);
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
