#include<stdio.h>
int main()
{int i, count=0;
 char s[80];
 gets(s);
 for(i=0; s[i]!='\0';i++){     /*ѭ�����������ü��������Ƶ�*/
   if(s[i]>=65&&s[i]<=90)
     count++;
 }
 printf("%d\n", count);
 return 0;
}
