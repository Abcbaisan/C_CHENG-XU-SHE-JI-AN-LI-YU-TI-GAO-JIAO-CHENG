#include<stdio.h>
int main()
{int  m, n, k;                  /*k�����洢����*/
 scanf("%d%d", &m, &n);
 if(m<n)
   {                   /*��m<n�򽻻�*/
    int  t;
    t = m;
    m = n;
    n = t;
   }
 k = m%n;
 while( k != 0)
   {
    m = n;
    n = k;
    k = m%n;
   }
 printf("���Լ���ǣ�%d\n", n);      /*���һ�εĳ�����������*/
 return 0;
}



