//本题要求实现一个函数，统计给定字符串中英文字母、空格或回车、数字字符和其他字符的个数。
#include <stdio.h>
#include <string.h>
#define MAXS 15

void StringCount( char s[] );
void ReadString( char s[] ); /* 由裁判实现，略去不表 */

int main()
{
    char s[MAXS];

    ReadString(s);
    StringCount(s);

    return 0;
}

void StringCount( char s[] ){
     int length= strlen(s);
    int i,letter=0,blank=0,digit=0,other=0;
    for(i=0;i<length;i++)
    {
        if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
        {
            letter++;
        }
        else if(s[i]==' '||s[i]=='\n')
        {
            blank++;
        }
        else if(s[i]>='0'&&s[i]<='9')
        {
            digit++;
        }
        else
        {
            other++;
        }
    }
    printf("letter=%d,blank=%d,digit=%d,other=%d",letter,blank,digit,other);
}
void ReadString( char s[] ) /* 由裁判实现，略去不表 */
{
    int i;
    for(i=0;i<36;i++)
    {
        scanf("%c",&s[i]);
    }
}
