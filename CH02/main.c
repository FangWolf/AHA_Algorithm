#include <stdio.h>
#include <string.h>

int main()
{
    //模拟链表
    int data[101], right[101];
    int i, n, t, len;
    //读入已有的数
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        scanf("%d", &data[i]);
    len = n;
    //初始化数组right
    for (i = 1; i <= n; i++)
    {
        if (i != n)
            right[i] = i + 1;
        else
            right[i] = 0;
    }
    //直接在数组data的末尾增加一个数
    len++;
    scanf("%d", &data[len]);
    //从链表的头部开始遍历
    t = 1;
    while (t != 0)
    {
        if (data[right[t]] > data[len])//如果当前结点下一个结点的值大于待插入数，将数插入到中间
        {
            right[len] = right[t];//新插入数的下一个结点标号等于当前结点的下一个结点编号
            right[t] = len;//当前结点的下一个结点编号就是新插入数的编号
            break;//插入完成跳出循环
        }
        t = right[t];
    }
    //输出链表中所有的数
    t = 1;
    while (t != 0)
    {
        printf("%d ", data[t]);
        t = right[t];
    }
    /*int a = 1;
    int *p;
    p=&a;
    printf("%d",*p);*/
    /*栈
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
        printf("NO");*/

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