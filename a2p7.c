#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,p,q,r,x,y;
	printf("please enter coeficient of x in eq 1");
        scanf("%f",&a);

        printf("please enter coeficient of y in eq 1");
        scanf("%f",&b);

        printf("please enter constant in eq 1");
        scanf("%f",&c);

        printf("please enter coeficienets of x,y and constant in equation 2");
        scanf("%f%f%f",&p,&q,&r);

        
        x=((b*r)-(q*c))/((q*a)-(b*p));
        y=((a*r)-(c*p))/((b*p)-(a*q));

        printf("the point of inter section is (%f,%f)",x,y);
}	
