#include <stdio.h>
#define LEN 10
//��дһ������ʵ�ֽ���������������ǰ�棬ż�����ں���

//1.��������  2.�����������м���

void move_odd_even(int arr[],int sz)
{
    int left = 0;
    int right = sz - 1;

    while(left < right)   //�ڲ�ѭ��Ҳ�����left<right,����ȫΪ������ż�����Խ�����
    {
        while((left < right) && (arr[left]%2 == 1))  //����������һ��ż��ͣ����
        {
            left++;
        }
        while((left < right) && arr[right]%2 == 0)  //����������һ��ż��ͣ����
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
    //����
    for (i = 0;i < sz;i++)
    {
        scanf("%d",arr + i);
    }
    //����
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


    //���
    for (i = 0;i < sz;i++)
    {
        printf("%d ",arr[i]);
    }
     //����


    /*
    int i = 0;
    int arr[10] = {0};
    int sz = sizeof(arr)/sizeof(arr[0]);
    //����
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
