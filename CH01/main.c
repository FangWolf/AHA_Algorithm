#include<stdio.h>
struct student {
    char name[21];
    char score;
};//创建一个结构体
int a[101], n;
void quicksort(int left, int right) {
    int i, j, t, temp;
    if (left > right)
        return;
    temp = a[left];
    i = left;
    j = right;
    while (i != j) {
        //右往左
        while (a[j] >= temp && i < j)
            j--;
        //左往右
        while (a[i] <= temp && i < j)
            i++;
        //交换位置
        if (i < j) {
            t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }
    //将基准数归位
    a[left] = a[i];
    a[i] = temp;

    quicksort(left, i - 1);
    quicksort(i + 1, right);
}

int main() {
    //快速排序
    int i, j, t;
    //读入数据
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);
    quicksort(1, n); //快速排序调用
    //输出排序后的结果
    for (i = 1; i <= n; i++)
        printf("%d ", a[i]);

    /*struct student a[100],t;
    int i, j, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%s %d", &a[i].name,&a[i].score);
    }
    //冒泡排序
    for (i = 1; i <= n - 1; i++) {
        for (j = 1; j <= n - i; j++) {
            if (a[j].score < a[j + 1].score) {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    for (i = 1; i <= n; i++) {
        printf("%s\n ", a[i].name);
    }
    return 0;*/
    /*//桶排序
    int book[1001], i, j, t, n;
    for (i = 0; i <= 1000; i++) {
        book[i] = 0;
    }
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &t);
        book[t]++;
    }
    for (i = 1000; i >= 0; i--) {
        for (j = 1; j <= book[i]; j++)
            printf("%d ", i);
    }
    getchar();
    return 0;*/
    /*int a[11], i, j, t;
    for (i = 0; i <= 10; i++)
        a[i] = 0;

    for (i = 1; i <= 5; i++) {
        scanf("%d", &t);
        a[t]++;
    }

    for (i = 0; i < 10; i++)
        for (j = 1; j <= a[i]; j++)
            printf("%d", i);
    getchar(); //用来暂停程序，以便查看程序输出内容
    getchar();*/
    return 0;

}