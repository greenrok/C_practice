// 1091 codeup
#include <stdio.h>

int main() {
    long long int a, m, d, n, i;

    scanf("%lld %lld %lld %lld", &a, &m, &d, &n);

    for (i=2; i<=n; i++) {
        a = (a*m)+d;
    }

    printf("%lld", a);

    return 0;    
}