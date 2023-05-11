#include<stdio.h>
#include<conio.h>

main()
{  clrscr();
   int k;
   printf("enter value of k=");
   scanf("%d",&k);

   if(k==0)
   {
     printf(" value is natural");
   }
   else if(k>0)
   {
     printf("value is positive");
   }
   else
   {
     printf("value is nagative");
   }
   getch();
}