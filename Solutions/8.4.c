// 변형 피보나치 수

#include <stdio.h>
typedef long long ll;

ll strfibo(ll n) {
    ll a = 1, b = 1, t;
    for (int i = 3; i <= n; i++) {
        t = (a + b) % 0xFFFFFFFFu;
        a = b;
        b = t;
    }
    return b;
}

int main() {
    ll N, k;
    scanf("%lld", &N);
    printf("%lld", strfibo(N));
}