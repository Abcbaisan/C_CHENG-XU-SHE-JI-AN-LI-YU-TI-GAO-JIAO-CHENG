#include <stdio.h>
int main()
{ char c1,c2;
  printf(�����������x�������װ��(y/n)����);
  c1 = getchar();           /*Ӧ����getch()*/
  if(c1==��Y��||c1==��y��)   
      /*��װx����Ĵ���*/
  printf(��\n���������y�������װ��(y/n)����);
  c2 = getchar();
  if(c2==��Y��||c2==��y��)   
      /*��װy����Ĵ���*/
  return 0;
}