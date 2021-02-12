#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<unistd.h>
#define Size 50
struct Account_Details
{
  float Balance,Loan;
  int account_no,Age;
  char name[Size],father_name[Size],address[Size],New_Account_Date[Size];
  char email[Size],ctizen[Size],account_type[Size],Loan_date[Size],loan_type[Size];
}Add_New[Size];

void password();
void intro();
int new_account();
void Registerd_users();
int update_account();
void User_security();
void cash_withdraw();
void cash_deposit();
void Account_type();
void Zakat_Calcult();
void Bank_loan();
void Student_loan();
void Annual_profit();
void Market_Rates();
void Developers();
void user_info();

 int main()
 {
   system("color B0"); // We used this to Change the Backgroung color of Consol App

        int Ch;
        intro();
        login:
        system("color B0");
        printf("\nLogin as CUI Bank Admin Or Standard user:\n1. Admin-login:\n0. Standard User:\n");
        scanf("%d",&Ch);
        if(Ch==1)
        {
          int Main_choice;
          password();
          system("cls");
          Main:
          system("color 8e");
          printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CUI-Banking Main Menu \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
          printf("\n1. New Account Entery(Must):                                \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
          printf("\n2. See Rigisterd Accounts:                                  \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
          printf("\n3. Update Currently Actice Accounts:                        \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
          printf("\n4. Cash Deposit:                                            \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
          printf("\n5. Cash Withdraw:                                           \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
          printf("\n6. Bank Loan:                                               \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
          printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Islamic Banking \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
          printf("\n7. Zakat Calculator:                                        \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
          printf("\n8. Qarz-e-hasna/Student Loan:                               \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
          printf("\n9. Annual Profit:                                           \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
          printf("\n10.Current Market Rates:                                    \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
          printf("\n11.Software Developers:                                     \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
          printf("\n0. To Return On Login Screen:                               \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
          scanf("%d",&Main_choice);
          switch(Main_choice)
          {
            case 1:
                   new_account();
                   system("cls");
                   goto Main;

            break;
            case 2:
                   Registerd_users();
                   system("cls");
                   goto Main;

            break;
            case 3:
                   Registerd_users();
                   update_account();
                   system("cls");

                   goto Main;

            break;
            case 4:
                   cash_deposit();
                   system("cls");
                   goto Main;

            break;
            case 5:
                    cash_withdraw();
                    system("cls");
                    goto Main;

            break;
            case 6:
                   Bank_loan();
                   system("cls");
                   goto Main;
            break;
            case 7:
                   Zakat_Calcult();
                   system("cls");
                   goto Main;
            break;
            case 8:
                   Student_loan();
                   system("cls");
                   goto Main;
            break;
            case 9:
                   Annual_profit();
                   system("cls");
                   goto Main;
            break;
            case 10:
                    Market_Rates();
                    system("cls");
                    goto Main;
            break;
            case 11:
                    system("cls");
                    Developers();
                    system("cls");
                    goto Main;
            break;
            case 0:
                   system("cls");
                   goto login;
            break;
            default:
            printf("Invaid Input!");
            goto Main;
          }

        }
        else if(Ch==0)
        {
           system("color 8b"); // We used this to Change the Backgroung color of Consol App
           system("cls");
          int Main_choice;
          User_security();
          main:
          printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CUI- Standard User Main Menu \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
          printf("\n1.Your Account Info:                                        \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
          printf("\n2. Cash Deposit:                                            \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
          printf("\n3. Cash Withdraw:                                           \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
          printf("\n4. Zakat Calculator:                                        \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
          printf("\n5. Qarz-e-hasna/Student Loan:                               \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
          printf("\n6. Annual Profit:                                           \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
          printf("\n0. To Return On Login Screen:                               \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
          scanf("%d",&Main_choice);
          switch(Main_choice)
          {
            case 1:
                   user_info();
                   system("cls");
                   goto main;

            break;
            case 2:
                   cash_deposit();
                   system("cls");
                   goto main;

            break;
            case 3:
                   cash_withdraw();
                   system("cls");
                   goto main;

            break;
            case 4:
                   Zakat_Calcult();
                   system("cls");
                   goto main;

            break;
            case 5:
                    Student_loan();
                    system("cls");
                    goto main;

            break;
            case 6:
                   Annual_profit();
                   system("cls");
                   goto main;
            break;
            case 0:
                   system("cls");
                   goto login;
            break;
            default:
            printf("Invaid Input!");
            goto main;
          }

        }
        else
        {printf("\nWrong Input!\n");}
  return 0;
 }
 void intro()
 {
    printf("\n\n\n\n\n");
    printf("\n\t\t\t  ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("\n\t\t\t        *********************************************");
    printf("\n\t\t\t        |           COMSATS University Bank         |");
    printf("\n\t\t\t        |                   Accounts                |");
    printf("\n\t\t\t        |                  MANAGEMENT               |");
    printf("\n\t\t\t        |                    SYSTEM                 |");
    printf("\n\t\t\t        *********************************************");
    printf("\n\t\t\t  ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("\nEnter any key to continue.....\n");
    getch();
}
 void password()
 {
  char admin[9]="Paks1tan";
  char admin1[9];
  int count1;
  for(;;)
  {
  printf("\nEnter Bank Login Password:\n");
  fgets(admin1,9,stdin);
  for(count1=0;count1<9;count1++)
  {
    if(admin[count1]==admin1[count1])
    {}
    else
    {
      puts("Invalid User! Try again\n");
      system("cls");
      break;
    }
  }
   if(count1==9)
   {
     sleep(3);
     printf("Successfull Login\n");
     break;
   }
 }
}

 int new_account(int count)
 {
  int again;
  char temp;
  for(int count=0;;count++)
  {
  {
  printf("\n*************** New Account Entry ***************\n");
  printf("\nEnter Account Number(6-Digit):");
  scanf("%d",&Add_New[count].account_no);

  printf("\nEnter Name: ");
  scanf("%c",&temp);
  scanf("%[^\n]",Add_New[count].name);
  printf("\nEnter Father's Name: ");
  scanf("%c",&temp); // temp statement to clear buffer
  scanf("%[^\n]",Add_New[count].father_name);
  printf("\nEnter Age (Must be a number): ");
  scanf("%d",&Add_New[count].Age);
  printf("\nEnter Address: ");
  scanf("%c",&temp);
  scanf("%[^\n]",Add_New[count].address);
  printf("\nEnter Citizenship: ");
  scanf("%c",&temp);
  scanf("%[^\n]",Add_New[count].ctizen);
  printf("\nEnter E-Mail: ");
  scanf("%c",&temp);
  scanf("%[^\n]",Add_New[count].email);
  Account_type(count);
  printf("\nAmmount to Deposit(PKR):");
  scanf("%f",&Add_New[count].Balance);}
  printf("\nEnter Account Creation Date(mm/dd/yy or Sep-4-2020): ");
  scanf("%c",&temp);
  scanf("%[^\n]",Add_New[count].New_Account_Date);
  printf("\nWant to Add another Account!:\n1 to Add 0 Exit to Main Menu:\n");
  scanf("%d",&again);
  if(again==0)
  {break;}
  }
  printf("Press any key to continue.....\n");
  getch();
}
 void Registerd_users()
 {
  for(int count=0;count<5;count++)
  {
    printf("\n************\xB2\xB2\xB2 Bank Account Index#:%d \xB2\xB2\xB2************\n",count);
    printf("Account I.D: ");
    printf("%d\n",Add_New[count].account_no);
    printf("E-Mail: ");
    printf("%s\n",Add_New[count].email);
    printf("Age: ");
    printf("%d\n",Add_New[count].Age);
    printf("Name: ");
    puts(Add_New[count].name);
    printf("Father's Name: ");
    puts(Add_New[count].father_name);
    printf("Address: ");
    printf("%s\n",Add_New[count].address);
    printf("Citizen: ");
    puts(Add_New[count].ctizen);
    printf("Account Type: ");
    puts(Add_New[count].account_type);
    printf("Current Balance: ");
    printf("%f\n",Add_New[count].Balance);
    printf("Loan Date: %s\n",Add_New[count].Loan_date);
    printf("Loan Type: %s\n",Add_New[count].loan_type);
    printf("Loan Ammount Avalabile:");
    printf("%f\n",Add_New[count].Loan);
    printf("Account Created On: %s",Add_New[count].New_Account_Date);
  }
  printf("Press any key to continue.....\n");
  getch();
}
  int update_account()
 {
  char temp;
  int Account_index,update_choice;
  printf("\nEnter Bank Index Number of the Account whict you want to upgrade[0-MAX]: ");
  scanf("%d",&Account_index);
  Lable_Choice:
  printf("1. To Update E-Mail:\n2. To Update Age:\n3. To Update Name:\n4. To Update Father's Name:\n5. To update Address\n6. To update Citizenship:\n7. To Update Account-Type:\n8. To Update Account Balance:");
  scanf("%d",&update_choice);
  printf("\n\t\t\t  Account I.D: \n");
  printf("\n\t\t\t  %d\n",Add_New[Account_index].account_no);
  switch(update_choice)
  {
    case 1:
    printf("Current E-Mail: ");
    printf("%s\n",Add_New[Account_index].email);
    printf("Please enter 04 digit pin to update your detail:");
    User_security();
    printf("\nEnter E-Mail: ");
    scanf("%c",&temp);
    scanf("%[^\n]",Add_New[Account_index].email);
    break;
    case 2:
    printf("Current Age: \n");
    printf("%d",Add_New[Account_index].Age);
    printf("Please enter 04 digit pin to update your detail:");
    User_security();
    printf("\nEnter Age: \n");
    scanf("%d",&Add_New[Account_index].Age);
    break;
    case 3:
    printf("Current Name: \n");
    puts(Add_New[Account_index].name);
    printf("Please enter 04 digit pin to update your detail:");
    User_security();
    printf("\nEnter Name: \n");
    scanf("%c",&temp);
    scanf("%[^\n]",Add_New[Account_index].name);
    break;
    case 4:
    printf("Current Name: \n");
    puts(Add_New[Account_index].father_name);
    printf("Please enter 04 digit pin to update your detail:");
    User_security();
    printf("\nEnter Name: \n");
    scanf("%c",&temp); // temp statement to clear buffer
    scanf("%[^\n]",Add_New[Account_index].father_name);
    break;
    case 5:
    printf("Current Address: \n");
    printf("%s",Add_New[Account_index].address);
    printf("Please enter 04 digit pin to update your detail:");
    User_security();
    printf("\nEnter Address: \n");
    scanf("%c",&temp);
    scanf("%[^\n]",Add_New[Account_index].address);
    break;
    case 6:
    printf("Current Citizenship: \n");
    puts(Add_New[Account_index].ctizen);
    printf("Please enter 04 digit pin to update your detail:");
    User_security();
    printf("\nEnter Citizenship: \n");
    scanf("%c",&temp);
    scanf("%[^\n]",Add_New[Account_index].ctizen);
    break;
    case 7:
    printf("Current Account Type: \n");
    puts(Add_New[Account_index].account_type);
    printf("Please enter 04 digit pin to update your detail:");
    User_security();
    Account_type(Account_index);
    break;
    case 8:
    printf("Current Balance: \n");
    printf("%f",Add_New[Account_index].Balance);
    printf("Please enter 04 digit pin to update your detail:");
    User_security();
    printf("\nAmmount to Deposit PKR: \n");
    scanf("%f",&Add_New[Account_index].Balance);
    break;
    default:
    printf("\nWrong Input!\nTry Again!!!\n");
    goto Lable_Choice;
    break;
    }
    printf("Press any key to continue.....\n");
    getch();
  }
 void User_security()
 {
    int Core_Password=1989;
    int Check_Password;
    int count,signal=0;
    for(;;)
    {
    printf("\nEnter User Pin!:\n");
    scanf("%d",&Check_Password);
    for(count=0;count<3;count++)
    {
      if(Core_Password==Check_Password)
      {signal=1;}
      else
      {
        puts("\nInvalid User! Try again\n");
        system("cls");
        break;
      }
    }
     if(signal==1)
     {
       sleep(3);
       printf("Successfull Login\n");
       break;
     }
    }
  }
  void cash_withdraw()
  {
    password();
    User_security();
    int Account_index;
    float withdraw;
    printf("Enter the Index Number provided by the Bank(0-MAx):\n");
    scanf("%d",&Account_index);
    printf("Current Balance: \n");
    printf("%f",Add_New[Account_index].Balance);
    printf("Proceding Withdraw:\n");
    printf("Ammount to Withdraw$: \n");
    scanf("%f",&withdraw);
    Add_New[Account_index].Balance=Add_New[Account_index].Balance-withdraw;
    printf("Balance After Withdraw: ");
    printf("%f",Add_New[Account_index].Balance);
    printf("Press any key to continue.....\n");
    getch();
  }
  void cash_deposit()
  {
    password();
    User_security();
    int Account_index;
    float depost;
    printf("Enter the Index Number provided by the Bank(0-MAx):\n");
    scanf("%d",&Account_index);
    printf("Current Balance: \n");
    printf("%f",Add_New[Account_index].Balance);
    printf("Proceding Deposit:\n");
    printf("Ammount to Deposit$: \n");
    scanf("%f",&depost);
    Add_New[Account_index].Balance=Add_New[Account_index].Balance+depost;
    printf("Balance After Deposit: ");
    printf("%f",Add_New[Account_index].Balance);
    printf("Press any key to continue.....\n");
    getch();
  }
  void Account_type(int new)
  {
    int account_choice;
    lable_choice:
    printf("\nType of Account:\n.1 Current:\n.2 Saving:\n.3 Student:\n.4 Fixed:\n");
    scanf("%d",&account_choice);
    switch(account_choice)
    {
      case 1:
      strcpy(Add_New[new].account_type,"Current");
      break;
      case 2:
          strcpy(Add_New[new].account_type,"Saving");
      break;
      case 3:
          strcpy(Add_New[new].account_type,"Student");
      break;
      case 4:
          strcpy(Add_New[new].account_type,"Fixed");
      break;
      default:
      printf("\nInvalid Input!\n");
      goto lable_choice;
    }
  }
  void Zakat_Calcult()
  {
    int Account_index;
    float zakat;
    printf("***************Zakat is Not applicable on Student Account***************\n");
    printf("Enter Your Account Index to Calculate Zakat: ");
    scanf("%d",&Account_index);
    zakat=(Add_New[Account_index].Balance)*(2.5/100.0);
    printf(" Zakat on: %f ",Add_New[Account_index].Balance);
    printf(" is: %f\n",zakat);
    printf("Press any key to continue.....\n");
    getch();

  }
  void Bank_loan()
  {
    char temp;
    int loan_choice;
    float loan;
    int Account_index;
    printf("Loan option tha CUI provides:\n");
    lable_loan:
    printf("Enter Your Account Index:\n");
    scanf("%d",&Account_index);
    printf("Enter Date of Loan Taken(mm/dd/yy or Sep-9-2020):\n");
    scanf("%c",&temp);
    scanf("%[^\n]",Add_New[Account_index].Loan_date);
    printf("1.(5-Month) Rs:10000\n2.(8-Month) RS:40000\n3.(1-Year) Rs:80000\n");
    scanf("%d",&loan_choice);
    switch(loan_choice)
    {
      case 1:
      printf("Loan of Rs:10000 is assigned to you Account:\n");
      loan=10000.0;
      Add_New[Account_index].Loan=loan;
      break;
      case 2:
      printf("Loan of Rs:40000 is assigned to you Account:\n");
      loan=40000.0;
      Add_New[Account_index].Loan=loan;
      break;
      case 3:
      printf("Loan of Rs:80000 is assigned to you Account:\n");
      loan=90000.0;
      Add_New[Account_index].Loan=loan;
      break;
      default:
      printf("\nWrong Input!\n");
      goto lable_loan;
    }
    printf("Press any key to continue.....\n");
    getch();
  }
  void Student_loan()
  {
    char temp;
    int loan_choice;
    int Account_index;
    printf("You Must be COMSATS enrolled Student!\n");
    printf("\nQarz-e-Hasna for our Deserving Students:\n");
    lable_loan:
    printf("Enter Your Account Index:\n");
    scanf("%d",&Account_index);
    printf("Enter Date of Loan Taken(mm/dd/yy or Sep-9-2020):\n");
    scanf("%c",&temp);
    scanf("%[^\n]",Add_New[Account_index].Loan_date);
    printf("1. (Smester Fee): \n2. (Whole Degree Loan):\n3.(Medical Loan):\n");
    scanf("%d",&loan_choice);
    switch(loan_choice)
    {
      case 1:
      printf("Smester Fee loan is been Provided:\n");
      strcpy(Add_New[Account_index].loan_type,"Smester Fee Loan");
      Add_New[Account_index].Loan=95000.0;
      break;
      case 2:
      printf("Whole Degree Loan is been Provided\n:");
      Add_New[Account_index].Loan=760000.0;
      strcpy(Add_New[Account_index].loan_type,"Whole Degree Loan");
      break;
      case 3:
      printf("Medical Loan is been Provided:\n");
      Add_New[Account_index].Loan=80000.0;
      strcpy(Add_New[Account_index].loan_type,"Medical Loan");
      break;
      default:
      printf("\nWrong Input!\n");
      goto lable_loan;
    }
    printf("\nEnter any key to continue.....\n");
    getch();
  }
  void Annual_profit()
  {
    int Account_index;
    float profit;
    printf("*************** Annual Profit ***************\n");
    printf("CUI provides Annual Profit to Its users:\n");
    printf("Annual profit Net Percetage is 8.5%:\nEnter your Account Index:\n");
    scanf("%d",&Account_index);
    profit=(Add_New[Account_index].Balance)*(8.5/100.0);
    printf("Annual Profit on: %f",Add_New[Account_index].Balance);
    printf(" is: %f\n",profit);
    printf("Press any key to continue.....\n");
    getch();
  }
  void Market_Rates()
  {
    printf("*************** Market Rates ***************\n");
    printf("1 US Dollar$= 165.50 Pakistani Rupee:\nGold 22K per Tola= 96,942 Pakistani Rupee:\nWheat 40kg=1,400 Pakistani Rupee:\nPetrol 1-Liter=81.58 Pakistani Rupee:\n");
    printf("Enter any key to continue.....\n");
    getch();
  }
  void Developers()
  {
    printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Project Developers    \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Muhammad Ansar Javaid \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Ansa Hayat Khan       \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Rabbaniyeh Neakakhter \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Abdur Rehman Mohsin   \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("Enter any key to continue.....\n");
    getch();
  }
  void user_info()
  {
    FILE *fptr;
    fptr=fopen("record.text","w");
    int Account_index;
    printf("*************** User Account Info ***************\n");
    User_security();
    printf("Enter Your Index Number to see Details:");
    scanf("%d",&Account_index);
    printf("\n************\xB2\xB2\xB2 Bank Account Index#:%d \xB2\xB2\xB2************\n",Account_index);
    printf("\nAccount I.D: ");
    printf("%d",Add_New[Account_index].account_no);
    printf("\nE-Mail@: ");
    printf("%s",Add_New[Account_index].email);
    printf("\nAge: ");
    printf("%d",Add_New[Account_index].Age);
    printf("\nName: ");
    puts(Add_New[Account_index].name);
    printf("\nFather Name: ");
    puts(Add_New[Account_index].father_name);
    printf("\nAddress: ");
    printf("%s",Add_New[Account_index].address);
    printf("\nCitizen: ");
    puts(Add_New[Account_index].ctizen);
    printf("\nAccount Type: ");
    puts(Add_New[Account_index].account_type);
    printf("\nCurrent Balance: ");
    printf("%f",Add_New[Account_index].Balance);
    printf("Loan Date: %s\n",Add_New[Account_index].Loan_date);
    printf("Loan Ammount Avalabile:");
    printf("%f\n",Add_New[Account_index].Loan);
    printf("Account Created On: %s\n",Add_New[Account_index].New_Account_Date);
    fprintf(fptr,"Account ID:%d\nEmail:%s\nAge:%d\nName:%s\nFather's Name:%s\nAdress:%s\nCitizen:%s\nAccount Type:%s\nBalance:%f\nLoan Date:%s\nLoan Ammount:%f\nAccount Created on: %s\n\t\n",Add_New[Account_index].account_no,Add_New[Account_index].email,Add_New[Account_index].Age,Add_New[Account_index].name,Add_New[Account_index].father_name,Add_New[Account_index].address,Add_New[Account_index].ctizen,Add_New[Account_index].account_type,Add_New[Account_index].Balance,Add_New[Account_index].Loan_date,Add_New[Account_index].Loan,Add_New[Account_index].New_Account_Date);
     system(" start .\ record.text .\ record.text");
    fclose(fptr);
    printf("\n************* Your Account Info is Saved in current Working folder 'file' name record.txt*************\n");
    printf("Enter any key to continue.....\n");
    getch();
  }
