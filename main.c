#include <stdio.h>
int main()
{
    int choice, transaction = 0; 
    float balance = 10000.0, amount;
    printf("---Mini ATM Simulatory--- \n");
    printf("Instial balance = %.2f \n",balance);
    while(1)
    {
        printf("1. Check Balance \n") ;
        printf("2. Deposit \n");
        printf("3. Withdraw \n");
        printf("4. exit \n");
        printf("Enter your choice = ");
        scanf("%d",&choice);
        if(transaction >= 5 && choice != 4)
        {
            printf("Transaction limit reached \n");
            break;
        }
            switch (choice)
                {
                    case 1:
                        printf("your current balance = %.2f \n",balance);
                        transaction++;
                    break; 
                    case 2:
                        printf("Deposit money = %f",amount);
                        transaction++;
                if(amount > 0){
                    balance = balance + amount;
                {
                    printf("Deposit successfully");
                }}
                else
                {
                    printf("Invalid amount ");
                }
                break;
                    case 3:
                        printf("Enter the withdraw amount = ");
                        scanf("%f",&amount);
                if(amount <= 0)
                {
                    printf("invalid withdraw");
                }
                else if(balance - amount < 500)
                {
                    printf("insufficient balance");
                }
                else if(amount > balance)
                {
                    printf("transaction faild");
                }
                else
                balance = balance - amount;
                {
                    printf("withdrawl successfullyl = %.2f",balance);
                    transaction++;
                }
                break;
                case 4:
                {
                    printf("---Thanking for Banking with us--- \n");
                    printf("Total transaction = %d \n");
                    printf("final balance = %.2f \n");
                    return 0;
                }
            default :
                    printf("invalid choise");
                }
                if(transaction >= 5)
        {
            printf("transaction is invalid \n");
        }
    }
    printf("total transaction = %d \n", transaction);
    printf("final balance = %.2f \n", balance);
    return 0;
}
