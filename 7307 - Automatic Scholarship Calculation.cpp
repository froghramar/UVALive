#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;
const int N = 505;

int n, s, cum[N];

void init(){
    while(scanf("%d%d",&n,&s) == 2 and (n or s)){
        memset(cum,0,sizeof(cum));
        while(n--){
            int x, y;
            scanf("%d.%d",&x,&y);
            cum[x * 100 + y]++;
        }
        int res = 0;
        for(int i = 250; i <= 400; i++){
            for(int d1 = 0; d1 <= 150; d1++){
                if(i + d1 >= 400) continue;
                int s1 = 0, s2 = 0, l, r;
                l = i; r = min(400, l + d1);
                int tot = 0;
                while(1){
                    tot++;
                    int p = 0;
                    for(int j = l; j <= r; j++){
                        p += cum[j];
                    }
                    s1 += p;
                    s2 += p * (tot - 1);
                    l = r + 1; r = min(400,l + d1);
                    if(l > 400) break;
                }
                if(s1 == 0) continue;
                for(int d2 = 1; d2 <= 100; d2++){
                    if((s - s2 * d2) % s1) continue;
                    int t1 = (s - s2 * d2) / s1;
                    int t2 = t1 + (tot - 1) * d2;
                    res += (t1 > 0 and t1 <= 100 and t2 > 0 and t2 <= 100);
                }
            }
        }
        printf("%d\n",res);
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
