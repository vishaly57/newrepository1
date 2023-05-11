#include<stdio.h>
int main()
{
    int ch;
    printf("Enter your choice");
    printf("1=Monday,2=Tuesday,3=Wednesday,4=Thursday,5=Friday,6=Saturday,7=Sunday \n");
    printf("Enter Your Choice ch = ",ch);
    scanf("%d",&ch);
    
    switch(ch)
    {
    case 1  :
        
            printf("Monday");
            break;
        
        case 2  :
        printf("Tuesday");
            break;
            
    case 3  :
        printf("Wednesday");
            break;
            
        case 4  :
        printf("Thursday");
            break;
        case 5  :
        printf("Friday");
            break;
        case 6  :
        printf("Saturday");
            break;
        case 7  :
        printf("Sunday");
            break;
    
    default  :
            printf(" Enter Correct Choice");
            break;
    }
    
  return 0;
}


