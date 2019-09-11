#include<stdio.h>
int main()
{
	int a,y;
	printf("please enter the no");
        scanf("%d",&a);

        y=(a-(a%100))/100;

printf("the no is %d",y);
}
