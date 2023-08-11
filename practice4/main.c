#include <stdio.h>
#include <assert.h>
#include <string.h>
//ʵ���ַ������򣬵��ǵ��ʱ�������

void reverse(char* left, char* right)
{
    assert(left);
    assert(right);

    while(left < right)
    {
        char tmp = *left;
        *left = *right;
        *right = tmp;

        left++;
        right--;
    }

}

int main()
{
    int b = -3;
    char arr[101] = {0};
    gets(arr);  //����
    int len = strlen(arr);
    reverse(arr,arr+len-1);  //��һ������

    char* start = arr;    //��¼������ʼλ��
    char* end = start;

    while(*start)  //�ж��Ƿ�Ϊ\0
    {
        while(*end != ' ' && *end != '\0')  //���һ������ĩβΪ\0
        {
            end++;
        }
        reverse(start,end - 1);
        if(*end != '\0')  //���һ������ʱ��++
           end++;
        start = end;
    }

    printf("%s",arr);

    return 0;
}