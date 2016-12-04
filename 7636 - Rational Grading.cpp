#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;
const int N = 1000005;

char s[50], cmp[20];
int n, t, val, cnt;

int dig(char d){
    if(d >= '0' and d <= '9') return d - '0';
    return d - 'A' + 10;
}

void init(){
    while(scanf("%s%d",s,&t)==2 and !(!strcmp(s, "0") and !t)){
        int base, st;
        if(s[0] != '0'){
            base = 10;
            st = 0;
        }
        else if(s[1] == 'x'){
            base = 16;
            st = 2;
        }
        else{
            base = 8;
            st = 1;
        }
        n = 0;
        for(int i = st; s[i] ; i++){
            n = n * base + dig(s[i]);
        }
        cnt = 0;
        while(t--){
            scanf("%s%d",cmp,&val);
            if(!strcmp(cmp,"i")){
                cnt += (n == val);
                n = val;
                continue;
            }
            if(cmp[0] == '+') n++;
            else if(cmp[0] == '-') n--;
            cnt += (n == val);
            n = val;
            if(cmp[2] == '+') n++;
            else if(cmp[2] == '-') n--;
        }
        printf("%d\n",cnt);
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
