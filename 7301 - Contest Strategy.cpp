#include <bits/stdc++.h>

using namespace std;

const int N = 25;
int ar[N], pre[N];


int main() {
  #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif
  
  int cases;
  scanf("%d", &cases);
  for(int cc = 1; cc <= cases; cc++) {
    int n, m; scanf("%d%d", &n, &m);
    for(int i = 1; i <= n; i++) {
      scanf("%d", ar + i);
    }
    sort(ar + 1, ar + 1 + n);
    for(int i = 1; i <= n; i++) {
      pre[i] = pre[i - 1] + ar[i];
    }

    int counter = 0;
    int pen = 0;
    for(int i = 1; i <= n; i++) {
      if(pre[i] <= m) {
        counter++;
        pen += pre[i];
      }
    }
    printf("Case %d: %d %d %d\n", cc, counter, pre[counter], pen);
  }
  return 0;
}
