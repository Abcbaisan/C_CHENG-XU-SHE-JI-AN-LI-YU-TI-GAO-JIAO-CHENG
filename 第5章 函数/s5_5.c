#include  <stdio.h>
int main()
{void  swap(int *,int*);                   
 int  a = 1, b = 2;
 swap(&a, &b);                    /* �������������ĵ�ַ */
 printf("%d,%d\n",  a, b);
 return 0;
}

void  swap( int *pa,  int *pb )        /* ��������� */
{int  t;
 t = *pa;                          /* �൱��t=a */
 *pa = *pb;                        /* �൱��a=b */
 *pb = t;                          /* �൱��b=t */
}
