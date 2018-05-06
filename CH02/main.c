#include <stdio.h>
#include <string.h>

int main()
{
    char a[101], s[101];
    int i, len, mid, next, top;
    gets(a);//读入一行字符串
    len = strlen(a);
    mid = len / 2 - 1;

    top = 0;
    for (i = 0; i <= mid; i++)
        s[++top] = a[i];
    if (len % 2 == 0)
        next = mid + 1;
    else
        next = mid + 2;
    for (i = next; i <= len - 1; i++)
    {
        if (a[i] != s[top])
            break;
        top--;
    }
    if (top == 0)
        printf("YES");
    else
        printf("NO");

/*    //队列
    int q[102]={0,6,3,1,7,5,8,9,2,4},head,tail;
    int i;
//初始化队列
    head=1;
    tail=10; //队列中已经有9个元素了，tail指向队尾的后一个位置
    while(head<tail) //当队列不为空的时候执行循环
    {
//打印队首并将队首出队
        printf("%d ",q[head]);
        head++;
//先将新队首的数添加到队尾
        q[tail]=q[head];
        tail++;
//再将队首出队
        head++;
    }*/
    return 0;
}