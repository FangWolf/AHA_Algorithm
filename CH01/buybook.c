#include <stdio.h>

int n, N[100],k;

int main() {

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &N[i]);
    }
    px(0, n);

    for(int i=1;i<=n;i++)
    {
        if( N[i] != N[i-1] ){
            printf("%d ",N[i]);
            k=i;
        }
        else
            k--;
    }
    printf("\n%d ",k);
    return 0;
}

void px(int left, int right) {
    int i, j, t, temp;
    if (left > right)
        return;
    temp = N[left];
    i = left;
    j = right;

    while (i != j) {
        while (N[j] >= temp && i < j)
            j--;
        while (N[i] <= temp && i < j)
            i++;
        if (i < j) {
            t = N[i];
            N[i] = N[j];
            N[j] = t;
        }
    }

    N[left] = N[i];
    N[i] = temp;
    px(left, i - 1);
    px(i + 1, right);
}