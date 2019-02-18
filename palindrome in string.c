#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[100];
    int i,length;
    printf("");
    scanf("%d", &str);
    length = strlen(str);
    for(i=0;i<length ;i++)
    {
        if(str[i] != str[length-i-1]){
        flag = 1;
        break;
    }
    if(flag)
    {
    printf("yes",str);
    }
    else
    printf("No",str);
return 0;
}
