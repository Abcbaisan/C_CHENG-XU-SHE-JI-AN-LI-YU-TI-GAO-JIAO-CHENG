#include <stdio.h>
int main()
{int  a, b, c, d, max;
 scanf("%d%d%d%d", &a, &b, &c, &d);
 max = a;                           /*a�ȵ���һ������*/
 if(b > max)                         /*���b����������b��Ϊ����������������*/
    max = b;
 if(c > max)
    max = c;
 if(d > max)
    max = d;
 printf("%d\n",  max);
 return 0;
}
