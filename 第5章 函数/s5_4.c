#include  <stdio.h>
int main()
{void  edit(int *);                   
 int  a = 59;
 edit(&a);                            /*������ַ��ʵ��*/
 printf("�޸ĺ�a�������ǣ�%d\n", a);
 return 0;
}

void  edit(int *p)                      /*ָ����������*/
{*p = 60;
}
