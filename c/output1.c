#include <stdio.h>
int main()
{
   int a;
   scanf("%d",&a);
   switch (a){
      case 1 :
       printf("Monday");
       break;
      case 2 :
       printf("Tuesday");
       
      case 3 :
       printf("Wednesday");
      case 4:
       printf("Thursday");
      default :
       printf("No match found");
   }
   return 0;
   
}