/******************************************************************************
*  ▄██████████▄  ▀█████████▄   ▀██████████▄    ▄████████████▄   ▄██████████▄  *
* ▀▀███    ███▀    ███    ███    ███     ▀██▄  ▀███▀    ▀███▀   █▀    ▄███▀   *
*   ███            ███           ███      ██    ███      ███         ▄███▀    *
*  ▄███▄▄▄██▀    ▄███▄▄▄██▀      ███      ██▀   ███      ███        ▄███▀     *
* ▀▀███▀▀▀██▄   ▀▀███▀▀▀██▄     ▄███▄▄▄▄▄██▀    ███      ███       ▄███▀      *
*   ███            ███         ▀▀███▀▀▀▀▀██▄    ███      ███      ▄███▀       *
*   ███            ███    ███    ███     ███   ▄███▄    ▄███▄    ▄███▀    ▄█  *
* ▄▄████▀        ▄█████████▀    ▄███     ███▄  ▀████████████▀   ▀██████████▀  *
*                                                                             *
*                        *Don't limit your challenges, challenge your limits. *
******************************************************************************/

#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;
const int N = 105;

int mu[N];

void Mobius(){
   mu[1] = 1;
   for(int i = 1; i < N; i++)
        if(mu[i])
            for(int j = i + i; j < N; j += i)
                mu[j] -= mu[i];
}

int cube(int x){
    return x * x * x;
}

int a[N];

void init(){
    Mobius();
    for(int i = 1; i < N; i++){
        for(int k = 1; k <= i; k++){
            a[i] += mu[k] * (cube(i/k + 1) - 1);
        }
    }
    int T;
    scanf("%d",&T);
    for(int t=1; t<=T; t++){
        int n;
        scanf("%d",&n);
        printf("%d\n",a[n]);
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
