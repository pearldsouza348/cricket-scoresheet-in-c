#include"declaration.h"
#include"menu.h"
#include"newscoresheet.h"
#include"filing.h"
#include"final.h"
int main()
{
    system("color f1");
    int a,key;
    char b,ch;
    FILE *newfile,filelist;

    char lastinput;
    while (TRUE)
    {
        initializeconsolehandles();
        system("cls");
        menu();
        locate(32,9);
        ch=getch();
        switch(ch)
        {
            case '1':
            fileopen(ch);
            case '2':
            fileopen(ch);
            getch();
            case '3':
            system ("cls");
            exit(0);
        }
    }
}
