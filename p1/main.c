#include <stdio.h>

int main(void){
    int ans, x;
    int cnt = 0;
    scanf("%d", &ans);

    do {
        scanf("%d", &x);
        cnt++;

        if (x > ans) printf("%d>?\n", x);
        else if (x < ans) printf("%d<?\n", x);
        else printf("%d==?\n", x);
    } while (x != ans);
    
    printf("%d", cnt);

    return 0;
}
