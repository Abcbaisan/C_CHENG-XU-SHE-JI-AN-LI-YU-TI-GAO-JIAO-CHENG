#include <stdio.h>
#include<dos.h>
int main()
{_CX = 2012;
 _DH = 12;
 _DL = 26;
 _AH = 0x2b;
 geninterrupt(0x21);
 if(_AL == 0)
   printf("���óɹ�!\n");
 else
   printf("����ʧ��!\n");
 return 0;
}
