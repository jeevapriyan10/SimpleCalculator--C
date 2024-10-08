#include<stdio.h>
#include<math.h>
#include<string.h>
int intro();

int intro(){
    //basic display
    int choice;
    char options[][25] = {"1.ADDITION","2.SUBRACTION","3.MULTIPLICATION","4.DIVISION","5.SQUARE-ROOT","6.POWER","7.ROUND-OFF"};
    int size = sizeof(options)/sizeof(options[0]);
    printf("Pick a Choice :\n");
    printf("------------------------------------------\n");
    for(int i = 0;i<size;i++){
        printf("%s\n",options[i]);
    }
    printf("------------------------------------------\n");
    printf("Your Choice : ");
    scanf("%d",&choice);
    printf("Your Choice is : %s\n",options[choice - 1]);
    

    //input sections
    float num1;
    float num2;
    float num;
    float result;
    switch(choice){
        case 1: //addition
            printf("\nEnter Number 1: ");
            scanf("%f",&num1);
            printf("Enter Number 2: ");
            scanf("%f",&num2);
            result = num1 + num2;  //operation
            printf("\n------------------------------------------");
            printf("\nResult = %.2f",result);
            printf("\n------------------------------------------");
            break;

        case 2: //subraction
            printf("\nEnter Number 1: ");
            scanf("%f",&num1);
            printf("Enter Number 2: ");
            scanf("%f",&num2);
            result = num1 - num2; //operation
            printf("\n------------------------------------------");
            printf("\nResult = %.2f",result);
            printf("\n------------------------------------------");
            break;

        case 3: //multiplication
            printf("\nEnter Number 1: ");
            scanf("%f",&num1);
            printf("Enter Number 2: ");
            scanf("%f",&num2);
            result = num1 * num2; //operation
            printf("\n------------------------------------------");
            printf("\nResult = %.2f",result);
            printf("\n------------------------------------------");
            break;

        case 4: //division
            printf("\nEnter Number 1: ");
            scanf("%f",&num1);
            printf("Enter Number 2: ");
            scanf("%f",&num2);
            result = num1 / num2; //operation
            printf("\n------------------------------------------");
            printf("\nResult = %.2f",result);
            printf("\n------------------------------------------");
            break;

        case 5: //square-root
            printf("\nEnter a Number : ");
            scanf("%f",&num);
            result = sqrt(num); //operation
            printf("\n------------------------------------------");
            printf("\nResult = %.2f",result);
            printf("\n------------------------------------------");
            break;

        case 6: //power
            printf("\nEnter Number 1 (Base) : ");
            scanf("%f",&num1);
            printf("Enter Number 2 (Power) : ");
            scanf("%f",&num2);
            result = pow(num1,num2); //operation
            printf("\n------------------------------------------");
            printf("\nResult = %.2f",result);
            printf("\n------------------------------------------");
            break;

        case 7: //round-off
            printf("\nEnter a Number : ");
            scanf("%f",&num);
            result = round(num);//operation
            printf("\n------------------------------------------");
            printf("\nResult = %.2f",result);
            printf("\n------------------------------------------");
            break;
        
    }
    return 0;
}
int main(){
    char repeat;
    do
    {
        intro();
        printf("\nWant To Do Again? (Y/N) : ");
        scanf("%s",&repeat);
    } while(repeat == 'Y' || repeat == 'y');
    return 0;
}




