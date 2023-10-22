 #include<stdio.h>
 int main()
 {
     int n,counter = 0;
     printf("enter the number : ");
     scanf("%d",&n);

     if(n==0)
     {
         printf("there is only 1 digt");
     }
     else 
     {
         while (n != 0)
         {
             n /= 10;
             counter ++;
         }
         printf("the number of digit is %d", counter);
        

     }
     return 0;
 }

