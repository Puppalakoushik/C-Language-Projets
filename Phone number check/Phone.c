/*
This is the program to check the entered number is valid or not.
This code is coded by using VS Code IDE.
@author Koushik.
*/

#include<stdio.h>
#include<conio.h>

int main(void)
{
    long long int no;
    int opt,c;
    no=opt=c=0;

    printf("Hey...\nWhich Country number you want to check");
    printf("\n1.India");
    printf("\n2.USA");
    printf("\n3.Russia");
    printf("\n4.Engalnd");
    printf("\n5.Singpore");
    printf("\nEnter your Option :");

    scanf("%d",&opt);

    switch (opt)
    {
    case 1:

    printf("Hey...\nEnter a Mobile Number (With out country code and area code) :");
    scanf("%lld",&no);
        while (no>0)
        {
            no=no/10;
            c++;
        }

        if (c==10)
            {printf("Yes this number is Valid Number only");
            break;}
        else
            printf("Sorry the entered number is not valid in this Country\nPlease check you entered Country or Number is Correct");

        break;

    case 2:

    printf("Hey...\nEnter a Mobile Number (With out country code and area code) :");
    scanf("%lld",&no);
        while (no>0)
        {
            no=no/10;
            c++;
        }

        if (c==7)
            printf("Yes this number is Valid Number only");
        else
            printf("Sorry the entered number is not valid in this Country\nPlease check you entered Country or Number is Correct");

        break;

    case 3:

    printf("Hey...\nEnter a Mobile Number (With out country code and area code) :");
    scanf("%lld",&no);
        while (no>0)
        {
            no=no/10;
            c++;
        }

        if (c==7)
            printf("Yes this number is Valid Number only");
        else
            printf("Sorry the entered number is not valid in this Country\nPlease check you entered Country or Number is Correct");

        break;

    case 4:

    printf("Sorry this program ");



    default:printf("Invalid Option Entered");
        break;
    }
}