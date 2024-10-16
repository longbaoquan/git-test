#include<stdio.h>
#define MaxSize 100
typedef int ElemType;  //假设顺序表中元素为int类型
typedef struct
{
	ElemType data[MaxSize]; // 存放顺序表元素
	int length;            //顺序表长度
} SeqList;

bool point[MaxSize];//判断data[i]是否等于x
void DeleteX(SeqList &L,int x)//删除元素x
{
	int i ;
	int length = 0;
	for (i = 0; i < L.length; i++)
	{
		if (L.data[i] == x)
		{
			point[i] = true;
		}

	}
	int arr[MaxSize];
	for (i = 0; i < L.length; i++)
	{
		if (point[i] == false)
		{
			arr[length] = L.data[i];
			length++;
		}
	}
	L.length = 0;
	for (i = 0; i < length; i++)
	{
		
		L.data[i] = arr[i];	
		L.length++;
	}
}
int main()
{
	int i = 0;
	SeqList L;
	L.length = 11;
	L.data[0] = 1;
	L.data[1] = 1;
	L.data[2] = 2;
	L.data[3] = 3;
	L.data[4] = 3;
	L.data[5] = 3;
	L.data[6] = 4;
	L.data[7] = 4;
	L.data[8] = 4;
	L.data[9] = 4;
	L.data[10] = 5;
	
	for (i = 0; i <L.length; i++)
	{
		printf("%d ", L.data[i]);
	}
	printf("\n");
	int x = 4;
	DeleteX(L,x);
	for (i = 0; i <L.length; i++)
	{
		printf("%d ", L.data[i]);
	}
	
	return 0;
}