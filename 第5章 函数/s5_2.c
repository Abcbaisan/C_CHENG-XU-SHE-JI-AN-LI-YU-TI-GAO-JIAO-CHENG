#include <stdio.h>
int  sum(int,int);       /*��������*/
int main()
{int a,b,s;
 scanf("%d%d",&a,&b);
 s=sum(a,b);     
 printf("%d\n", s);
 return 0;
}
int  sum(int m, int n)   /*�����������ĺ�*/
{int s;
 s=m+n;
 return s;            
}
