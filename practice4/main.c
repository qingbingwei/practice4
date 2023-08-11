#include <stdio.h>
#include <assert.h>
#include <string.h>
//实现字符串逆序，但是单词本身不逆序

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
    gets(arr);  //输入
    int len = strlen(arr);
    reverse(arr,arr+len-1);  //第一步逆序

    char* start = arr;    //记录单词起始位置
    char* end = start;

    while(*start)  //判断是否为\0
    {
        while(*end != ' ' && *end != '\0')  //最后一个单词末尾为\0
        {
            end++;
        }
        reverse(start,end - 1);
        if(*end != '\0')  //最后一个单词时不++
           end++;
        start = end;
    }

    printf("%s",arr);

    return 0;
}