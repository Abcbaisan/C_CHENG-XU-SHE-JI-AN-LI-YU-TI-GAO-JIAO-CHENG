#include <graphics.h>
main()
{
	int i,graphdriver,graphmode,size;
	void *buffer;
	graphdriver=DETECT;
	initgraph(&graphdriver,&graphmode,"");
	setbkcolor(BLUE);
	cleardevice();
	setcolor(YELLOW);
	setlinestyle(0,0,1);
	setfillstyle(1,5);
	circle(100,200,30); 
	floodfill(100,200,YELLOW);                /* ���Բ */             
	size=imagesize(69,169,131,231);            /*ָ��ͼ��ռ�ֽ���    */ 
	buffer=malloc(size);			          /*���仺����(���ֽ���)	*/ 
	getimage(69,169,131,231,buffer);	         /*��ͼ��	*/ 
	putimage(500,169,buffer,COPY_PUT); 	/*���¸���	*/ 
        do{
		for(i=0;i<185;i++)
		{
			putimage(70+i,170,buffer,COPY_PUT);	/*����������˶�*/ 
			putimage(500-i,170,buffer,COPY_PUT);	/*�ұ��������˶�*/ 
		}/*������ײ��ѭ��ֹͣ*/ 
		for(i=0;i<185;i++)
		{
			putimage(255-i,170,buffer,COPY_PUT);	/*����������˶�*/ 
			putimage(315+i,170,buffer,COPY_PUT);	/*�ұ��������˶�*/ 
		}
	}while (!kbhit());/*��������ʱ�ظ���������*/ 
	getch();
	closegraph();
}
