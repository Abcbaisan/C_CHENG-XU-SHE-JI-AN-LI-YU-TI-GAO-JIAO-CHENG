#include<stdio.h>
int main( )
{int x;
 scanf("%d", &x);
 if(x>=90)
   printf("��");
 else
   if(x>=80)
     printf("��");
   else
     if(x>=70)
       printf("��");
     else
       if(x >= 60)
	 printf("����");
       else
	 printf("��");
 return 0;
}
