#include<stdio.h>
int main()
{int  n, max, i;
 scanf("%d", &n);          /*�����һ����*/
 max = n;                 /*��һ����������*/
 for( i = 2; i<=10; i++)
   {
    scanf("%d", &n);
    if( n > max)             /*��n�Ǹ������*/
      max = n;            /*��������*/
   }
 printf("�������:%d\n", max);
 return 0;
}
