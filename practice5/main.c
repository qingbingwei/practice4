#include <stdio.h>
#define LEN 10
//编写一个程序，实现将数组中奇数排在前面，偶数排在后面

//1.遍历方案  2.左右两边向中间找

void move_odd_even(int arr[],int sz)
{
    int left = 0;
    int right = sz - 1;

    while(left < right)   //内部循环也需加上left<right,避免全为奇数或偶数造成越界访问
    {
        while((left < right) && (arr[left]%2 == 1))  //从左向右找一个偶数停下来
        {
            left++;
        }
        while((left < right) && arr[right]%2 == 0)  //从右向左找一个偶数停下来
        {
            right--;
        }
        if(left < right)
        {
            int tmp = arr[left];
            arr[left] = arr[right];
            arr[right] = tmp;
            left++;
            right--;
        }
    }
}


int main()
{

    int i = 0;
    int arr[LEN] = {0};
    int sz = sizeof(arr)/sizeof(arr[0]);
    //输入
    for (i = 0;i < sz;i++)
    {
        scanf("%d",arr + i);
    }
    //调整
    int arr2[LEN] = {0};
    int count = 0;
    int j = 0;
    for(i = 0;i < sz;i++)
    {
        if(arr[i] % 2 ==1)
        {
            arr2[j] = arr[i];
            j++;
        }
    }
    for(i = 0;i < sz;i++)
    {
        if(arr[i] % 2 ==0)
        {
            arr2[j] = arr[i];
            j++;
        }
    }

    for(i = 0;i < sz;i++)
    {
        arr[i] = arr2[i];
    }


    //输出
    for (i = 0;i < sz;i++)
    {
        printf("%d ",arr[i]);
    }
     //遍历


    /*
    int i = 0;
    int arr[10] = {0};
    int sz = sizeof(arr)/sizeof(arr[0]);
    //输入
    for (i = 0;i < sz;i++)
    {
        scanf("%d",arr + i);
    }

    move_odd_even(arr,sz);

    for (i = 0;i < sz;i++)
    {
        printf("%d ",arr[i]);
    }
    */
    return 0;
}
