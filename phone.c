/***
Project Name: Digital Phonebook.
*** Group Member Name ***
Student Name: Bushra Hoque.
Student ID : 2022-1-60-154

Student Name: Farhana Ahmed Tasnim.
Student ID : 2022-1-60-156
***/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct person
{
    char name[30];
    char country_code[4];
    long long int mble_no;
    char mail[100];
};

// Defining person data type.
typedef struct person person;//globally defining structure

// All function declaration.
void start();
void remove_all();
void print_menu();
void add_person();
void list_record();
void search_person();
void remove_person();
void update_person();
void take_input(person *p);


// Program starts here.
int main()
{
    printf("\t\t\t\t\t\t\t\t\t\t\t   _\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t  | |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t  |_|\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t  /_\\    \\ | /\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t.-""""------.----.\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|           X   |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|               |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| ====ooo====== |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| ============= |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|               |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|_______________|\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| ________NOKIA |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t||             ||\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t||   Welcome   ||\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t||_____________||\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|__.---------.__|\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|---------------|\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|[Yes][(|)][ No]|\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| ___  ___  ___ |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|[<-'][CLR][.->]|\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| ___  ___  ___ |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|[_1_][_2_][_3_]|\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| ___  ___  ___ |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|[_4_][_5_][_6_]|\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| ___  ___  ___ |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|[_7_][_8_][_9_]|\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t| ___  ___  ___ |\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t|[_*_][_0_][_#_]|\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t`_______________'\n");
    printf("\t\t\t\t\t\t\t\t\t _____  _                      ____              _    \n");
    printf("\t\t\t\t\t\t\t\t\t|  __ \\| |                    |  _ \\            | |\n");
    printf("\t\t\t\t\t\t\t\t\t| |__) | |__   ___  _ __   ___| |_) | ___   ___ | | __\n");
    printf("\t\t\t\t\t\t\t\t\t|  ___/| '_ \\ / _ \\| '_ \\ / _ \\  _ < / _ \\ / _ \\| |/ /\n");
    printf("\t\t\t\t\t\t\t\t\t| |    | | | | (_) | | | |  __/ |_) | (_) | (_) |   < \n");
    printf("\t\t\t\t\t\t\t\t\t|_|    |_| |_|\\___/|_| |_|\\___|____/ \\___/ \\___/|_|\\_\\\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t\t\tPress enter to Continue -->");
    getc(stdin);
    start();
    return 0;
}

// This function will start our program.
void start()
{
    int choice;
    while(1)
    {
        print_menu();
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            list_record();
            getchar();
            getchar();//For clicking double enter
            break;
        case 2:
            add_person();
            getchar();
            getchar();
            break;
        case 3:
            search_person();
            getchar();
            getchar();
            break;
        case 4:
            remove_person();
            getchar();
            getchar();
            break;
        case 5:
            update_person();
            getchar();
            getchar();
            break;
        case 6:
            remove_all();
            getchar();
            getchar();
            break;
        default ://If want stop the program
            system("@cls||clear");
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tThank You For Using Our Digital Phonebook\n");
            printf("\n\t\t\t\t\t\t\t\t\t\t\t    Visit Again :)\n");
            getchar();
            getchar();
            exit(1);
        }
    }
}

// This will print main menu.
void print_menu()
{
    system("@cls||clear");//Screen clear 
    printf("\t\t\t\t\t\t\t\t\n");
    printf("\t\t\t\t\t\t\t\t                  Select Your Choice                             \n");
    printf("\t\t\t\t\t\t\t\t\n\n");
    printf("\t\t\t\t\t\t\t\t1) Contact List\n\n");
    printf("\t\t\t\t\t\t\t\t2) Create New Contact\n\n");
    printf("\t\t\t\t\t\t\t\t3) Search Contact Details\n\n");
    printf("\t\t\t\t\t\t\t\t4) Delete Contact\n\n");
    printf("\t\t\t\t\t\t\t\t5) Update Contact\n\n");
    printf("\t\t\t\t\t\t\t\t6) Delete All Contacts\n\n");
    printf("\t\t\t\t\t\t\t\t7) Exit(0)\n\n\n");

    printf("\t\t\t\t\t\t\t\tEnter your Choice : ");
}

// This function will add contact into phonebook.
void add_person()
{
    system("@cls||clear");
    FILE *fp;
    fp = fopen("phonebook_db.txt", "a+");//Sequecially add information
    if (fp == NULL)
    {
        printf("File Not Found\n");
        printf("Press any key to continue....\n");
        return;
    }
    else
    {
        person p;
        take_input(&p);
        fwrite(&p, sizeof(p), 1, fp);//Here 1 used for per Lines
        fflush(stdin);
        fclose(fp);
        system("clear");
        printf("Record added Successfully.\n");
        printf("Press any key to continue ....\n");
    }
}

// By this we take contact information.
void take_input(person *p)
{
    system("@cls||clear");
    getchar();
    printf("Enter Name : ");
    scanf("%[^\n]s",p->name);//Used some smart operator for adding string

    printf("Enter Country Code : ");
    scanf("%s",p->country_code);

    long long int mble_no;
    printf("Enter Mobile No : ");
    scanf("%lld",&p->mble_no);

    printf("Enter Email : ");
    scanf("%s",p->mail);
}

// This function will list contact available in phonebook.
void list_record()
{
    system("@cls||clear");
    FILE *fp;
    fp = fopen("phonebook_db.txt", "r");
    if (fp == NULL)
    {
        printf("File Not Found.\n");
        printf("Press any key to continue ...\n");
        return;
    }
    else
    {
        person p;
        printf("\n\t\t\t\t\t\t\t\t********************************************************************************\n");
        printf("\t\t\t\t\t\t\t\t*                  All Contact Listed in Phonebook                             *\n");
        printf("\t\t\t\t\t\t\t\t********************************************************************************\n\n\n");
        printf("  NAME\t\t\t\t   COUNTRY CODE\t\t    PHONE NO\t\t             EMAIL\n");
        printf("---------------------------------------------------------------------------------------------------------------------------------------------\n");
        // fseek(fp,-(sizeof(p)*2L),2);
        while (fread(&p, sizeof(p), 1, fp) == 1)// Will come binary , if it comes 0 , programm will terminate
        {
            int i;
            int len1 = 40 - strlen(p.name);//Used for space between lines
            int len2 = 19 - strlen(p.country_code);
            int len3 = 15;

            printf("%s",p.name);
            for(i=0; i<len1; i++) printf(" ");//For printing space

            printf("%s",p.country_code);
            for(i=0; i<len2; i++) printf(" ");

            printf("0%lld",p.mble_no);
            for(i=0; i<len3; i++) printf(" ");

            printf("%s",p.mail);
            printf("\n");
            fflush(stdin);
        }
        fflush(stdin);//Controling buffer into console
        fclose(fp);
        printf("\n\nPress any key to continue ...\n");
    }
}

// This function will search contact in phonebook.
void search_person()
{
    system("@cls||clear");
    long long int phone;
    int choice;
    printf("Enter Phone Number :");
    scanf("%lld",&phone);


    FILE *fp;
    fp = fopen("phonebook_db.txt", "r");
    if (fp == NULL)
    {
        printf("File Not Found.\n");
        printf("Press any key to continue ...\n");
        return;
    }
    else
    {
        int flag = 0;
        person p;
        while (fread(&p, sizeof(p), 1, fp) == 1)
        {
            if(p.mble_no == phone)
            {
                printf("  NAME\t\t\t\t   COUNTRY CODE\t\t    PHONE NO\t\t             EMAIL\n");
                printf("---------------------------------------------------------------------------------------------------------------------------------------------\n");
                int i;
                int len1 = 40 - strlen(p.name);
                int len2 = 19 - strlen(p.country_code);
                int len3 = 15;

                printf("%s",p.name);
                for(i=0; i<len1; i++) printf(" ");

                printf("%s",p.country_code);
                for(i=0; i<len2; i++) printf(" ");

                printf("0%lld",p.mble_no);
                for(i=0; i<len3; i++) printf(" ");

                printf("%s",p.mail);
                printf("\n");

                flag = 1;
                break;
            }
            else continue;
            // fflush(stdin);
        }
        if(flag == 0)//Information valid or invalid that will count like work true or false
        {
            system("@cls||clear");
            printf("Person is not in the Phonebook.\n");
        }
        fflush(stdin);
        fclose(fp);
        printf("\n\nPress any key to continue ....\n");
    }
}

// This function will remove contact from phonebook.
void remove_person()
{
    system("@cls||clear");
    long long int phone;
    printf("Enter phone number of the person you want to remove from phonebook : ");
    scanf("%lld",&phone);

    FILE *fp,*temp;// Used for Empty data
    fp = fopen("phonebook_db.txt", "r");
    temp = fopen("temp","w+");
    if (fp == NULL)
    {
        printf("FIle Not Found\n");
        printf("Press any key to continue....\n");
        return;
    }
    else
    {
        person p;
        int flag = 0;
        while (fread(&p, sizeof(p), 1, fp) == 1)
        {
            if(p.mble_no == phone)
            {
                system("@cls||clear");
                printf("Person removed successfully..!\n");
                flag = 1;
            }
            else fwrite(&p,sizeof(p),1,temp);
            fflush(stdin);
        }
        if(flag == 0)
        {
            system("@cls||clear");
            printf("No record found for %d number.\n",phone);
        }
        fclose(fp);
        fclose(temp);
        remove("phonebook_db.txt");
        rename("temp","phonebook_db.txt");
        fflush(stdin);
        printf("Press any key to continue....\n");
    }
}

// This function will update contact information.
void update_person()
{
    system("@cls||clear");
    long long int phone;
    printf("Enter Phone number of the person you want to update details : ");
    scanf("%lld",&phone);

    FILE *fp,*temp;
    fp = fopen("phonebook_db.txt", "r");
    temp = fopen("temp","w+");
    if (fp == NULL)
    {
        printf("FIle Not Found.\n");
        printf("Press any key to continue ...\n");
        return;
    }
    else
    {
        int flag = 0;
        person p;
        while (fread(&p, sizeof(p), 1, fp) == 1)
        {
            if(p.mble_no == phone)
            {
                take_input(&p);
                fwrite(&p, sizeof(p), 1, temp);
                system("@cls||clear");
                printf("Data updated successfully..!\n");
                flag = 1;
            }
            else fwrite(&p,sizeof(p),1,temp);
            fflush(stdin);
        }
        if(flag == 0)
        {
            system("@cls||clear");
            printf("No record found for %d number.\n",phone);
        }
        fclose(fp);

        fclose(temp);
        remove("phonebook_db.txt");//Old data was deleted
        rename("temp","phonebook_db.txt");//Updated  will be added into temp file
        fflush(stdin);
        printf("Press any key to continue....\n");
    }
}

// This function will clear all the data of phonebook.
void remove_all()
{
    char choice;
    system("@cls||clear");
    remove("./phonebook_db.txt");
    printf("All data in the phonebook deleted successfully.\n");
    printf("Press any key to continue ... \n");
}

