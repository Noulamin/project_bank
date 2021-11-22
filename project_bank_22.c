#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void loging();
void check_entered_for_login();
void check_entered_for_menu();
void menu();
void create_account();
void check_entered_for_create();


    char first[20];
    char last[20];
    char cin[20];
    char amount[20];

bool is_login_in = false;
char _cin[12];
char password[15];
char something[30];

bool while_1 = true;
int choised = 1;
char text_entered[30];
int main(){
    printf("\e[1;1H\e[2J");
    if (is_login_in == false)
    {
        strcpy(text_entered,"");
        strcpy(_cin, "");
        strcpy(password, "");
        loging();
    }
    else
    {
        
    }
}

void loging(){
    
   // while (while_1)
   // { 
        
        char login_temp[30];
        char password_temp[30];
        printf("\n");
        printf("                 bank  name \n");
        printf(" ________________ login in ________________ \n");
        printf("\n");
        
            if (choised == 1)
            { 
                strcpy(login_temp,text_entered);
                strcpy(_cin,text_entered);
                
            }else{
                if (!strcmp(login_temp,"________"))
                {
                    strcpy(_cin,login_temp);
                }
                
            }
            if (choised == 2)
            {
                strcpy(password_temp,text_entered);
                strcpy(password,text_entered);
            }else
            {
                if (!strcmp(password_temp,"________"))
                {
                    strcpy(password,password_temp);
                }
            }

        printf("1. enter CIN      : %s \n",_cin);
        printf("2. enter password : %s \n",password);
        printf("\n");
        printf("3.               =  login  =\n");
       
        printf("\n");
       // printf("4. dont have an account ? \n");
        printf("4. exit \n");

        
        printf(" __________________________________________ \n");
        printf("\n");
        printf("%d /: ",choised);
        scanf("%s",&something);
        check_entered_for_login();
   // }
}

void check_entered_for_login(){
    if(!strcmp(something,"1")){
        if (strcmp(text_entered,""))
        {
           strcpy(text_entered,"");
        }

        choised = 1;
        printf("\e[1;1H\e[2J");
        loging();
    }
    if(!strcmp(something,"2")){
        if (strcmp(text_entered,""))
        {
           strcpy(text_entered,"");
        }
        
        choised = 2;
        printf("\e[1;1H\e[2J");
        loging();
    }
    if(!strcmp(something,"3")){
        printf("\e[1;1H\e[2J");
        menu();
    }
    if(!strcmp(something,"4")){
        printf("\e[1;1H\e[2J");
        system("exit");
    }
    else{
        strcpy(text_entered,something);
        printf("\e[1;1H\e[2J");
        loging();
    }
}

void menu(){
    
    printf("\n");
    printf("               bank  name \n");
    printf(" ________________ menu ________________ \n");
    printf("\n");
    printf("1. create bank account.\n");
    printf("2. create multiple bank accounts.\n");
    printf("3. withdrawal.\n");
    printf("4. Deposit.\n");
    printf("5. show accounts infos.\n");
    printf("6. search on accounts.\n");
    printf("7. exit.\n");
    printf(" __________________________________________ \n");
    printf("\n");
    printf("%d /: ",choised);
    scanf("%s",&something);
    //check_entered_for_menu();
    if(!strcmp(something,"1")){
        choised = 1;
        printf("\e[1;1H\e[2J");
        strcpy(text_entered,"");
        create_account();
    }
    if(!strcmp(something,"2")){
        choised = 2;
        printf("\e[1;1H\e[2J");
        menu();
    }
    if(!strcmp(something,"3")){
        printf("\e[1;1H\e[2J");
        menu();
    }
}

/*void check_entered_for_menu()
{
    if(!strcmp(something,"1")){
        choised = 1;
        printf("\e[1;1H\e[2J");
        create_account();
    }
    if(!strcmp(something,"2")){
        choised = 2;
        printf("\e[1;1H\e[2J");
        menu();
    }
    if(!strcmp(something,"3")){
        printf("\e[1;1H\e[2J");
        menu();
    }
    else{
        strcpy(text_entered,something);
        printf("\e[1;1H\e[2J");
        loging();
    }
}*/

void create_account(){
    printf("\n");
    printf("               bank  name \n");
    printf(" ________________ create account ________________ \n");
    printf("\n");

    char first_temp[20];
    char last_temp[20];
    char cin_temp_[20];
    char amount_temp[20];
    
    /*switch (choised)
    {
    case 1:
        strcpy(first_temp,text_entered);
        strcpy(first,text_entered);
        break;
    case 2:
        strcpy(last_temp,text_entered);
        strcpy(last,text_entered);
        break;
    case 3:
        strcpy(cin_temp_,text_entered);
        strcpy(cin,text_entered);
        break;
    case 4:
        strcpy(amount_temp,text_entered);
        strcpy(amount,text_entered);
        break;
    
    default:
        break;
    }*/
            if (choised == 1)
            { 
                strcpy(first_temp,text_entered);
                strcpy(first,text_entered);
                
            }else{
                if (!strcmp(first_temp,"________"))
                {
                    strcpy(first,first_temp);
                }
                
            }
            if (choised == 2)
            {
                strcpy(last_temp,text_entered);
                strcpy(last,text_entered);
            }else
            {
                if (!strcmp(last_temp,"________"))
                {
                    strcpy(last,last_temp);
                }
            }
            if (choised == 3)
            {
                strcpy(cin_temp_,text_entered);
                strcpy(cin,text_entered);
            }else
            {
                if (!strcmp(cin_temp_,"________"))
                {
                    strcpy(cin,cin_temp_);
                }
            }
            if (choised == 4)
            {
                strcpy(amount_temp,text_entered);
                strcpy(amount,text_entered);
            }else
            {
                if (!strcmp(amount_temp,"________"))
                {
                    strcpy(amount,amount_temp);
                }
            }

    printf("1. enter first name : %s \n",first);
    printf("2. enter last name : %s \n",last);
    printf("3. enter cin : %s \n",cin);
    printf("4. enter amount : %s \n \n",amount);
    printf("5. create account. \n");

    printf(" ________________________________________________ \n");
    printf("\n");
    printf("%d /: ",choised);
    scanf("%s",&something);
    check_entered_for_create();
}

void check_entered_for_create()
{
    /*for (int i = 1; i <= 4; i++)
    {
        if(!strcmp(something,i))
        {
            if (strcmp(text_entered,""))
            {
                strcpy(text_entered,"");
            }

                choised = i;
                printf("\e[1;1H\e[2J");
                create_account();
                break;
        }
        else
        {
                strcpy(text_entered,something);
                printf("\e[1;1H\e[2J");
                create_account();
                break;
        }
    }*/
    
    
    if(!strcmp(something,"1")){
        if (strcmp(text_entered,""))
        {
           strcpy(text_entered,"");
        }

        choised = 1;
        printf("\e[1;1H\e[2J");
        create_account();
    }
    if(!strcmp(something,"2")){
        if (strcmp(text_entered,""))
        {
           strcpy(text_entered,"");
        }
        
        choised = 2;
        printf("\e[1;1H\e[2J");
        create_account();
    }
    if(!strcmp(something,"3")){
        if (strcmp(text_entered,""))
        {
           strcpy(text_entered,"");
        }

        choised = 3;
        printf("\e[1;1H\e[2J");
        create_account();
    }
    if(!strcmp(something,"4")){
        if (strcmp(text_entered,""))
        {
           strcpy(text_entered,"");
        }

        choised = 4;
        printf("\e[1;1H\e[2J");
        create_account();
    }
    else{
        strcpy(text_entered,something);
        printf("\e[1;1H\e[2J");
        create_account();
    }
    
}