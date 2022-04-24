//program to download movie from website
#include<stdio.h>
#include<math.h>
int main()
{
char a;//for entering movie name/
double b;//for entering amount of the movie/
int c,i=0;//for entering number of movies
float total;//for total amt
printf("enter the number of movies=");
scanf("%d",&c);
if(c==1)
{
 printf("enter your movie name=");
 scanf("\n%c",&a);
 total=20+(18.0/100.0*20);//20 is the amount fixed
 printf("total amount=%f",total);
 printf("pay the given amount");
 scanf("\n%lf",&b);
 if(b==total)
    {
             printf("Thank you!!!.. your movie is getting downloaded");
    }
 else
    {
      printf("Cancelled");
    }
}
else if(c>=2)
{
    while(i<=c)
    {
        printf("enter your movie name");
        scanf("\n%c",&a);
        i++;
    }
    total=20*c+(18.0/100.0*(20*c));
    printf("total amount=%f",total);
    printf("pay the given amount");
    scanf("\n%lf",&b);
    if(b==total)
    {
     printf("Thank you!!!.. your movie is getting downloaded");
    }
    else
   {
       printf("Cancelled");
   }
}
else
{
    printf("thank you for visiting our website");
}
return 0;
}
