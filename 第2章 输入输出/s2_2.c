#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{int  m ,i, k, n = 0;
 clrscr();              /*���֮ǰ������*/
 for(m = 1; m <= 10000; m++)
   {
    k = sqrt(m);
    for(i = 2; i<= k;i++)
      if(m%i == 0)
        break;
    if(i>k)
      {
       n++;
       printf("%5d",m);
       if(n%10 == 0)     /*ÿ�����10��*/
	 printf("\n");
       if(n%200 == 0)
	 getch();        /*һ����ʾ20��ʱ��ͣ�������*/
      }
   }
 getch();
 return 0;
}
