/**
 * This is the Online Application Model Program.
 * I have used VS Code IDE.
 * @param{Author => KoushikPuppala}
 * @param{Mentor = >Atish Jain Sir}
 * @param{Batch Timing 7-8 pm Class}
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int x;
    long long int no, n, in, rn, rin, ot;
    unsigned long lcn, r, xtemp, temp, xan, an, enter, xsum, sum;
    int opt, c, otp, rotp, help, MAX, MIN, lin, lr, p, xp, ain, ai, A1, l, h, acount, Aopt, M1, M2, M3, M4, P1, P2, P3, P4, C1, C2, C3, C4, Scount1, Scount2, Scount3, Tcount;
    char fn[100], ln[100], ip, email[100], gen[100], choice, pass[100], LE[100], LP[100], sy, ep, k;
    an = p = temp = sum = ain = ai = A1 = l = enter = acount = xan = xp = xsum = xtemp = h = no = n = in = opt = c = otp = rotp = help = x = lin = lcn = r = lr = rn = rin = ot = 0;

    do
    {
        system("cls");

        printf("     *** WELCOME TO ONLINE APPLICATION PROGRAM ***\n");

        getch();

        printf("\nEnter your First name.: ");
        scanf("%s", &fn);
        fflush(stdin);
        printf("Enter your Last name....: ");
        scanf("%s", &ln);
        fflush(stdin);
        printf("Enter your Gender......: ");
        scanf("%s", &gen);
        fflush(stdin);

        do
        {
            printf("Do you want to continue with (E)-mail or (N)umber for login : ");
            scanf("%c", &ip);
            fflush(stdin);
        } while (ip != 'E' && ip != 'e' && ip != 'N' && ip != 'n');

        switch (ip)
        {
        case 'E':
        case 'e':
        {
            printf("Enter your E-mail............: ");
            scanf("%s", &email);
            fflush(stdin);
            printf("Enter your Password..........: ");
            scanf("%s", &pass);
            fflush(stdin);
            break;
        } //Mobile number Coding
        case 'N':
        case 'n':
        {
            do
            {
                no = n = opt = c = 0;
                printf("Enter a Mobile Number (With out country code and area code)..: ");
                scanf("%lld", &no);

                n = no;

                printf("\nWhich Country number you have entered above");
                printf("\n1.India\n2.USA\n3.Russia\n4.Engalnd\n5.Singpore");
                do
                {
                    printf("\nEnter your Option..: ");
                    scanf("%d", &opt);
                    fflush(stdin);
                } while (opt > 5);

                switch (opt)
                {
                case 1: //India have 10-Digit number
                {
                    while (no > 0)
                    {
                        no = no / 10;
                        c++;
                    }
                    if (c == 10)
                    {
                        h = 1;
                    }
                    else
                        printf("Sorry the entered number is not valid in this Country.\nPlease check you entered Country or Number is Correct.\nTry Again.\n\n");
                    break;
                }

                case 2: //USA have 7-Digit number
                {
                    while (no > 0)
                    {
                        no = no / 10;
                        c++;
                    }
                    if (c == 7)
                    {
                        h = 1;
                    }
                    else
                        printf("Sorry the entered number is not valid in this Country.\nPlease check you entered Country or Number is Correct.\nTry Again.\n\n");
                    break;
                }
                case 3: //Russia have 7-Digit number
                {
                    while (no > 0)
                    {
                        no = no / 10;
                        c++;
                    }
                    if (c == 7)
                    {
                        h = 1;
                    }
                    else
                        printf("Sorry the entered number is not valid in this Country.\nPlease check you entered Country or Number is Correct.\nTry Again\n\n");
                    break;
                }
                case 4: //England have 10-Digit number
                {
                    while (no > 0)
                    {
                        no = no / 10;
                        c++;
                    }

                    if (c == 10)
                    {
                        h = 1;
                    }
                    else
                        printf("Sorry the entered number is not valid in this Country.\nPlease check you entered Country or Number is Correct.\nTry Again\n\n");
                    break;
                }

                case 5: //Singapore have 8-Digit number
                {
                    while (no > 0)
                    {
                        no = no / 10;
                        c++;
                    }
                    if (c == 8)
                    {
                        h = 1;
                    }
                    else
                        printf("Sorry the entered number is not valid in this Country.\nPlease check you entered Country or Number is Correct.\nTry Again\n\n");
                    break;
                }
                }
            } while (!h);
            break;
        }

        default:
            printf("\n");
        }

        fflush(stdin);
        printf("\n\n    *** CHECK YOUR DEATILES ***\n");
        printf("\nYour UserID is \"%s %s\"", fn, ln);
        printf("\nYour Gender is \"%s\"", gen);
        {
            if (ip == 'n' || ip == 'N')
            {
                printf("\nYour Mobile Number is \"%lld\"", n);
                printf("\n\nNOTE:-You will get OTP for every login with phone number");
            }
            else
            {
                printf("\nYour EmailID is \"%s\"", email);
                printf("\nYour Password is \"%s\"", pass);
            }
        }
        printf("\n\n    *** IF DEATILES ARE CORRECT THEN TYPE \"(Y)ES\"\n        IF DEATILES HAVE CORRECTIONS THEN TYPE \"(N)O\" ***");

        do
        {
            printf("\n\nEnter Your option : ");
            scanf("%c", &choice);
            fflush(stdin);
            if ((choice == 'Y') || (choice == 'y'))
                break;
            else if ((choice == 'N') || (choice == 'n'))
            {
                x = 1;
                printf("Please Retry the Application\n\nPress any key to Retry");
                getch();
                system("cls");
            }
        } while (choice != 'N' && choice != 'n');
    } while (x);

    printf("\n\nYour Application is Submitted Successfully\n\nPress any Key to Open Login Page");
    getch();

    system("cls");

    printf("     *** WELCOME TO APPLICATION LOGIN PAGE ***\n\n");

    switch (ip)
    {
    case 'E':
    case 'e':
    {
    EMAIL:
        printf("\nHey This is still under development");
        exit(1);
        break;
    }
    case 'N':
    case 'n':
    {
    NUMBER:
        while (1)
        {
            printf("Enter your Mobile Number...: ");
            scanf("%lld", &in);
            if (in == n)
                break;
            else
                printf("Enter number is not in our Data base\n\n");
        }
        while (1)
        {
            MAX = 999999;
            MIN = 100000;
            srand(time(0));
            for (help = 1; help < 2; help++)
            {
                otp = (rand() % (MAX - MIN) + 1) + MIN;
                printf("Here is Your Verification Code : %d", otp);
                printf("\n\n");
                printf("Enter the Verification Code : ");
                scanf("%d", &rotp);
            }
            if (otp == rotp)
                break;
            else
                printf("\n\nEntered Verification Code is WRONG\nTry Again\n\n");
        }
    }
    }

    system("cls");

    printf("     *** WELCOME TO APPLICATION WEBPAGE ***\n\n");

    do
    {
        printf("What do you want to Do\n");
        printf("1.Lucky Number\n2.Reversing of numbers\n3.Armstrong number\n4.ASCII\n5.Guess the number\n6.Assignment");
        printf("\n7.Asscending or Decending Order\n8.logout\n");
        printf("Enter your Option : ");
        scanf("%d", &lin);

        switch (lin)
        {
        /*Lucky number Program*/
        case 1:
        {
            system("cls");
            lcn = r = lr = 0;
            printf("Hey..\nEnter any number i will show you magic :");
            scanf("%lu", &lcn);
            while (lcn > 0)
            {
                r = lcn % 10;
                lr = lr + r;
                lcn = lcn / 10;
                if (lcn == 0 && lr > 9)
                {
                    lcn = lr;
                    lr = 0;
                }
            }
            printf("\nHere is the Magic of Entered number :%d\n", lr);
            printf("\n");
            break;
        }

            /*Reversing of numbers*/

        case 2:
        {
            system("cls");
            rn = in = ot = 0;
            printf("Hey...\nEnter a number I will Reverse it and give you result : ");
            scanf("%lld", &rn);
            while (rn > 0)
            {
                in = rn % 10;
                ot = ot * 10 + in;
                rn = rn / 10;
            }
            printf("Here is the result that you need : %lld\n", ot);
            break;
        }
        case 3:
        {
            system("cls");
            printf("Which model do you want\n");
            printf("1.Check Whether number is Armstrong\n");
            printf("2.Find the no.of Armstrong are there in N numbers\n");
            printf("Enter your Option : ");
            scanf("%d", &ain);
            switch (ain)
            {
            case 1:
            {
                system("cls");
                an = temp = p = sum = 0;
                printf("Hey Enter any Number\nI will tell Whether it is Armstrong number or not...:");
                scanf("%lu", &an);

                temp = an;

                while (an > 0)
                {
                    p = an % 10;
                    sum = sum + (p * p * p);
                    an = an / 10;
                }
                if (sum == temp)
                {
                    printf("%lu is Armstrong number", temp);
                }
                else
                    printf("%lu is not Armstrong number", temp);
                break;
            }
            case 2:
            {
                system("cls");

                acount = xan = xsum = xtemp = 0;

                printf("Enter the number till which you want to find Armstrong numbers...: ");
                scanf("%lu", &enter);

                for (xan = 0; xan <= enter; xan++)
                {
                    xsum = 0;
                    xtemp = xan;

                    while (xan > 0)
                    {
                        xp = xan % 10;
                        xsum = xsum + (xp * xp * xp);
                        xan = xan / 10;
                    }

                    xan = xtemp;

                    if (xsum == xan)
                    {
                        printf("\n%lu", xan);
                        acount++;
                    }
                }
                printf("\nHey They are %d Armstrong number bellow %lu numbers ", acount, enter);

                break;
            }
            }
            break;
        }
        case 4:
        {
            system("cls");
            printf("Which model do you want\n");
            printf("1.Symbol to ASCII codes\n");
            printf("2.ASCII codes to Symbol\n");
            printf("Enter your Option : ");
            scanf("%d", &ai);
            switch (ai)
            {
            case 1:
            {
                system("cls");
                fflush(stdin);
                printf("Hey Enter any Symbol or Digit or Alphabet \nI will convert into a Unique Number . . :");
                scanf("%c", &sy);
                printf("Here is the Number that \nYou need is Know as ANSII Code(Number) ... :  \" %d \"  ", sy);
                break;
            }
            case 2:
            {
                system("cls");
                A1 = 0;
                printf("Enter the ASCII Code (0-225) :");
                scanf("%d", &A1);
                printf("The Symbol for the ASCII Code %d number is .....: \" [ %c ] \" ", A1, A1);
                break;
            }
            }
            break;
        }
        case 5:
        {
            unsigned long long guess,enter,div,MAX,MIN;
            int i,no;
            no=guess=enter=i=0;MAX=MIN=1;
            system("cls");
            printf("You will have only 3 Chance to Guess the number\n");
            printf("How many digits number do you want to Guess (Number > 0) : ");
            scanf("%d",&no);

            if(no==1)
            {
                srand(time(0));
                guess = rand()%10+1;
            } else
            {
                while(no>1)
                {
                    MAX=(MAX*100)-1;
                    MIN=MIN*10;
                    no=no-1;
                }

                srand(time(0));
                guess = (rand()%(MAX- MIN)+1)+MIN;
            }

            for (i=1;i<4;i++)
            {
                printf("\n\nNow you can Enter a number that you guess : ");
                scanf("%llu",&enter);

                if (enter<guess)
                {
                    printf("You have Entered Small number\n\nTry Again");
                } else if(enter>guess)
                {
                    printf("You have Entered large number\n\nTry Again");
                } else break;
            }
            if (enter==guess)
            {
                printf("Awesome You Gussed the Number in %d chance",i);
                break;
            } else if ((enter>guess||enter<guess)&&i>=4)
            {
                printf("You Failed to Guess the number\nFinally the number is %llu",guess);
            }
            break;
        }
        case 6:
        {
            system("cls");
            Aopt = M1 = M2 = M3 = M4 = P1 = P2 = P3 = P4 = C1 = C2 = C3 = C4 = 0;
            Scount1 = Scount2 = Scount3 = Tcount = 0;
            printf("Hey..\nWhich Model Exam do you want to take");
            printf("\n1.EAMCEET MODEL");
            printf("\n2.JEE MAINS MODEL");
            printf("\nEnter your Option : ");
            scanf("%d", &Aopt);
            switch (Aopt)
            {
            case 1:
            {
                printf("Hey this EAMCEET MODEL Assignment\nThere are total 12 Questions\nThere are 3 Sections in this assignment\n");
                printf("First Section contains Maths\nSecond Section contains Physics\nThird Section contains Chemistry\n");
                printf("The Marks Schemas\n+1 if the answer is correct\n0 in any remaining cases");
                printf("\n\nNOTE : You can't change the response if you move to another Question\n       You can skip the question it means that question is unanswered\n");
                printf("       You should go in order in which the Questions you get");
                break;
            }
            case 2:
            {
                printf("Hey this JEE MAINS MODEL Assignment\nThere are total 12 Questions\nThere are 3 Sections in this assignment");
                printf("First Section contains Maths\nSecond Section contains Physics\nThird Section contains Chemistry");
                printf("The Marks Schemas\n+4 if the answer is correct\n-1 if the answer is wrong\n0 in any remaining cases");
                printf("\n\nNOTE : You can't change the response if you move to another Question\n       You can skip the question it means that question is unanswered\n");
                printf("       You should go in order in which the Questions you get");
                break;
            }
            }
            getch();
            system("cls");
            printf("    *** SECTION - I ***\n");
            printf("1.In a random experiment, a fair die is rolled until two fours are obtained in succession. The probability that the experiment will end in the fifth throw of the die is equal to");
            printf("\n1.175/6^5\n2.200/6^5\n3.150/6^5\n4.225/6^5\n5.Skip\n");
            printf("Enter your Option : ");
            scanf("%d", &M1);
            if ((Aopt == 1) && (M1 == 1))
            {
                Scount1 = Scount1 + 1;
                Tcount = Tcount + 1;
            }
            else if ((Aopt == 2) && (M1 == 1))
            {
                Scount1 = Scount1 + 4;
                Tcount = Tcount + 4;
            }
            else if (M1 == 5)
            {
                continue;
            }
            else if ((Aopt == 1) && (M1 != 1))
            {
                Scount1 = Scount1 + 0;
                Tcount = Tcount + 0;
            }
            else if ((Aopt == 2) && (M1 != 1))
            {
                Scount1 = Scount1 - 1;
                Tcount = Tcount - 1;
            }
            else
            {
                Scount1 = Scount1 - 1;
                Tcount = Tcount - 1;
            }
            printf("2.");
            printf("");
            printf("Enter your Option : ");
            scanf("%d", &M2);
            if ((Aopt == 1) && (M2 == 3))
            {
                Scount1 = Scount1 + 1;
                Tcount = Tcount + 1;
            }
            else if ((Aopt == 2) && (M2 == 3))
            {
                Scount1 = Scount1 + 4;
                Tcount = Tcount + 4;
            }
            else if ((Aopt == 1) && (M2 != 3))
            {
                Scount1 = Scount1 + 0;
                Tcount = Tcount + 0;
            }
            else if ((Aopt == 2) && (M1 != 3))
            {
                Scount1 = Scount1 - 1;
                Tcount = Tcount - 1;
            }
            else if (M1 == 5)
            {
                continue;
            }
            else
            {
                Scount1 = Scount1 - 1;
                Tcount = Tcount - 1;
            }
            break;
        }
        case 7:
        {
            int opt,input,temp,i,j;
            opt=input=temp=0;
            system("cls");
            printf("Which model do u want to do\n");
            printf("1.Asscending Order\n2.Decending Order\n");
            printf("Enter your Option :");
            scanf("%d",&opt);
            printf("How many numbers do you want to compare : ");
            scanf("%d",&input);
                    
            int arr[input];

            switch (opt)
            {
                case 1:
                {
                    for(i=0;i<input;i++)
                    {
                        printf("Enter your %d number : ",i+1);
                        scanf("%d",&arr[i]);
                    }
                    for(i=0;i<input;i++)
                    {
                        for(j=i+1;j<input;j++)
                        {
                            if(arr[i]>arr[j])
                            {
                                temp=arr[i];
                                arr[i]=arr[j];
                                arr[j]=temp;
                            }
                        }
                    }
                    break;
                }
                case 2:
                {
                    for(i=0;i<input;i++)
                    {
                        printf("Enter your %d number : ",i+1);
                        scanf("%d",&arr[i]);
                    }
                    for(i=0;i<input;i++)
                    {
                        for(j=i+1;j<input;j++)
                        {
                            if(arr[i]<arr[j])
                            {
                                temp=arr[i];
                                arr[i]=arr[j];
                                arr[j]=temp;
                            }
                        }
                    }
                    break;
                }
            }
            printf("\nHere is the Required Order : \n");
            for(i=0;i<input;i++)
            {
                printf("%d\t",arr[i]);
            }
            break;
        }
        case 8:
        {
            system("cls");
            fflush(stdin);
            printf("Hey Do you want Exit.\n\n");
            printf("If yes enter \"y\"\n If no enter \"n\"\nEnter your Option : ");
            scanf("%c", &ep);
            if (ep == 'y' || ep == 'Y')
            {
                printf("Have a nice day\nBye");
                exit(1);
            }
            else if ((ep != 'n' || ep != 'N') && (ip == 'e' || ip == 'E'))
            {
                goto EMAIL;
            }
            else if ((ep != 'n' || ep != 'N') && (ip == 'n' || ip == 'N'))
            {
                goto NUMBER;
            }
            break;
        }

        } /*Switch*/

        fflush(stdin);
        printf("\nDo you want to continue(Y/N) : ");
        scanf("%c", &k);
        system("cls");
        if (k == 'n' || k == 'N')
            l = 1;
    } while (!l);

    printf("Have a nice day\nBye");

    getch();
}
