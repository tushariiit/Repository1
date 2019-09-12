#include<stdio.h>
int main()
{
	int t,i,x,y;
	for(i=20;i<40;i++)
	{
	      y=i+1;
            printf("%d \t",y);
	}
        for(t=50;t<=80;t++)
	{
	      x=t%2;
      if(x==0)
          {
          printf("\n %d \t",t);
	  }
	}
}	
