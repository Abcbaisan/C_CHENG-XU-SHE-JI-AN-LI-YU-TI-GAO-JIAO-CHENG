#include <stdio.h>
void sum(int m, int n)   /*�����������ĺͲ����*/
{int s;
 s=m+n;
 printf("%d\n", s);
}

int main()
{int a,b;
 scanf("%d%d",&a,&b);
 sum(a,b);     
 return 0;
}
