#include <stdio.h>
#include <stdlib.h>
int main()
{
 int  a;
 FILE *fp;
 if((fp = fopen("text.dat","w+")) == NULL)
   exit(1);
 putw(12337,fp);              /* ��Ϊ00110001  00110000  (�ȵͺ��)*/
 rewind(fp);
 fscanf(fp, "%d",&a);
 printf("%d\n",a);             /* ��������10 */
 return 0;
}