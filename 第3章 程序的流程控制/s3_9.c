#include<stdio.h>
int main()
{int  n, max, k, i;          /*k������¼����������*/
 scanf("%d", &n);
 max = n;
 k = 1;                   /*Ŀǰ��һ������󣬼�¼�����*/
 for( i = 2; i<=10; i++)
   {
    scanf("%d", &n);
    if( n > max)
      {
       max = n;
       k = i;               /*��¼�����������*/
      }
   }
 printf("������������:%d\n",  k);
 return 0;
}
