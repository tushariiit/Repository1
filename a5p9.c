#include<stdio.h>
void main()
{
	  for(int e=1;e<=3;e++)
        {
                for(int w=1;w<=20;w++)
                {
                        printf("*");
                }
                printf("\n");
        }

	int l=5,k=2,j=13;
	  for(int b=1;b<=6;b++)
        {
                for(int w=1;w<=l;w++)
                {
                        printf("*");
                }
                for(int q=1;q<=k;q++)
                {
                        printf("0");
                }
                for(int r=1;r<=j;r++)
                {
                        printf("*");
                }
                k=k+2;
                l--;
                j--;
                printf("\n");
        }
}
