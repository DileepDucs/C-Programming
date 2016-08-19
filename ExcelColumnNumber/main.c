#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[] = {'A','A'};
    int n = strlen(a)-1, i = 0, sum = 0;
    printf("%d %d\n",n-1, a[0]);
    for(i = 0; i < n; i++) {
        sum += pow(26, i)*(a[n-(i + 1)] - 'A' + 1);
    }
    printf("Sum=%d", sum);
    return 0;
}
