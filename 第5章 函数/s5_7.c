#include <stdio.h>
int main()
{void sub(int[]);
 int  a[10] = {1,3,5,2,7,9,6,8,0,4};
 printf("a�Ŀռ��С��%d\n", sizeof(a));
 printf("a��ֵ��%p\n", a);
 sub(a);
 printf("a��ֵ��%p\n", a);
 return 0;
}
void sub(int x[])
{printf("x�Ŀռ��С��%d\n", sizeof(x));
 printf("x��ֵ��%p\n", x);
 printf("x�ĵ�ַ��%p\n", &x);
 x++;
 printf("x��ֵ��%p\n", x); 
}
