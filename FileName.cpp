#include<stdio.h>
int min(int a,int b)
{
	if(a>b)
	return b;
	else
	return a;
}
int max(int a,int b)
{
	if(a>b)
	return a;
	else
	return b;
}
int main()
{
	int x,y;
	x=2019,y=324;
	int a=0;
	int b=0;
	int count=1;
	while(1)
	{
		if(x!=y)
		{
		a=min(x,y);
		b=max(x,y);
		x=b-a;
		y=a;
		count++;
		}
	else 
	break;
		
	}
	printf("%d",count);
	return 0;
 } 
