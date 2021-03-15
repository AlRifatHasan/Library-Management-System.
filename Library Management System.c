#include<windows.h>
#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>



FILE *fp,*ft,*fs;


COORD coord = {0, 0};
//list of global variable
int s;
char findbook;
char password[10]={"code"};


void gotoxy (int x, int y)
{
coord.X = x; coord.Y = y; // X and Y coordinates
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}



//void Registration();
void Welcome()

{
    system("color A");
    system("cls");
    printf("\n\t\t\t\t\t **        **        **    ******        ");
    printf("\n\t\t\t\t\t **        * *    *  **   **   **        ");
    printf("\n\t\t\t\t\t **        ** *  * * **   *              ");
    printf("\n\t\t\t\t\t **        ** *  * * **   *******        ");
    printf("\n\t\t\t\t\t **        **   **   **         *        ");
    printf("\n\t\t\t\t\t *******   **        **   **   **        ");
    printf("\n\t\t\t\t\t *******   **        **   ******         ");
    printf("\nPress any key....");
    getch();
}

void  Registration()
{
    char First_Name[80];
    char Last_Name[55];
    char User_Name[56];
    char Password[45];
    FILE *fptr;
    fptr = fopen("emp.txt", "w+");
    if (fptr == NULL){
        printf("File does not exists \n");
        return;
    }
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB4\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB4\xB2\xB2\xB2\xB2\xB2\xB4\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB4\xB2\xB2\xB2\xB2\xB2\xB4\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB4\xB2\xB2\xB2\xB2\xB2\n");
    printf("\t\t\t\t\t\xDB1\xDB\xDB\xDB\xB2 Enter the First_Name: ");
    scanf("%s", & First_Name);
    fprintf(fptr, "First_Name=\t\t\t\t\t  %s\n", First_Name);
    printf("\t\t\t\t\t\xDB1\xDB\xDB\xDB\xB2 Enter the Last_Name : ");
    scanf("%s",&Last_Name);
    fprintf(fptr, "Last_Name=\t\t\t\t\t  %s\n",Last_Name);
    printf("\t\t\t\t\t\xDB1\xDB\xDB\xDB\xB2 Enter the User_Name: ");
    scanf("%s", &User_Name);
    fprintf(fptr, "User_Name=\t\t\t\t\t  %s\n", User_Name);
    printf("\t\t\t\t\t\xDB1\xDB\xDB\xDB\xB2  Enter the Password :");
    scanf("%s", & Password);
    fprintf(fptr, "Password=\t\t\t\t\t  %s\n", Password);
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB4\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB4\xB2\xB2\xB2\xB2\xB2\xB4\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB4\xB2\xB2\xB2\xB2\xB2\xB4\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB4\xB2\xB2\xB2\xB2\xB2\n");
    fclose(fptr);

   printf("Succeffully registration........");


}

int User_Profile()
{
    system("cls");
    int choice;
   printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB4\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB4\xB2\xB2\xB2\xB2\xB2\xB4\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\t\t\t\t\t\xDB1\xDB\xDB\xDB\xB2  1. Registration     \xDB\xDB\xDB\xB1\n");
    printf("\t\t\t\t\t\xDB1\xDB\xDB\xDB\xB2  2. Login            \xDB\xDB\xDB\xB1\n");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB4\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB4\xB2\xB2\xB2\xB2\xB2\xB4\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
          Registration ();
         break;
    case 2:
           Login();
         break;
    default:
        printf("Invalide your entry....");
    }

    FILE *fp;
    char buff[255];
    fp = fopen("student.txt", "r");
    while(fscanf(fp, "%s\n", buff)!=EOF){
        printf("%s \n", buff);
    }

    fclose(fp);
    printf("\nPress any key....");
    getch();
    Login();
}

void Login(){
   system("cls");
   Welcome();
    char User_Name[56];
    char Password[45];
    int i;
    FILE *fptr;
    fptr = fopen("emp.txt", "w+");
    if (fptr == NULL){
        printf("File does not exists \n");
        return;
    }
    printf("\n\n\tEnter the User_Name: ");
    scanf("%s", &User_Name);
    fprintf(fptr, "User_Name= %s\n", User_Name);
    printf("\n\n\tEnter the Password: ");
    scanf("%s", & Password);

    if(!strcmp(User_Name,"Alrifat") && !strcmp(Password,"1234")){
        printf("\n\nLogged In Successful\n");

    }
    else{
        printf("\n\nIncorrect User_Name or Password\n\n");
    }
    fprintf(fptr, "Password= %s\n", Password);
    fclose(fptr);
    admin_menu();
}



int B_avail(int rno);
char ans;
struct book{
    int Id_no;
   // float
    char Book_Name[30], Author[30],Quantity[30],Price[30],Rack_No[30];
} b;
void B_insert(){
    system("cls");
    FILE *fp;
    fp = fopen("B_record", "a");
    gotoxy(30,14);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  ADD BOOK \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(30, 15);
    printf("\xB2");printf("Enter the Book Id no: ");
    scanf("%d", &b.Id_no);gotoxy(72,15);printf("\xB2");
    gotoxy(30, 16);
    printf("\xB2");printf("Enter the Book Name: ");
    getchar();
    scanf("%[^\n]", b.Book_Name);gotoxy(72,16);printf("\xB2");
    gotoxy(30, 17);
    printf("\xB2");printf("Enter the Author Name : ");
    scanf("%s", &b.Author);gotoxy(72,17);printf("\xB2");
    gotoxy(30, 18);
    printf("\xB2");printf("Enter the Quantity : ");
    scanf("%s", &b.Quantity);gotoxy(72,18);printf("\xB2");
    gotoxy(30, 19);
    printf("\xB2");printf("Enter the Price :");
    scanf("%s", &b.Price);gotoxy(72,19);printf("\xB2");
    gotoxy(30, 20);
    printf("\xB2");printf("Enter the Rack No :");
    scanf("%s", &b.Rack_No);gotoxy(72,20);printf("\xB2");
    gotoxy(30, 21);
     printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    fwrite(&b, sizeof(b), 1, fp);
    fclose(fp);

    printf("\n\t\t\t.... Information Record Successful ...");
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c", &ans);
    if (ans == 'Y'){
        B_insert();
    }
    else if (ans == 'N'){
        printf("\n\t\t Thank you :) :)\n");
        Manage_Book();
    }
    else{
        printf("\n\t\tInvalid Input\n");
    }
}
void B_display(){
    system("cls");
    FILE *fpa;
    fpa = fopen("B_record", "r");
    gotoxy(2,1);
    printf("*********************************Book List*****************************");
    gotoxy(2,2);
    printf("\n\nId Number\t\tBook Name\t\tAuthor\t\tQuantity\tPrice\t\t\tRack_No");
    while (fread(&b, sizeof(b), 1, fpa))

    printf("\n   %d\t\t\t   %s\t\t\t  %s\t\t   %s\t\t %s\t\t\t   %s\t\t\n",  b.Id_no,  b.Book_Name,  b.Author,  b.Quantity,  b.Price,  b.Rack_No);

    fclose(fpa);
    getch();
    Manage_Book();
}
void B_search(){
    system("cls");
    FILE *fpb;
    int r, s, avl;
    gotoxy(30, 15);
    printf("Enter the Id no you want to B_search  :");
    scanf("%d", &r);
    avl = B_avail(r);
    if (avl == 0)
        printf("Id No %d is not available in the file\n", r);
    else{
        fpb = fopen("B_record", "r");
        //gotoxy(36, 17);
   printf("\n\nId Number\t\tBook Name\t\tAuthor\t\tQuantity\tPrice\t\t\tRack_No");
        //gotoxy(30, 18);
        while (fread(&b, sizeof(b), 1, fpb)){
            s = b.Id_no;
            if (s == r){
           printf("\n   %d\t\t\t   %s\t\t\t  %s\t\t   %s\t\t %s\t\t\t   %s\t\t\n",  b.Id_no,  b.Book_Name,  b.Author,  b.Quantity,  b.Price,  b.Rack_No);

            }
        }
        fclose(fpb);
    }
    getch();
    Manage_Book();
}
void B_delete(){
    system("cls");
    FILE *fpc;
    FILE *fpt;
    int r, s;
    gotoxy(20, 10);
    printf("Enter the Id no you want to B_delete :");
    scanf("%d", &r);
    if (B_avail(r) == 0)
        printf("Id no %d is not available in the file\n", r);
    else{
        fpc = fopen("B_record", "r");
        fpt = fopen("B_temp", "w");
        while (fread(&b, sizeof(b), 1, fpc)){
            s = b.Id_no;
            if (s != r)
                fwrite(&b, sizeof(b), 1, fpt);
        }
        fclose(fpc);
        fclose(fpt);
        fpc = fopen("B_record", "w");
        fpt = fopen("B_temp", "r");
        while (fread(&b, sizeof(b), 1, fpt))
            fwrite(&b, sizeof(b), 1, fpc);
        gotoxy(30, 16);
        printf("B_record DELETED\n");
        fclose(fpc);
        fclose(fpt);

        printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c", &ans);
    if (ans == 'Y'){
        B_delete();
    }
    else if (ans == 'N'){
        printf("\n\t\t Thank you :) :)\n");
        getch();
        Manage_Book();
    }

}
}
void B_update(){
    system("cls");
    int avl;
    FILE *fpt;
    FILE *fpc;
    int s, r, ch;
    gotoxy(30,15);
     printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

    gotoxy(30,16);
     printf("\xB2");printf("Enter Id number to B_update:");
    scanf("%d", &r);gotoxy(72,16);printf("\xB2");
    gotoxy(30,17);
     printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    avl = B_avail(r);
    if (avl == 0){
        gotoxy(30, 15);
        printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        gotoxy(30,16);
        printf("\xB2");printf("Id number %d is not Available in the file", r);gotoxy(72,16);printf("\xB2");
        gotoxy(30,17);
         printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    }
    else{
        fpc = fopen("B_record", "r");
        fpt = fopen("B_temp", "w");
        while (fread(&b, sizeof(b), 1, fpc)){
            s = b.Id_no;
            if (s != r)
                fwrite(&b, sizeof(b), 1, fpt);
            else{
                gotoxy(30, 17);
                 printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
                 gotoxy(30, 18);
                printf("\xB2");printf("1. B_update Book Name of Id Number %d", r);gotoxy(72,17);printf("\xB2");
                gotoxy(30, 19);
                printf("\xB2");printf("2. B_update Price of Id Number %d", r);gotoxy(72,18);printf("\xB2");
                gotoxy(30, 20);
                printf("\xB2");printf("3. B_update Quantity of Id Number %d", r);gotoxy(72,19);printf("\xB2");
                gotoxy(30, 21);
                printf("\xB2");printf("4. B_update Rack_No of Id Number %d", r);gotoxy(72,20);printf("\xB2");
                gotoxy(30, 22);
                printf("\xB2");printf("5. B_update all of Id Number %d", r);gotoxy(72,21);printf("\xB2");
                gotoxy(30, 23);
                printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"); gotoxy(72,22);printf("\xB2");
                printf("\n\nEnter your choice: ");
                scanf("%d", &ch);
                switch (ch){
                case 1:
                    gotoxy(30, 24);
                     printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"); gotoxy(72,23);printf("\xB2");
                    gotoxy(30,25);
                    printf("\xB2");printf("Enter Book Name:");
                    getchar();
                    scanf("%[^\n]", b.Book_Name);gotoxy(72,24);printf("\xB2");
                    gotoxy(30, 26);
                      printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"); gotoxy(72,25);printf("\xB2");
                    break;
                case 2:
                    gotoxy(30, 24);
                     printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
                    gotoxy(30, 25);
                    printf("\xB2");printf("Enter Price : ");
                    scanf("%s", &b.Price); gotoxy(72,15);printf("\xB2");
                    gotoxy(30, 26);
                      printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
                    break;
                case 3:
                    gotoxy(30, 24);
                     printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
                    gotoxy(30, 25);
                    printf("\xB2");printf("Enter Quantity : ");
                    scanf("%s", &b.Quantity);gotoxy(72,15);printf("\xB2");
                    gotoxy(30, 26);
                      printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
                    break;
                case 4:
                    gotoxy(30, 24);
                      printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
                     gotoxy(30, 25);
                    printf("\xB2");printf("Enter Rack_No : ");
                    scanf("%s", &b.Rack_No);gotoxy(72,15);printf("\xB2");
                    gotoxy(30, 26);
                      printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
                    break;
                case 5:
                    gotoxy(30, 24);
                    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
                    gotoxy(30, 25);
                    printf("\xB2");printf("Enter Name: ");
                    getchar();
                    scanf("%[^\n]", b.Book_Name);gotoxy(72,15);printf("\xB2");
                    gotoxy(30, 26);
                    printf("\xB2");printf("Enter Price: ");
                    scanf("%s", &b.Price);gotoxy(72,16);printf("\xB2");
                    gotoxy(30, 27);
                    printf("\xB2");printf("Enter Quantity: ");
                    scanf("%s", &b.Quantity);gotoxy(72,17);printf("\xB2");
                    gotoxy(30, 28);
                    printf("\xB2");printf("Enter Rack_No: ");
                    scanf("%s", &b.Rack_No);gotoxy(72,18);printf("\xB2");
                    gotoxy(30, 29);
                    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
                    break;
                default:
                    gotoxy(30, 24);
                    printf("Invalid Selection");
                    break;
                }
                fwrite(&b, sizeof(b), 1, fpt);
            }
        }
        fclose(fpc);
        fclose(fpt);
        fpc = fopen("B_record", "w");
        fpt = fopen("B_temp", "r");
        while (fread(&b, sizeof(b), 1, fpt)){
            fwrite(&b, sizeof(b), 1, fpc);
        }
        fclose(fpc);
        fclose(fpt);
    }
    gotoxy(30, 30);
    printf("B_record updated");
    getch();
    Manage_Book();
}

int B_avail(int rno){
    FILE *fpn;
    int c = 0;
    fpn = fopen("B_record", "r");
    while (!feof(fpn)){
        fread(&b, sizeof(b), 1, fpn);
        if (rno == b.Id_no){
            fclose(fpn);
            return 1;
        }
    }
    fclose(fpn);
    return 0;
}

 void Manage_Book()
{
    system("color E");
     system("cls");
int choice,emp;
printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2SELECT CATEGOIES\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
printf("\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 1. Add_Book                 \xDB\xDB\xDB\xDB\xB2\n");
printf("\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 2. View_All_Books           \xDB\xDB\xDB\xDB\xB2\n");
printf("\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 3. Search_Books             \xDB\xDB\xDB\xDB\xB2\n");
printf("\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 4. Delete_Books             \xDB\xDB\xDB\xDB\xB2\n");
printf("\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 5. Edit_Books               \xDB\xDB\xDB\xDB\xB2\n");
printf("\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 6. Exit                     \xDB\xDB\xDB\xDB\xB2\n");
printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB4\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB4\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB4\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:B_insert();break;
        case 2:B_display();break;
        case 3:B_search();break;
        case 4:B_delete();break;
        case 5:B_update();break;
        case 6:admin_menu();break;
        default:
        gotoxy(30, 26);
        printf("\n %30sInvalid entry Please enter right option :)");
    }
}

 void Book_Issue_and_Return()
{
    system("color E");
     system("cls");
int choice,emp;
printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2SELECT CATEGOIES\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
printf("\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 1. Add_Issue_Book           \xDB\xDB\xDB\xDB\xB2\n");
printf("\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 2. View_Issued_Books        \xDB\xDB\xDB\xDB\xB2\n");
printf("\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 3. Search_Issued_Books      \xDB\xDB\xDB\xDB\xB2\n");
printf("\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 4. Delete_Issued_Books      \xDB\xDB\xDB\xDB\xB2\n");
printf("\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 5. Exit                     \xDB\xDB\xDB\xDB\xB2\n");
printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB4\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB4\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB4\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:I_insert();break;
        case 2:I_display();break;
        case 3:I_search();break;
        case 4:I_delete();break;
        case 5:admin_menu();break;
        default:
        gotoxy(30, 26);
        printf("\n %30sInvalid entry Please enter right option :)");
    }
}
int I_avail(int rno);
char ans;
struct issue{
    int Id_no,dd,mm,yy,Issue_Date,Return_Date;
    char Student_Name[30];
} k;
void I_insert(){
    system("cls");
    FILE *fpa;
    fpa = fopen("S_record", "a");
    gotoxy(30,14);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  Add Issue Book \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(30, 15);
    printf("\xB2");printf("Enter the Id no: ");
    scanf("%d", &k.Id_no);gotoxy(72,15);printf("\xB2");
    gotoxy(30, 16);
    printf("\xB2");printf("Enter the Student_Name: ");
    getchar();
    scanf("%[^\n]", &k.Student_Name);gotoxy(72,16);printf("\xB2");
    gotoxy(30, 17);
    printf("\xB2");printf("Enter the Issue_Date  : ");
    scanf("%d-%d-%d", &k.dd,&k.mm,&k.yy);gotoxy(72,17);printf("\xB2");
    gotoxy(30, 18);
    printf("\xB2");printf("Enter the Return_Date : ");
    scanf("%d-%d-%d", &k.dd,&k.mm,&k.yy);gotoxy(72,18);printf("\xB2");
    gotoxy(30, 19);
     printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    fwrite(&k, sizeof(k), 1, fpa);
    fclose(fpa);

    printf("\n\t\t\t.... Information Record Successful ...");
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c", &ans);
    if (ans == 'Y'){
        I_insert();
    }
    else if (ans == 'N'){
        printf("\n\t\t Thank you \n");
        Book_Issue_and_Return();
    }
    else{
        printf("\n\t\tInvalid Input\n");
    }
}
void I_display(){
    system("cls");
    FILE *fpf;
    fpf = fopen("I_record", "r");
    gotoxy(2,1);
    printf("********************************* View Issue Book*****************************");
    gotoxy(2,2);
    printf("\n\n\nId Number\tStudent_Name\t\tIssue_Date\t\tReturn_Date");
    while (fread(&k, sizeof(k), 1, fpf))
        printf("\n %d\t\t %s\t\t  %d\t\t  %d\t\tn",  k.Id_no,  k.Student_Name,  k.dd,k.mm,k.yy,  k.Return_Date);
    fclose(fpf);
    getch();
Book_Issue_and_Return();
}
void I_search(){
    system("cls");
    FILE *fpe;
    int r, s, avl;
    gotoxy(30, 15);
    printf("Enter the Id no you want to I_search  :");
    scanf("%d", &r);
    avl = I_avail(r);
    if (avl == 0)
        printf("Id No %d is not available in the file\n", r);
    else{
        fpe = fopen("I_record", "r");
        //gotoxy(36, 17);
    printf("\n\n\nId Number\tStudent_Name\t\tIssue_Date\t\tReturn_Date");
        //gotoxy(30, 18);
        while (fread(&k, sizeof(k), 1, fpe)){
            s = k.Id_no;
            if (s == r){
        printf("\n %d\t\t %s\t\t  %d\t\t  %d\t\tn",  k.Id_no,  k.Student_Name,   k.dd,k.mm,k.yy,  k.Return_Date);
            }
        }
        fclose(fpe);
    }
    getch();
    Book_Issue_and_Return();
}
void I_delete(){
    system("cls");
    FILE *fpao;
    FILE *fpot;
    int r, s;
    gotoxy(20, 10);
    printf("Enter the Id no you want to I_delete :");
    scanf("%d", &r);
    if (I_avail(r) == 0)
        printf("Id no %d is not available in the file\n", r);
    else{
        fpao = fopen("I_record", "r");
        fpot = fopen("I_temp", "w");
        while (fread(&k, sizeof(k), 1, fpao)){
            s = k.Id_no;
            if (s != r)
                fwrite(&k, sizeof(k), 1, fpot);
        }
        fclose(fpao);
        fclose(fpot);
        fpao = fopen("I_record", "w");
        fpot = fopen("I_temp", "r");
        while (fread(&k, sizeof(k), 1, fpot))
            fwrite(&k, sizeof(k), 1, fpao);
        gotoxy(30, 16);
        printf("I_record DELETED\n");
        fclose(fpao);
        fclose(fpot);

        printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c", &ans);
    if (ans == 'Y'){
        I_delete();
    }
    else if (ans == 'N'){
        printf("\n\t\t Thank you \n");
        getch();
        Book_Issue_and_Return();
    }

}
}
int I_avail(int rno){
    FILE *fpq;
    int c = 0;
    fpq = fopen("I_record", "r");
    while (!feof(fpq)){
        fread(&k, sizeof(k), 1, fpq);
        if (rno == k.Id_no){
            fclose(fpq);
            return 1;
        }
    }
    fclose(fpq);
    return 0;
}
int main()

{

    system("color B");
    system("cls");
 int choice;
    printf("\n\t\t\t=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\n\t\t\t*         *                     WELCOME                            *         * ");
    printf("\n\t\t\t*--*  *---*                                                        *--*  *---* ");
    printf("\n\t\t\t*---*-----*                       TO                               *---*-----* ");
    printf("\n\t\t\t*---------*                                                        *---------* ");
    printf("\n\t\t\t*---------*             LIBRARY MANAGEMENT SYSTEM                  *---------* ");
    printf("\n\t\t\t*---------*                                                        *---------* ");
    printf("\n\t\t\t   *---*                       PROJECT IN C                           *---*    ");
    printf("\n\t\t\t     *                                                                  *      ");
    printf("\n\t\t\t=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\n Press key to Continue...\n");
    getch();

    printf("\t\t\t\t\t\xB1\xB2\xB2\xB2\xB2\xB2\xB4\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB4\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB4\xB2\xB2\xB2\xB2\xB2\xB1\n");
    printf("\t\t\t\t\t\xB3\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  1. Admin  \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB3\n");
    printf("\t\t\t\t\t\xB3\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  2. User   \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB3\n");
    printf("\t\t\t\t\t\xB1\xB2\xB2\xB2\xB2\xB2\xB4\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB4\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB4\xB2\xB2\xB2\xB2\xB2\xB1\n");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        admin_menu();
         break;
          case 2:
        user_menu();
         break;
    default:
        printf("Invalide your entry....\n\n");
    }
}
void user_menu()
{
    system("cls");
    User_Profile();

}
void admin_menu()
{
    system("cls");
    int choice;
    system("color A");
  {

    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB4\xB2\xB2\xB2\xB2\xB2 MAIN MENU \xB4\xB2\xB2\xB2\xB2\xB2\xB2\xB4\xB2\xB2\xB2\xB2\xB2\n");
    printf("\t\t\t\t\t\xDB\xDB\xB2    1. User_Profile            \xDB2\xDB\xDB\n");
    printf("\t\t\t\t\t\xDB2\xDB\xB2    2. Manage Book             \xDB2\xDB\xB2\n");
    printf("\t\t\t\t\t\xDB2\xDB\xB2    3. Book Issue and Return   \xDB2\xDB\xB2\n");
    printf("\t\t\t\t\t\xDB2\xDB\xB2    4. Manage Student          \xDB2\xDB\xB2\n");
    printf("\t\t\t\t\t\xDB2\xDB\xB2    5. Payment                 \xDB2\xDB\xB2\n");
    printf("\t\t\t\t\t\xDB\xDB\xB2    6. Exit                    \xDB2\xDB\xDB\n");
    printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB4\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB4\xB2\xB2\xB2\xB2\xB2\xB2\xB4\xB2\xB2\xB2\xB2\xB2\xB2\xB4\xB2\xB2\xB2\xB2\xB2\n");
    printf("\nEnter your choice:");
    scanf("%d", &choice);
  }
    switch(choice)
    {   case 1:
        User_Profile();
        break;
    case 2:
        Manage_Book();
        break;
    case 3:
        Book_Issue_and_Return();
        break;

    case 4:
        Manage_Student();
        break;
    case 5:
         Payment();
        break;
    case 6:
        printf("Exit\n");
        break;
    default:
        printf("Wrong Input");
    }
}


int S_avail(int rno);
char ans;
struct student{
    int Id_no;
    char Name[30], intake[30],section[30],department[30];
} std;
void S_insert(){
    system("cls");
    FILE *fp;
    fp = fopen("S_record", "a");
    gotoxy(30,14);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  Add Students \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    gotoxy(30, 15);
    printf("\xB2");printf("Enter the Id no: ");
    scanf("%d", &std.Id_no);gotoxy(72,15);printf("\xB2");
    gotoxy(30, 16);
    printf("\xB2");printf("Enter the Name: ");
    getchar();
    scanf("%[^\n]", std.Name);gotoxy(72,16);printf("\xB2");
    gotoxy(30, 17);
    printf("\xB2");printf("Enter the Section  : ");
    scanf("%s", &std.section);gotoxy(72,17);printf("\xB2");
    gotoxy(30, 18);
    printf("\xB2");printf("Enter the Intake : ");
    scanf("%s", &std.intake);gotoxy(72,18);printf("\xB2");
    gotoxy(30, 19);
    printf("\xB2");printf("Enter the Department :");
    scanf("%s", &std.department);gotoxy(72,19);printf("\xB2");
    gotoxy(30, 20);
     printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    fwrite(&std, sizeof(std), 1, fp);
    fclose(fp);

    printf("\n\t\t\t.... Information Record Successful ...");
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c", &ans);
    if (ans == 'Y'){
        S_insert();
    }
    else if (ans == 'N'){
        printf("\n\t\t Thank you :) :)\n");
        Manage_Student();
    }
    else{
        printf("\n\t\tInvalid Input\n");
    }
}
void S_display(){
    system("cls");
    FILE *fp1;
    fp1 = fopen("S_record", "r");
    gotoxy(2,1);
    printf("*********************************Students List*****************************");
    gotoxy(2,2);
    printf("\n\n\nId Number\tName\t\tSection\t\tIntake\t\tDepartment");
    while (fread(&std, sizeof(std), 1, fp1))
        printf("\n%d\t\t%s\t\t %s\t\t %s\t\t %s\n",  std.Id_no,  std.Name,  std.section,  std.intake,  std.department);
    fclose(fp1);
    getch();
    Manage_Student();
}
void S_search(){
    system("cls");
    FILE *fp2;
    int r, s, avl;
    gotoxy(30, 15);
    printf("Enter the Id no you want to S_search  :");
    scanf("%d", &r);
    avl = S_avail(r);
    if (avl == 0)
        printf("Id No %d is not available in the file\n", r);
    else{
        fp2 = fopen("S_record", "r");
        //gotoxy(36, 17);
    printf("\n\n\nId Number\tName\t\tSection\t\tIntake\t\tDepartment");
        //gotoxy(30, 18);
        while (fread(&std, sizeof(std), 1, fp2)){
            s = std.Id_no;
            if (s == r){
        printf("\n%d\t\t%s\t\t%s\t\t%s\t\t%s\n", std.Id_no, std.Name, std.section, std.intake, std.department);
            }
        }
        fclose(fp2);
    }
    getch();
    Manage_Student();
}
void S_delete(){
    system("cls");
    FILE *fpo;
    FILE *fpt;
    int r, s;
    gotoxy(20, 10);
    printf("Enter the Id no you want to S_delete :");
    scanf("%d", &r);
    if (S_avail(r) == 0)
        printf("Id no %d is not available in the file\n", r);
    else{
        fpo = fopen("S_record", "r");
        fpt = fopen("S_temp", "w");
        while (fread(&std, sizeof(std), 1, fpo)){
            s = std.Id_no;
            if (s != r)
                fwrite(&std, sizeof(std), 1, fpt);
        }
        fclose(fpo);
        fclose(fpt);
        fpo = fopen("S_record", "w");
        fpt = fopen("S_temp", "r");
        while (fread(&std, sizeof(std), 1, fpt))
            fwrite(&std, sizeof(std), 1, fpo);
        gotoxy(30, 16);
        printf("S_record DELETED\n");
        fclose(fpo);
        fclose(fpt);

        printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c", &ans);
    if (ans == 'Y'){
        S_delete();
    }
    else if (ans == 'N'){
        printf("\n\t\t Thank you \n");
        getch();
        Manage_Student();
    }

}
}
void S_update(){
    system("cls");
    int avl;
    FILE *fpt;
    FILE *fpo;
    int s, r, ch;
    gotoxy(30,15);
     printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

    gotoxy(30,16);
     printf("\xB2");printf("Enter Id number to S_update:");
    scanf("%d", &r);gotoxy(72,16);printf("\xB2");
    gotoxy(30,17);
     printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    avl = S_avail(r);
    if (avl == 0){
        gotoxy(30, 15);
        printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
        gotoxy(30,16);
        printf("\xB2");printf("Id number %d is not Available in the file", r);gotoxy(72,16);printf("\xB2");
        gotoxy(30,17);
         printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    }
    else{
        fpo = fopen("S_record", "r");
        fpt = fopen("S_temp", "w");
        while (fread(&std, sizeof(std), 1, fpo)){
            s = std.Id_no;
            if (s != r)
                fwrite(&std, sizeof(std), 1, fpt);
            else{
                gotoxy(30, 17);
                 printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
                 gotoxy(30, 18);
                printf("\xB2");printf("1. S_update Name of Id Number %d", r);gotoxy(72,17);printf("\xB2");
                gotoxy(30, 19);
                printf("\xB2");printf("2. S_update intake of Id Number %d", r);gotoxy(72,18);printf("\xB2");
                gotoxy(30, 20);
                printf("\xB2");printf("3. S Section of Id Number %d", r);gotoxy(72,19);printf("\xB2");
                gotoxy(30, 21);
                printf("\xB2");printf("4. S_update Department of Id Number %d", r);gotoxy(72,20);printf("\xB2");
                gotoxy(30, 22);
                printf("\xB2");printf("5. S_update all of Id Number %d", r);gotoxy(72,21);printf("\xB2");
                gotoxy(30, 23);
                printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"); gotoxy(72,22);printf("\xB2");
                printf("\n\nEnter your choice: ");
                scanf("%d", &ch);
                switch (ch){
                case 1:
                    gotoxy(30, 24);
                     printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"); gotoxy(72,23);printf("\xB2");
                    gotoxy(30,25);
                    printf("\xB2");printf("Enter Name:");
                    getchar();
                    scanf("%[^\n]", std.Name);gotoxy(72,24);printf("\xB2");
                    gotoxy(30, 26);
                      printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"); gotoxy(72,25);printf("\xB2");
                    break;
                case 2:
                    gotoxy(30, 24);
                     printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
                    gotoxy(30, 25);
                    printf("\xB2");printf("Enter Intake : ");
                    scanf("%s", &std.intake); gotoxy(72,15);printf("\xB2");
                    gotoxy(30, 26);
                      printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
                    break;
                case 3:
                    gotoxy(30, 24);
                     printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
                    gotoxy(30, 25);
                    printf("\xB2");printf("Enter Section : ");
                    scanf("%s", &std.section);gotoxy(72,15);printf("\xB2");
                    gotoxy(30, 26);
                      printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
                    break;
                case 4:
                    gotoxy(30, 24);
                      printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
                     gotoxy(30, 25);
                    printf("\xB2");printf("Enter Department : ");
                    scanf("%s", &std.department);gotoxy(72,15);printf("\xB2");
                    gotoxy(30, 26);
                      printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
                    break;
                case 5:
                    gotoxy(30, 24);
                    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
                    gotoxy(30, 25);
                    printf("\xB2");printf("Enter Name: ");
                    getchar();
                    scanf("%[^\n]", std.Name);gotoxy(72,15);printf("\xB2");
                    gotoxy(30, 26);
                    printf("\xB2");printf("Enter Section: ");
                    scanf("%s", &std.section);gotoxy(72,16);printf("\xB2");
                    gotoxy(30, 27);
                    printf("\xB2");printf("Enter Intake: ");
                    scanf("%s", &std.intake);gotoxy(72,17);printf("\xB2");
                    gotoxy(30, 28);
                    printf("\xB2");printf("Enter Department: ");
                    scanf("%s", &std.department);gotoxy(72,18);printf("\xB2");
                    gotoxy(30, 29);
                    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
                    break;
                default:
                    gotoxy(30, 24);
                    printf("Invalid Selection");
                    break;
                }
                fwrite(&std, sizeof(std), 1, fpt);
            }
        }
        fclose(fpo);
        fclose(fpt);
        fpo = fopen("S_record", "w");
        fpt = fopen("S_temp", "r");
        while (fread(&std, sizeof(std), 1, fpt)){
            fwrite(&std, sizeof(std), 1, fpo);
        }
        fclose(fpo);
        fclose(fpt);
    }
    gotoxy(30, 30);
    printf("S_record updated");
    getch();
    Manage_Student();
}

int S_avail(int rno){
    FILE *fp;
    int c = 0;
    fp = fopen("S_record", "r");
    while (!feof(fp)){
        fread(&std, sizeof(std), 1, fp);
        if (rno == std.Id_no){
            fclose(fp);
            return 1;
        }
    }
    fclose(fp);
    return 0;
}

void Manage_Student()
{
    system("color E");
     system("cls");
int choice,emp;
printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2SELECT CATEGOIES\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
printf("\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 1. Add Student              \xDB\xDB\xDB\xDB\xB2\n");
printf("\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 2. View All Students        \xDB\xDB\xDB\xDB\xB2\n");
printf("\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 3. Search Students          \xDB\xDB\xDB\xDB\xB2\n");
printf("\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 4. Delete Students          \xDB\xDB\xDB\xDB\xB2\n");
printf("\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 5. Edit Students            \xDB\xDB\xDB\xDB\xB2\n");
printf("\t\t\t\t\t\xDB\xDB\xDB\xDB\xB2 6. Exit                     \xDB\xDB\xDB\xDB\xB2\n");
printf("\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB4\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB4\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB4\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:S_insert();break;
        case 2:S_display();break;
        case 3:S_search();break;
        case 4:S_delete();break;
        case 5:S_update();break;
        case 6:admin_menu();break;
        default:
        gotoxy(30, 26);
        printf("\n %30sInvalid entry Please enter right option :)");
    }
}
void Payment(){
    char payment1[30],payment2[30],payment3[30];
    int c;
    printf("1. BKash\n");
    printf("2. Nagad\n");
    printf("3. Rocket\n");
    printf("4. IBBL\n");
    printf("5. BDDL\n");
    printf("Enter your choice:");
    scanf("%d", &c);
    printf("Enter your account/phone number:");
    scanf("%s", &payment1);
    printf("Enter your pin number:");
    scanf("%s", &payment2);
    printf("Enter your amount:");
    scanf("%s", &payment3);
 printf("\t\t\t\t\t\t Confirm Payment (Y/N): ");scanf("%s", &c);
 admin_menu();
}
