#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<windows.h>
#include<conio.h>
#include<time.h>

void login();
void createacc();
void viewacc();
void home();
void home2();
void ser_account();
void account_number();
void phone_num();
void con_log();
void user_home();
void loader();
void logo();
void deposit_money();
void withdraw_money();
void update_acc();
void delete_acc();
void balance_check();
void transfer_money();
void transfer1();
void statement();
void statement1();
void statement2();

struct account_holder
{
    char name[50];
    char father_name[50];
    char mother_name[50];
    char phone_number[50];
    char gender[20];
    char age[20];
    char address[60];
    char nationality[20];
    char pin[50];
    char acc_num[7];
    float acc_balance;
}a;

struct statement
{
    char acc_n[7];
    char date[30];
    char status[20];
    float balance;
}s;

struct statement_dw
{
    char ac[7];
    char date[30];
    char status[20];
    float balance;
}d;

void gotoxy(int x, int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int auto_acc[];
char auto_acc1[7];
char phn_num[50];
char phone_no[50];
char log_name[50],log_pin[50];
int count=0;
float balance;
char ac_no[7];
char ac_num[7];
char acc_num_send[7];
char acc_num_receive[7];
char date[20];


void main()

{
    gotoxy(80,25);
    system("color 3f");
    printf("\n\n\n\n\t\t\t\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n\n\t\t\t\t\t\t\t\tMD. ASHIQUR RAHMAN DIPTA\n\n\n\t\t\t\t\t\t\t\tID:172-35-2149\n\n\n\t\t\t\t\t\t\t\tPROJECT NAME: BANKING MANAGEMENT SYSTEM.\n\t\t\t\t\t \n\n\t\t\t\t\t\t\t\tDept. of SWE(DIU)\n\t\t\t\t\t \n\n\n\t\t\t\t\t$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n\n\n\t\t");
    system("\t\t\t\t\t\tpause");
    system("cls");
    logo();
}


void home()
{
    int select;
    printf("\n\t\t\t\t\t\t$$$$$========== BANK MANAGEMENT SYSTEM MENU ==========$$$$$\n\n");
    printf("\n");
    printf("\t\t\t\t\t\t\t1. LOG IN.\n");
    printf("\t\t\t\t\t\t\t2. CREATE NEW ACCOUNT.\n");
    printf("\t\t\t\t\t\t\t3. BALANCE CHECK.\n");
    printf("\t\t\t\t\t\t\t4. VIEW ACCOUNT.\n");
    printf("\t\t\t\t\t\t\t5. SEARCH ACCOUNT.\n");
    printf("\t\t\t\t\t\t\t6. DEPOSIT MONEY.\n");
    printf("\t\t\t\t\t\t\t7. WITHDRAW MONEY FROM ACCOUNT.\n");
    printf("\t\t\t\t\t\t\t8. UPDATE ACCOUNT INFORMATION.\n");
    printf("\t\t\t\t\t\t\t9. DELETE ACCOUNT.\n");
    printf("\t\t\t\t\t\t\t10.TRANSFER MONEY.\n");
    printf("\t\t\t\t\t\t\t11.STATEMENT.\n");
    printf("\t\t\t\t\t\t\t12.Exit:\n");

    printf("\n\t\t\t\t\t\t\tSELECT AN OPTION:\n");
    gotoxy(73, 17);
    scanf("\t\t\t\t\t\t\t%d", &select);


    switch(select)

    {
        case 1:
            system("cls");
            login();
            break;

        case 2:
            system("cls");
            createacc();
            break;

        case 3:
            system("cls");
            balance_check();
            break;

        case 4:
            system("cls");
            viewacc();
            break;

        case 5:
            system("cls");
            ser_account();
            break;

        case 6:
            system("cls");
            deposit_money();
            break;
        case 7:
            system("cls");
            withdraw_money();
            break;

        case 8:
            system("cls");
            update_acc();
            break;

        case 9:
            system("cls");
            delete_acc();
            break;

        case 10:
            transfer_money();
            break;

        case 11:
            statement();
            break;

        case 12:
            exit(0);
            break;
    }

}


void home2()
{
    int select;
    printf("\n\t\t\t\t\t\t$$$$$========== BANK MANAGEMENT SYSTEM ==========$$$$$\n\n");
    printf("\n");
    printf("1. BALANCE CHECK.\n");
    printf("2. VIEW ACCOUNT.\n");
    printf("3. SEARCH ACCOUNT.\n");
    printf("4. DEPOSIT MONEY.\n");
    printf("5. WITHDRAW MONEY FROM ACCOUNT.\n");
    printf("6. UPDATE ACCOUNT INFORMATION.\n");
    printf("7. DELETE ACCOUNT.\n");
    printf("8. TRANSFER MONEY.\n");
    printf("9. Exit:\n");

    printf("\nSELECT AN OPTION:\n");
    scanf("%d", &select);


    switch(select)

    {

        case 1:
            system("cls");
            balance_check();
            break;

        case 2:
            system("cls");
            viewacc();
            break;

        case 3:
            system("cls");
            ser_account();
            break;

        case 4:
            system("cls");
            deposit_money();
            break;

        case 5:
            system("cls");
            withdraw_money();
            break;

        case 6:
            system("cls");
            update_acc();
            break;

        case 7:
            system("cls");
            delete_acc();
            break;

        case 8:
            transfer_money();
            break;

        case 9:
            exit(0);
            break;
    }

}


void logo()
{
    system("cls");
    loader();
    system("cls");
    system("color 4f");

    printf("\n\n\t\t\t\t  ================================================================================================\n\n");
    printf("\t\t\t\t\t             $                                                \n");
    printf("\t\t\t\t\t           $$$$$$             $$$$$   $$$$  $$$     $$ $$  $$ \n");
    printf("\t\t\t\t\t          $$ $                $$  $$ $$  $$ $$ $$   $$ $$ $$  \n");
    printf("\t\t\t\t\t          $$$$$$              $$$$$$ $$$$$$ $$  $$  $$ $$$    \n");
    printf("\t\t\t\t\t             $ $$             $$  $$ $$  $$ $$   $$ $$ $$ $$  \n");
    printf("\t\t\t\t\t          $$$$$$              $$$$$  $$  $$ $$    $$$$ $$  $$ \n");
    printf("\t\t\t\t\t             $                                              \n\n");

    printf("\n\t\t\t\t       $$$$    $$$$  $$$$  $$$$    $$  $$$$   $$$$$$ $$$$$$ $$$$    $$$$ $$$$$$ $$$$    $$ $$$$$$$$ ");
    printf("\n\t\t\t\t       $$ $$  $$ $$ $$  $$ $$ $$   $$ $$  $$ $$      $$     $$ $$  $$ $$ $$     $$ $$   $$    $$    ");
    printf("\n\t\t\t\t       $$   $$   $$ $$$$$$ $$  $$  $$ $$$$$$ $$ $$$  $$$$   $$   $$   $$ $$$$   $$  $$  $$    $$    ");
    printf("\n\t\t\t\t       $$        $$ $$  $$ $$   $$ $$ $$  $$ $$   $$ $$     $$        $$ $$     $$   $$ $$    $$    ");
    printf("\n\t\t\t\t       $$        $$ $$  $$ $$    $$$$ $$  $$  $$$$$  $$$$$$ $$        $$ $$$$$$ $$    $$$$    $$\n\n");

    printf("\n\t\t\t\t\t                                                                                   $     ");
    printf("\n\t\t\t\t\t                    $$$$$ $$   $$  $$$$$ $$$$$$$$ $$$$$$ $$$$   $$$$             $$$$$$  ");
    printf("\n\t\t\t\t\t                   $$      $$ $$  $$        $$    $$     $$ $$ $$ $$            $$ $     ");
    printf("\n\t\t\t\t\t                   $$$$$$   $$    $$$$$$    $$    $$$$   $$  $$   $$            $$$$$$   ");
    printf("\n\t\t\t\t\t                       $$   $$        $$    $$    $$     $$       $$               $ $$  ");
    printf("\n\t\t\t\t\t                   $$$$$    $$    $$$$$     $$    $$$$$$ $$       $$            $$$$$$   ");
    printf("\n\t\t\t\t\t                                                                                   $ \n\n");
    printf("\t\t\t\t   ==============================================================================================\n\n");
    system("pause");
    system("cls");
    home();
}


void login()
{
    system("color 5f");
    printf("\n\n===============$$$$$$$$$$$$$$$$$$$$$$$$$   LOG IN    $$$$$$$$$$$$$$$$$$$$$$$$$===============\n");
    char username[50];
    char pin[50];
    char c=' ',ab[10];
    int i=0;
    FILE *fp;
    fp=fopen("account.txt", "r");
    fflush(stdin);
    printf("\nENTER YOUR USERNAME:\n");
    gets(username);



    while(fread(&a, sizeof(a), 1, fp))
    {
        if(strcmp(username, a.name)==0)
        {
        printf("\nENTER YOUR PIN:\n");
        while (i<=7)
        {
            pin[i]=getch();
            c=pin[i];
            if(c==13)
            {
                break;
            }
            else
            {
                printf("*");
            }
            i++;
        }
        pin[i]='\0';
        if(strcmp(pin, a.pin)==0)
            {
                loader();
                system("cls");
                printf("\n");
                printf("\nWELCOME, YOU HAVE SUCCESSFULLY LOG IN YOUR ACCOUNT.\n");
                fclose(fp);
                home2();
                user_home();
                break;
            }
        }
    }
    fclose(fp);

    printf("\n\n\t\t\tWrong Input\n\n\n\n");
    system("pause");
    system("cls");
    login();

}

void user_home()
{
    exit(0);
}

void loader()
{
    int i;
    system("cls");
    printf("\n\n\n\n\t\t\t\t\t\t\t\t\tLoading...\n\n");
    printf("\t");
    for(i=0;i<158;i++)
    {
        Sleep(20);
        printf("%c",219);

    }
}


void createacc()
{
    account_number();
    system("color 6f");
    printf("\n\n===============$$$$$$$$$$$$$$$$$$$$$$$$$   CREAT ACCOUNT   $$$$$$$$$$$$$$$$$$$$$$$$$===============\n");
    FILE *fp;
    fp=fopen("account.txt", "a");
    struct account_holder a;
    fflush(stdin);
    printf("\nENTER USERNAME:\n");
    gets(a.name);
    strcpy(log_name,a.name);

    printf("\nENTER FATHER NAME:\n");
    gets(a.father_name);

    printf("\nENTER MOTHER NAME:\n");
    gets(a.mother_name);

    phone_num();
    strcpy(a.phone_number, phn_num);

    printf("\nGENDER:\n");
    fflush(stdin);
    gets(a.gender);

    printf("\nAGE:\n");
    gets(a.age);

    printf("\nENTER YOUR ADDRESS:\n");
    gets(a.address);

    printf("\nENTER YOUR NATIONALITY:\n");
    gets(a.nationality);

    printf("\nCHOOSE A PIN:\n");
    gets(a.pin);

    strcpy(a.acc_num,auto_acc1);
    fwrite(&a, sizeof(a), 1, fp);
    fclose(fp);

    account_number();
    char choice='\0';
    printf("\n\n\n\t\tYour Account Number Is %s",a.acc_num);
    printf(",\n....Continue as %s?\n\n\n\t\t\tY.Yes\t\tN.No",log_name);
    printf("\n\n\t\t\tEnter Your Choice:");
    choice=getche();

    switch(choice)
    {
    case 'Y':
    case 'y':
        system("cls");
        con_log();
        home2();
        break;

    case 'N':
    case 'n':
        system("cls");
        home();
        break;
    }

}


void con_log()
{
    printf("\nWELCOME, YOU HAVE SUCCESSFULLY LOG IN YOUR ACCOUNT.\n");
}
void phone_num()
{

    printf("\nENTER PHONE NUMBER:\n");
    scanf("%s", phn_num);
    if(strlen(phn_num)!=11)
    {
        printf("\nPlease input 11 digit phone number\n");
        getch();
        phone_num();
    }
}


void phone_num1()
{
    printf("\nENTER NEW PHONE NUMBER:\n");
    scanf("%s", phone_no);
    if(strlen(phone_no)!=11)
    {
        printf("\nPlease input 11 digit phone number\n");
        getch();
        phone_num1();
    }

}


void viewacc()
{
    int i;
    printf("\n\n\t\t\t\t===============$$$$$$$$$$$$$$$$$$$$$$$$$  VIEW ACCOUNT INFORMATION $$$$$$$$$$$$$$$$$$$$$$$$$===============\n");
    FILE *fp;
    fp=fopen("account.txt", "r");
    struct account_holder a;
    while(fread(&a, sizeof(a),1,fp))
    {
         if(strcmp(a.acc_num,"  ")!=0)
        {
            printf("\n\n\t\t\t\t\tNAME: %s\n\t\t\t\t\tPhone Number: %s\n\t\t\t\t\tGender: %s\n\t\t\t\t\tAge: %s\n\t\t\t\t\tAddress: %s\n\t\t\t\t\tNationality: %s\n\t\t\t\t\tMain Balance: %f \n", a.name, a.phone_number, a.gender, a.age, a.address, a.nationality, a.acc_balance);
            printf("\t\t\t\t\tAccount Number:");
            printf("%s\n", a.acc_num);
         }
    }
    fclose(fp);
    printf("\n\n\t\t\t");
    system("pause");
    char choice='\0';
    printf("\n\n\n\t\t\t\t1.Home\t\t2.Exit");
    printf("\n\n\t\t\tEnter Your Choice:");
    choice=getche();
    switch(choice)
    {
    case '1':
        system("cls");
        home();
        break;
    case '2':
        exit(0);
        break;
    default:
        printf("\n\n\t\t\twrong input");
        getch();
        system("cls");
        break;
    }
}


void account_number()
{
    FILE *fp;
    fp=fopen("account.txt", "r");
    struct account_holder a;
    fclose(fp);
    int i,j,k,c;
    for(j=0;j<count+1;j++)
    {
        for(i=0;i<6;i++)
        {
            auto_acc[i]=(rand()%5)+1;
            switch(auto_acc[i])
            {
            case 1:
                auto_acc1[i]='1';
                break;

            case 2:
                auto_acc1[i]='2';
                break;

            case 3:
                auto_acc1[i]='3';
                break;

            case 4:
                auto_acc1[i]='4';
                break;

            case 5:
                auto_acc1[i]='5';
                break;

            case 6:
                auto_acc1[i]='6';
                break;

            case 7:
                auto_acc1[i]='7';
                break;
            case 8:
                auto_acc1[i]='8';
                break;

            case 9:
                auto_acc1[i]='9';
                break;

            case 0:
                auto_acc1[i]='0';
                break;
            }
        }
    }

    fp=fopen("account.txt", "r");
    while(fread(&a,sizeof(a),1,fp))
    {
        if(strcmp(auto_acc1,a.acc_num)!=0)
        {
            count=1;
        }
    }
    fp=fopen("account.txt", "r");
    while(fread(&a,sizeof(a),1,fp))
    {
        if(strcmp(auto_acc1,a.acc_num)==0)
        {
            count++;
            account_number();
        }
    }
    fclose(fp);
}


void ser_account()
{
    char ser_acc[7];
    printf("\n\n\t\t\t\t===============$$$$$$$$$$$$$$$$$$$$$$$$$   SEARCH ACCOUNT   $$$$$$$$$$$$$$$$$$$$$$$$$===============\n");
    printf("\n\n\t\t\t\t\tEnter Account Number:");
    gotoxy(61, 5);
    scanf("%s",ser_acc);
    FILE *fp;
    fp=fopen("account.txt","r");

    while(fread(&a,sizeof(a),1,fp))
    {
        if(strcmp(a.acc_num,ser_acc)==0)
        {
            printf("\n\n\t\t\t\t\tNAME: %s\n\t\t\t\t\tPhone Number: %s\n\t\t\t\t\tGender: %s\n\t\t\t\t\tAge: %s\n\t\t\t\t\tAddress: %s\n\t\t\t\t\tNationality: %s\n", a.name, a.phone_number, a.gender, a.age, a.address, a.nationality);
            fclose(fp);
            printf("\n\n\t\t\t");

            char choice='\0';
            printf("\n\n\n\t\t\t\t\t1.Home\t\t2.Exit");
            printf("\n\n\t\t\t\tEnter Your Choice:");
            choice=getche();
            switch(choice)
            {
            case '1':
                system("cls");
                home();
                break;
            case '2':
                exit(0);
                break;
            default:
                printf("\n\n\t\t\twrong input");
                getch();
                system("cls");
                viewacc();
                break;
            }
        }
    }
    fclose(fp);
    printf("\n\n\t\t\t\t\tThis Account Doesn't Exist\n");
    system("\t\tpause");
    system("cls");
    ser_account();



}

void balance_check()
{
    char acc_no[20];
    printf("\n\n\t\t\t\t===============$$$$$$$$$$$$$$$$$$$$$$$$$   BALANCE CHECK   $$$$$$$$$$$$$$$$$$$$$$$$$===============\n\n");
    printf("\n\n\t\t\t\t\tPLEASE ENTER YOUR ACCOUNT NUMBER:\n\n");
    gotoxy(73, 6);
    scanf("%s", acc_no);
    FILE *fp;
    fp=fopen("account.txt","r");
    struct account_holder a;
    while(fread(&a,sizeof(a),1,fp))

    {
    if (strcmp(acc_no, a.acc_num)==0)
    {

        printf("\t\t\t\t\tNAME: %s\n\t\t\t\t\tPhone Number: %s\n\t\t\t\t\tGender: %s\n\t\t\t\t\tAge: %s\n\t\t\t\t\tAddress: %s\n\t\t\t\t\tNationality: %s\n", a.name, a.phone_number, a.gender, a.age, a.address, a.nationality);
        printf("\n\t\t\t\t\tYOUR MAIN BALANCE IS:%f", a.acc_balance);
        fclose(fp);

    }
    }

    if(strcmp(acc_no, a.acc_num)!=0)
    {
        printf("\t\t\t\t\tAccount Number Doesn't Exist\n");
        fclose(fp);
    }
    printf("\n\n\t\t\t");
    system("\t\tpause");
    char choice='\0';
    printf("\n\n\n\t\t\t\t\t1.Home\t\t2.Exit");
    printf("\n\n\t\t\t\tEnter Your Choice:");
    choice=getche();
    switch(choice)
    {
    case '1':
        system("cls");
        home();
        break;
    case '2':
        exit(0);
        break;
    default:
        printf("\n\n\t\t\twrong input");
        getch();
        system("cls");
        break;
    }

}


void deposit_money()
{

    char dm[20];
    printf("\n\n===============$$$$$$$$$$$$$$$$$$$$$$$$$   DEPOSIT MONEY   $$$$$$$$$$$$$$$$$$$$$$$$$===============\n\n");
    printf("\nPLEASE ENTER YOUR ACCOUNT NUMBER:");
    scanf("%s", ac_num);
    FILE *wd;
    wd=fopen("Deposit&withdraw.txt", "a");
    struct statement_dw d;
    FILE *fp;
    fp=fopen("account.txt","r+");
    struct account_holder a;
    while(fread(&a,sizeof(a),1,fp))

    {
    if (strcmp(ac_num, a.acc_num)==0)
    {
        printf("\nEnter Today's Date:\n");
        scanf("%s", dm);
        printf("\nEnter The Amount You Would Like To Deposit:\n");
        scanf("%f", &balance);
        a.acc_balance=balance+a.acc_balance;
        printf("\nYOUR MAIN BALANCE IS: %f",a.acc_balance);
        fseek(fp,-sizeof(a),SEEK_CUR);
        fwrite(&a,sizeof(a),1,fp);
        strcpy(d.ac,ac_num);
        strcpy(d.date,dm);
        strcpy(d.status,"Deposit");
        d.balance=balance;
        fwrite(&d, sizeof(d),1,wd);

        fclose(wd);
        fclose(fp);

    }
    }

    if(strcmp(ac_num, a.acc_num)!=0)
    {
        printf("\nAccount Number Doesn't Exist\n");
        fclose(fp);
    }
    printf("\n\n\t\t\t");
    system("pause");
    char choice='\0';
    printf("\n\n\n\t\t\t\t1.Home\t\t2.Exit");
    printf("\n\n\t\t\tEnter Your Choice:");
    choice=getche();
    switch(choice)
    {
    case '1':
        system("cls");
        home();
        break;
    case '2':
        exit(0);
        break;
    default:
        printf("\n\n\t\t\twrong input");
        getch();
        system("cls");
        break;
    }
}


void withdraw_money()
{

    char da[20];
    printf("\n\n===============$$$$$$$$$$$$$$$$$$$$$$$$$   WITHDRAW MONEY   $$$$$$$$$$$$$$$$$$$$$$$$$===============\n\n");
    printf("\nEnter Today's Date:\n");
    scanf("%s", da);
    printf("\nPLEASE ENTER YOUR ACCOUNT NUMBER:");
    scanf("%s", ac_no);
    FILE *wd;
    wd=fopen("Deposit&withdraw.txt", "a");
    struct statement_dw d;
    FILE *fp;
    fp=fopen("account.txt","r+");
    struct account_holder a;

    while(fread(&a,sizeof(a),1,fp))

    {
    if (strcmp(ac_no, a.acc_num)==0)
    {
    printf("\nEnter The Amount You Would Like To Withdraw:\n");
    scanf("%f", &balance);
    if(a.acc_balance>=balance)
        {
            a.acc_balance=a.acc_balance-balance;
            printf("\nYOUR MAIN BALANCE IS: %f",a.acc_balance);
        }
    else if(balance>a.acc_balance)
        {
            printf("\nYou don't have sufficient balance\n");
            getch();
        }

        fseek(fp,-sizeof(a),SEEK_CUR);
        fwrite(&a,sizeof(a),1,fp);
        strcpy(d.ac,ac_no);
        strcpy(d.date,da);
        strcpy(d.status,"Withdraw");
        d.balance=balance;
        fwrite(&d, sizeof(d),1,wd);

        fclose(wd);
        fclose(fp);

    }
    }

    if(strcmp(ac_no, a.acc_num)!=0)
    {
        printf("\nAccount Number Doesn't Exist\n");
        fclose(fp);
    }
    printf("\n\n\t\t\t");
    system("pause");
    char choice='\0';
    printf("\n\n\n\t\t\t\t1.Home\t\t2.Exit");
    printf("\n\n\t\t\tEnter Your Choice:");
    choice=getche();
    switch(choice)
    {
    case '1':
        system("cls");
        home();
        break;
    case '2':
        exit(0);
        break;
    default:
        printf("\n\n\t\t\tWrong Input");
        getch();
        system("cls");
        break;
    }
}

void update_acc()
{
    char ac_num2[7];
    printf("\n\n===============$$$$$$$$$$$$$$$$$$$$$$$$$   UPDATE ACCOUNT   $$$$$$$$$$$$$$$$$$$$$$$$$===============\n\n");
    printf("\nPlease Enter Your A/C Number:");
    scanf("%s", ac_num2);
    FILE *fp;
    fp=fopen("account.txt","r+");
    struct account_holder a;
    phone_num1();
    while(fread(&a,sizeof(a),1,fp))

    {
    if(strcmp(ac_num2, a.acc_num)==0)
    {
        strcpy(a.phone_number,phone_no);
        printf("\n=====Your phone number has been updated successfully.=====\n\nYour new phone number is:%s", a.phone_number);
        fseek(fp,-sizeof(a),SEEK_CUR);
        fwrite(&a,sizeof(a),1,fp);
        fclose(fp);

    }
    }

    if(strcmp(ac_num2, a.acc_num)!=0)
    {
        printf("Account Number Doesn't Exist\n");
        fclose(fp);
    }
    printf("\n\n\t\t\t");
    system("pause");
    char choice='\0';
    printf("\n\n\n\t\t\t\t1.Home\t\t2.Exit");
    printf("\n\n\t\t\tEnter Your Choice:");
    choice=getche();
    switch(choice)
    {
    case '1':
        system("cls");
        home();
        break;
    case '2':
        exit(0);
        break;
    default:
        printf("\n\n\t\t\twrong input");
        getch();
        system("cls");
        break;
    }
}

void delete_acc()
{
    char ac_num1[7];
    printf("\n\n===============$$$$$$$$$$$$$$$$$$$$$$$$$   DELETE AN ACCOUNT   $$$$$$$$$$$$$$$$$$$$$$$$$===============\n\n");
    printf("PLEASE ENTER THE ACCOUNT NUMBER YOU WANT TO DELETE:");
    scanf("%s", ac_num1);
    FILE *fp;
    int i;
    fp=fopen("account.txt","r+");
    struct account_holder a;
    while(fread(&a,sizeof(a),1,fp))

    {
    if (strcmp(ac_num1, a.acc_num)==0)
    {
        for(i=0;i<50;i++)
        {
            a.name[i]='\0';
        }
        for(i=0;i<50;i++)
        {
            a.father_name[i]='\0';
        }
        for(i=0;i<50;i++)
        {
            a.mother_name[i]='\0';
        }
        for(i=0;i<50;i++)
        {
            a.phone_number[i]='\0';
        }
        for(i=0;i<20;i++)
        {
            a.gender[i]='\0';
        }
        for(i=0;i<20;i++)
        {
            a.age[i]='\0';
        }
        for(i=0;i<60;i++)
        {
            a.address[i]='\0';
        }
        for(i=0;i<20;i++)
        {
            a.nationality[i]='\0';
        }
        for(i=0;i<50;i++)
        {
            a.pin[i]='\0';
        }
        strcmp(a.acc_num,"  ");
        fseek(fp,-sizeof(a),SEEK_CUR);
        fwrite(&a,sizeof(a),1,fp);
        fclose(fp);

    }
    }

    if(strcmp(ac_num1, a.acc_num)!=0)
    {
        printf("Account Number Doesn't Exist\n");
        fclose(fp);
    }
    printf("\n\n\t\t\t");
    system("pause");
    char choice='\0';
    printf("\n\n\n\t\t\t\t1.Home\t\t2.Exit");
    printf("\n\n\t\t\tEnter Your Choice:");
    choice=getche();
    switch(choice)
    {
    case '1':
        system("cls");
        home();
        break;
    case '2':
        exit(0);
        break;
    default:
        printf("\n\n\t\t\twrong input");
        getch();
        system("cls");
        break;
    }

}


void transfer_money()
{
    system("cls");
    printf("\n\n===============$$$$$$$$$$$$$$$$$$$$$$$$$   TRANSFER MONEY   $$$$$$$$$$$$$$$$$$$$$$$$$===============\n\n");
    printf("\nEnter Today's Date:\n");
    scanf("%s", date);
    printf("\nEnter the sender A/C number:\n");
    scanf("%s", acc_num_send);
    FILE *fp;
    FILE *st;
    st=fopen("statement.txt", "a");
    struct statement s;
    fp=fopen("account.txt","r+");
    struct account_holder a;

    while(fread(&a,sizeof(a),1,fp))
    {

        if(strcmp(acc_num_send, a.acc_num)==0)
        {
            printf("\n\nEnter the money for transfer:\n");
            scanf("%f", &balance);
        if(a.acc_balance>=balance)
        {
            a.acc_balance=(a.acc_balance-balance);
        }
        else if(balance>a.acc_balance)
        {
            printf("You don't have sufficient balance\n");
            system("pause");
            system("cls");
            transfer_money();
        }

            fseek(fp,-sizeof(a),SEEK_CUR);
            fwrite(&a,sizeof(a),1,fp);
            strcpy(s.acc_n,acc_num_send);
            strcpy(s.date,date);
            strcpy(s.status,"Send");
            s.balance=balance;
            fwrite(&s, sizeof(s),1,st);

        fclose(st);
        fclose(fp);
        }
    }
        if(strcmp(acc_num_send, a.acc_num)!=0)
        {
        printf("A/C Number Doesn't Exist\n");
        fclose(fp);
        system("pause");
        system("cls");
        transfer_money();
        }
        transfer1();
        getch();





}


void transfer1()
{
    printf("\n\nEnter the receiver A/C number:\n");
    scanf("%s", acc_num_receive);
    FILE *st;
    st=fopen("statement.txt", "a");
    struct statement s;
    FILE *fp;
    fp=fopen("account.txt","r+");
    struct account_holder a;

    while(fread(&a,sizeof(a),1,fp))
    {

        if(strcmp(acc_num_receive, a.acc_num)==0)
        {
            a.acc_balance=(a.acc_balance+balance);
            printf("\n\n%2f taka has been send successfully.\n", balance);
            fseek(fp,-sizeof(a),SEEK_CUR);
            fwrite(&a,sizeof(a),1,fp);
            strcpy(s.acc_n,acc_num_receive);
            strcpy(s.date,date);
            strcpy(s.status,"Recive");
            s.balance=balance;
            fwrite(&s, sizeof(s),1,st);

            fclose(st);
            fclose(fp);
        }
    }
        if(strcmp(acc_num_receive, a.acc_num)!=0)
        {
        printf("A/C Number Doesn't Exist\n");
        fclose(fp);
        }
    printf("\n\n\t\t\t");
    system("pause");
    char choice='\0';
    printf("\n\n\n\t\t\t\t1.Home\t\t2.Exit");
    printf("\n\n\t\t\tEnter Your Choice:");
    choice=getche();
    switch(choice)
    {
    case '1':
        system("cls");
        home();
        break;
    case '2':
        exit(0);
        break;
    default:
        printf("\n\n\t\t\tWrong Input");
        getch();
        system("cls");
        break;
    }


}


void statement()

{
    system("cls");
    printf("\n\n===============$$$$$$$$$$$$$$$$$$$$$$$$$   STATEMENT VIEW   $$$$$$$$$$$$$$$$$$$$$$$$$===============\n\n");
    int choice;
    printf("\n\n1.Transferal Statement.\n\n2.Deposit & Withdrawal Statement.\n\n");
    printf("Enter Your Choice:");
    scanf("%d", &choice);

    switch(choice)
    {
    case 1:
        system("cls");
        statement1();
        break;
    case 2:
        system("cls");
        statement2();
        break;
    case 3:
        exit(0);
        break;;
    }
}

void statement1()
{
    char an[7];
    printf("\n\n===============$$$$$$$$$$$$$$$$$$$$$$$$$   TRANSFERAL STATEMENT   $$$$$$$$$$$$$$$$$$$$$$$$$===============\n\n");
    FILE *st;
    st=fopen("statement.txt", "r");
    struct statement s;
    printf("\nENTER YOUR ACCOUNT NUMBER:\n");
    scanf("%s", an);
    printf("DATE\t\t BALANCE\t\t STATUS\t\t SENDER A/C NO\tRECEIVER A/C NO\t\t\n\n");
    while(fread(&s, sizeof(s),1,st))
    {
        if (strcmp(s.acc_n,an)==0)
        {
                printf("%s\t\t %.2f\t\t %s\t\t %s\t\t %s\t\t\n", s.date, s.balance, s.status,  acc_num_send,  acc_num_receive);

        }
    }
    fclose(st);
    printf("\n\n\t\t\t");
    system("pause");
    char choice='\0';
    printf("\n\n\n\t\t\t\t1.Home\t\t2.Exit");
    printf("\n\n\t\t\tEnter Your Choice:");
    choice=getche();
    switch(choice)
    {
    case '1':
        system("cls");
        home();
        break;
    case '2':
        exit(0);
        break;
    default:
        printf("\n\n\t\t\twrong input");
        getch();
        system("cls");
        break;
    }
}

void statement2()

{
    char ac[7];
    printf("\n\n===============$$$$$$$$$$$$$$$$$$$$$$$$$   DEPOSIT & WITHDRAWAL STATEMENT   $$$$$$$$$$$$$$$$$$$$$$$$$===============\n\n");
    FILE *wd;
    wd=fopen("Deposit&withdraw.txt", "r");
    struct statement_dw d;
    printf("\nENTER YOUR ACCOUNT NUMBER:\n");
    scanf("%s", ac);
    printf("\nDATE          BALANCE          STATUS\n");
    while(fread(&d, sizeof(d),1,wd))
    {
        if (strcmp(d.ac,ac)==0)
        {
            printf("\n%s        %.2f        %s", d.date, d.balance, d.status);

        }
    }
    fclose(wd);
    printf("\n\n\t\t\t");
    system("pause");
    char choice='\0';
    printf("\n\n\n\t\t\t\t1.Home\t\t2.Exit");
    printf("\n\n\t\t\tEnter Your Choice:");
    choice=getche();
    switch(choice)
    {
    case '1':
        system("cls");
        home();
        break;
    case '2':
        exit(0);
        break;
    default:
        printf("\n\n\t\t\twrong input");
        getch();
        system("cls");
        break;
    }
}

