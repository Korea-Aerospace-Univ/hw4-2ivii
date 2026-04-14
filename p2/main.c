#include <stdio.h>

int main(void)
{
    int n;
    int num_cnt = 0, alp_cnt = 0;
    int num_max = 0, alp_max = 0;
    char s = '\0';

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf(" %c", &s);

        if (s >= 'a' && s <= 'z') {
            alp_cnt++;
            num_cnt = 0;

            if (alp_cnt > alp_max) alp_max = alp_cnt;
        }
        else if (s >= '0' && s <= '9') {
            num_cnt++;
            alp_cnt = 0;

            if (num_cnt > num_max) num_max = num_cnt;
        }
        else {
            num_cnt = 0;
            alp_cnt = 0;
        }
    }

    printf("%d\n%d", alp_max, num_max);
    return 0;
}
