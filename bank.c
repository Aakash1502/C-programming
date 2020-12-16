#include <stdio.h>
#include <string.h>
#define MAXLEN 50
unsigned long long int ac_no;

void new_acc()
{
    //variables
    char name[50];
    int hno;
    char street_name[MAXLEN];
    char city[MAXLEN];
    char district[MAXLEN];
    char state[MAXLEN];
    unsigned long long int Aadhar;
    unsigned long long int phone;
    char date_of_birth[MAXLEN];
    int gender_choice;
    char gender_specified[10];
    int d1,m1,y1;
    int account_choice;
    char account_specified[15];

    //main function
    printf("\n");
    printf("Enter the details asked to open a bank account\n");
    printf("\n");
    printf("Enter name: ");
    gets(name);
    printf("\n");
    printf("Enter Aadhar number: ");
    scanf("%llu",&Aadhar);
    printf("\n");
    printf("Enter date of birth: ");
    scanf("%d",&d1);
    printf("Enter month of birth: ");
    scanf("%d",&m1);
    printf("Enter year of birth: ");
    scanf("%d",&y1);
    printf("\n");
    printf("Enter your address\n");
    printf("Enter House number: \n");
    scanf("%d",&hno);
    fflush(stdin);//if not used gets after scanf will get skipped
    printf("Enter street name: ");
    gets(street_name);
    printf("Enter city: ");
    gets(city);
    printf("Enter District: ");
    gets(district);
    printf("Enter the state: ");
    gets(state);
    printf("Enter your phone Number: ");
    scanf("%llu",&phone);
    printf("\n");
    printf("Enter gender\n For male click 1 \t for female click 2: ");
    scanf("%d",&gender_choice);
    switch (gender_choice)
    {
    case 1:
        strcpy(gender_specified, "Male");
        break;

    case 2:
        strcpy(gender_specified, "Female");
        break;
    
    default:
        printf("Enter a valid choice");
        break;
    }
    printf("\n");
    printf("Enter the account type\n 1 for savings 2 for current: ");
    scanf("%d",&account_choice);
    switch (account_choice)
    {
    case 1:
        strcpy(account_specified, "Savings");
        break;

    case 2:
        strcpy(account_specified, "Current");
        break;
    
    default:
        printf("Enter a valid choice");
        break;

    
    }
    //printing Entered details
    printf("The details You entered are as follows:\n");
    printf("Your Name: %s\n", name);
    printf("Your Aadhar number: %llu\n",Aadhar);
    printf("Your DOB: %d/%d/%d\n",d1,m1,y1);
    printf("Your phone number: %llu\n",phone);
    printf("Your address: h.no.- %d , street name- %s , city- %s , district- %s, state- %s\n",hno,street_name,city,district,state);
    printf("Gender: %s\n",gender_specified);
    printf("Account type: %s\n",account_specified);
}
void deposit(){
    int amount;
    printf("Enter your account number: ");
    scanf("%llu",&ac_no);
    printf("Enter the amount to be deposited: ");
    scanf("%d",&amount);
    
}
void withdraw()
{
    int amount;
    int bal;
    printf("Enter your balance: ");
    scanf("%d",&bal);
    printf("Enter the amount to be Withdrawn: ");
    scanf("%d",&amount);
    if(bal>amount){
        printf("Enter your account number: ");
        scanf("%llu",&ac_no);
    }
    else
    {
        printf("Not enough balance");
    }
    

    
    
}
void transfer()
{
    int amount;
    int bal;
    unsigned long long int rec_ac_no;
    printf("Enter your balance: ");
    scanf("%d",&bal);
    printf("Enter amount to be transferred: ");
    scanf("%d",&amount);
    if(bal>amount){
        printf("Enter your account number: ");
        scanf("%llu",&ac_no);
        printf("Enter receivers account number: ");
        scanf("%d",&rec_ac_no);
    }
    else
    {
        printf("Not enough amount");
    }
    
    
    
}
void checkdetail(){
    printf("Enter your account number: ");
    scanf("%llu",&ac_no);
}


int main(int argc, char const *argv[])
{
    int choice;
    printf("******Welcome******\n");
    printf("\n");
    printf("Enter the choice of service you need\n");
    printf("1. for Opening a new account\n");
    printf("2. To deposit\n");
    printf("3. To Withdraw\n");
    printf("4. To Transfer\n");
    printf("5. To Checkdetail of your account\n");
    scanf("%d",&choice);
    fflush(stdin);
    switch (choice)
    {
    case 1:
        new_acc();
        break;
    case 2:
        deposit();
        break;
    case 3:
        withdraw();
        break;
    case 4:
        transfer();
        break;
    case 5:
        checkdetail();
        break;
    
    default:
        printf("Enter a valid choice");
        break;
    }
    
    return 0;
}
