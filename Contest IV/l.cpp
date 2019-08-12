#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, a[100005], b[3], ans = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        if(a[i] != a[i - 1]) b[a[i]] = 0;
        b[a[i]]++;
        ans = max(ans, min(b[1], b[2]) * 2);
    }

    printf("%d\n", ans);

    return 0;
}
