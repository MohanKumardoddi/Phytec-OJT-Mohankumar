#include<stdio.h>

void main()
{
	void*vp;

	int a = 10;
	float b =1.45;
	char ch ='c';

	vp = &a;
	printf("a =%d\n",*(int*)vp);

	vp = &b;
	printf("b =%f\n",*(float*)vp);

	vp = &ch;
	printf("ch =%c\n",*(char*)vp);
}


