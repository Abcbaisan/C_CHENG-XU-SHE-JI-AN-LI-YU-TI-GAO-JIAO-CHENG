#include<stdio.h>
int main( )
{int  year, month, day;
 int  d=0;
 scanf("%d%d%d", &year, &month, &day);
 switch(month)
   {
    case 12:  d += 30;           /*����11�µ�30��*/
    case 11:  d += 31;           /*����10�µ�31��*/
    case 10:  d += 30;           /*���� 9�µ�30��*/
    case  9:  d += 31;
    case  8:  d += 31;
    case  7:  d += 30;
    case  6:  d += 31;
    case  5:  d += 30;
    case  4:  d += 31;
    case  3:  d += 28;            /*�Ȱ�ƽ���㣬����2�µ�28�죬����ٿ�������*/
    case  2:  d += 31;            /*���� 1�µ�31��*/
    case  1:  d += day;           /*���ϵ�������*/
   }
 if((year%4==0&&year%100!=0||year%400==0)&&month>=3)  /*��������3�º�*/
   d++;
 printf("%d\n", d);
 return 0;
}
