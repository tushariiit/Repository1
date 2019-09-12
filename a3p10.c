#include<stdio.h>
int main()
{
	int a,b,c,d,x,p=0;
	printf("enter five nos");
        scanf("%d %d %d %d %d",&a,&b,&c,&d,&x);        
        if(a==x)
		p++;
	if(b==x)
		p++;
	if(c==x)
		p++;
	if(d==x)
		p++;
	printf("%d",p);

}
