#include <stdio.h>
#include <stdlib.h>
int main()
{
 int a;
 FILE *fp;
 if((fp = fopen("text.txt","w+")) == NULL) 
    exit(1);
 fprintf(fp, "%d\n", 10000);         /*text.txt�ļ�������5+2=7*/
 rewind(fp);                         /*ʹ��дָ��ָ���ļ�ͷ*/
 a = getw(fp);  
 printf("%d\n", a);                 /*��������12337*/
 return 0;
}
