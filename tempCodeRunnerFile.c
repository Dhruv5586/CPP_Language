#include<stdio.h>
#include<conio.h>
void main()
{
     float s;
    
     printf("salary:");
     scanf("%f",&s);
     if(s<=5000)
     {
	   printf("gross salary:%f",s-(s*28/100));
     }
     else if(s>5000 && s<=10000)
     {
	   printf("gross salary:%f",s-(s*12/100));
     }
      else if(s>10000 && s<=15000)
      {
	    printf("gross salary:%f",s-(s*55/100));
      }
      else if(s>15000)
      {
	    printf("gross salary:%f",s-(s*70/100));
	    }
		
}