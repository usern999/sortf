#include <stdio.h>
#include <conio.h>
#include <random>
#include <time.h>

void main()
{
	int a[10];
	int d;
	srand(time(NULL));
	for(int i=0;i<10;++i)
	{
		a[i]=rand()%200;
	}
	bool fl;
	fl=true;
	while(fl)
	{
		fl=false;
		for(int i=0;i<9;++i)
		{
			if(a[i]<a[i+1])
			{
				fl=true;
				d=a[i];
				a[i]=a[i+1];
				a[i+1]=d;
			}
		}
	}
	for(int i=0;i<10;++i)
	{
		printf("%d ",a[i]);
	}
	getch();
}