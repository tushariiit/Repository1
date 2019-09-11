#include<stdio.h>
int main()
{
	int a,y,z,c;
	printf("enter a no");
	scanf("%d",&a);

         y=(a-(a%10))/10;
	 z=y%10;
	 

        printf("the result is %d",z);
}

