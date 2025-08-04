#include <stdio.h>
int main() {
    int T; 
    scanf("%d", &T);
    while (T--) {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);
        int tt = M1 * D;
        int tf = M1 + M2;
        int nd= tt / tf;
        int fewerDays = D - nd;
        printf("%d\n", fewerDays);
    }
    return 0;
}
