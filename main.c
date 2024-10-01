#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include <unistd.h>

int main() {
    int e1[10] = {1,2,3,4,5,6,7,8,9,10};
    int n1[10] = {1,2,3,4,5,6,7,8,9,10};
    int h1[10] = {1,2,3,4,5,6,7,8,9,10};
    int i, count1,count2,count3,j,temp,totalcount,attempts = 0;
    char player_name[25],choice, difficulty, quit, move, ret;
    welcome:
    system("clear");
    printf("\n    _____________________________________________________________________________________________________________");
    printf("\n\n                                          ''Welcome to the C Quiz Game!");
    printf("\n     This program is designed to test your knowledge of the C programming language in a fun and interactive way ");
    printf("\n                                Whether you're a beginner or an advanced programmer,");
    printf("\n           this quiz game is an excellent way to challenge yourself and improve your C programming skills.''");
    printf("\n    _____________________________________________________________________________________________________________");
    printf("\n\n                                           NAME: ");
    scanf("%s", player_name);
    
    start:
    system("clear");
    printf("\n\n\n\t\t\t\t > Press 'S' to START");
    printf("\n\t\t\t\t > Press 'H' for Help");
    printf("\n\t\t\t\t > Press 'Q' to Quit");
    printf("\n\n\t\t\t\t\t : ");
    scanf(" %c", &choice);
        if(toupper(choice) == 'S'){
            goto enh;   
        }
        else if(toupper(choice) == 'Q'){
            quit:
            system("clear");
            printf("\n\n\t\t\t\t   ARE YOU SURE YOU WANT TO QUIT?");
            printf("\n\n\t\t\t\t\t PRESS 'Y' FOR YES");
            printf("\n\n\t\t\t\t\t PRESS 'N' FOR NO");
            printf("\n\n\t\t\t\t\t       :");
            scanf("%s",&quit);
            if(toupper(quit) == 'Y'){
                system("clear");
                printf("\n\n\t\t\t\t\t THANK YOU FOR PLAYING....");
                return 0;
            }
            else if(toupper(quit) == 'N'){
                goto start;
            }
            else if(toupper(quit) != 'N', 'Y'){
                goto quit;
            }
            
        }
        else if(toupper(choice) == 'H'){
            goto help;
        }
        else if(toupper(choice) != 'S', 'Q', 'H'){
            goto start;
        }

    switch (toupper(choice)) {
        
        case 'H':
            help:
            system("clear");
            printf("\n\t\t           ''THIS GAME IS FOR PROJECT PURPOSES ONLY'' ");
            printf("\n\t\t______________________________________________________________");
            printf("\n\t\t          PREPARED BY: GABUNADA, GUELBERT G. JR   BSCPE 1");
            printf("\n\t\t______________________________________________________________");
            printf("\n\n\t\t              ANSWER ALL THE QUESTIONS CORRECTLY");
            printf("\n\n\t\t        THERE ARE 3 DIFFICULTY MODES EASY, NORMAL, HARD  ");
            printf("\n\t\t         YOU CAN START IN ANY OF THE 3 DIFFICULTY MODES\n\t\t  IN ORDER TO WIN THE GAME ANSWER ALL QUESTIONS IN ALL MODES");
            printf("\n\t\t\t          MAXIMUM OF 5 ATTEMPTS");
            printf("\n\t\t_____________________________________________________________");
            printf("\n\t\t                 PRESS 'M' TO RETURN MENU");
            printf("\n\t\t                PRESS 'Q' TO QUIT THE GAME");
            printf("\n\t\t\t\t\t  :");
            scanf("%c",&ret);
            
            if(toupper(ret) == 'M'){
                goto start;
            }
            else if(toupper(ret) == 'Q'){
                goto quit;
            }
            else if(toupper(ret) != 'Q', 'M'){
                goto help;
            }

        case 'S':
            enh:
            system("clear");
            printf("\n\n\n\t\t\t\t > Press 'E' for [EASY]");
            printf("\n\n\t\t\t\t > Press 'N' for [NORMAL]");
            printf("\n\n\t\t\t\t > Press 'H' for [HARD]");
            printf("\n\n\n\t\t\t\t       Mode: ");
            scanf(" %c", &difficulty);
            if(toupper(difficulty) == 'E'){
                goto easy;
            }
            else if(toupper(difficulty) == 'N'){
                goto normal;
            }
            else if(toupper(difficulty) == 'H'){
                goto hard;
            }
            else if(toupper(difficulty) != 'E','N','H'){
                goto enh;
            }
            

            switch (toupper(difficulty)){
                case 'E':
                    easy:
                    system("clear");
                    count1 = 0;
                    srand(time(NULL));
                    for (i = 0; i < 10; i++){
                        j = rand() % 10;
                        temp = e1[i];
                        e1[i] = e1[j];
                        e1[j] = temp;
                    }
                    
                    for (i = 0; i < 10; i++){
                        system("clear");
                        sleep(.5);
                        switch (e1[i]) {
                            case 1:
                                e1:
                                system("clear");
                                printf("\t\t\t\t        EASY MODE");
                                printf("\n\n\n\t\t\t\t What is a pointer? ");
                                printf("\n\n\t\t\t\t a.) A variable used to store address of an instruction  \n\n\t\t\t\t b.) A keyword used to create variables \n\n\t\t\t\t c.) A variable used to store address of a structure \n\n\t\t\t\t d.) A variable used to store address of other variable");
                                printf("\n\n\n\t\t\t\t Your Answer?: ");
                                scanf(" %s", &choice);
                                if (toupper(choice) == 'D'){
                                    count1++;
                                }
                                else if(toupper(choice) == 'A'){}
                                else if(toupper(choice) == 'B'){}
                                else if(toupper(choice) == 'C'){}
                                else if(toupper(choice) != 'A', 'B', 'C','D'){
                                    goto e1;    
                                }
                                
                                break;

                            case 2:
                                e2:
                                system("clear");
                                printf("\t\t\t\t        EASY MODE");
                                printf("\n\n\n\t\t\t\t An operation with only one operand is called unary operation.");
                                printf("\n\n\t\t\t\t a.) An operation with two operand is called unary operation \n\n\t\t\t\t b.) An operation with unlimited operand is called unary operation \n\n\t\t\t\t c.) Yes \n\n\t\t\t\t d.) None of the above");
                                
                                printf("\n\n\t\t\t\t Your Answer?: ");
                                scanf(" %s", &choice);
                                if (toupper(choice) == 'C'){
                                    count1++;
                                }
                                else if(toupper(choice) == 'D'){}
                                else if(toupper(choice) == 'B'){}
                                else if(toupper(choice) == 'A'){}
                                else if(toupper(choice) != 'A', 'B', 'C', 'D'){
                                    goto e2;    
                                }
                                
                                break;
                            
                            case 3:
                                e3:
                                system("clear");
                                printf("\t\t\t\t        EASY MODE");
                                printf("\n\n\t\t\t\t In the standard library of C programming language, which of the following header file is designed for basic mathematical operations?");
                                printf("\n\n\t\t\t\t a.) math.h \n\n\t\t\t\t b.) conio.h \n\n\t\t\t\t c.) dos.h \n\n\t\t\t\t d.) stdio.h");
                                
                                printf("\n\n\t\t\t\tYour Answer?: ");
                                scanf("%s", &choice);
                                if(toupper(choice) == 'A'){
                                    count1++;
                                }
                                else if(toupper(choice) == 'D'){}
                                else if(toupper(choice) == 'B'){}
                                else if(toupper(choice) == 'C'){}
                                else if(toupper(choice) != 'A', 'B', 'C', 'D'){
                                    goto e3;    
                                }
                                
                                break;
                                
                            case 4:
                                e4:
                                system("clear");
                                printf("\t\t\t\t        EASY MODE");
                                printf("\n\n\t\t\t\t Which of the following header file can be used to define the NULL macro?");
                                printf("\n\n\t\t\t\t a.) stdio.h, locale.h, stddef.h, stdlib.h, string.h  \n\n\t\t\t\t b.) stddef.h, locale.h, math.h, stdlib.h, string.h \n\n\t\t\t\t c.) time.h, wchar.h, math.h, locale.h \n\n\t\t\t\t d.) math.h");
                                
                                printf("\n\n\t\t\t\t Your Answer?: ");
                                scanf("%s", &choice);
                                if(toupper(choice) == 'A'){
                                    count1++;
                                }
                                else if(toupper(choice) == 'D'){}
                                else if(toupper(choice) == 'B'){}
                                else if(toupper(choice) == 'C'){}
                                else if(toupper(choice) != 'A', 'B', 'C', 'D'){
                                    goto e4;    
                                }
                                break;
                                
                            case 5:
                                e5:
                                system("clear");
                                printf("\t\t\t\t        EASY MODE");
                                printf("\n\n\t\t\t\t In the given below statement, what does the “pf” indicate?");
                                
                                printf("\n\n\t\t\t\t                   int (*pf) ();");
                                printf("\n\n\t\t\t\t a.) pf is a pointer of a function which return int \n\n\t\t\t\t b.) pf is a pointer \n\n\t\t\t\t c.) pf is a function pointer \n\n\t\t\t\t d.) None of the above");
                                
                                printf("\n\n\t\t\t\t Your Answer?: ");
                                scanf("%s", &choice);
                                if(toupper(choice) == 'A'){
                                    count1++;
                                }
                                else if(toupper(choice) == 'D'){}
                                else if(toupper(choice) == 'B'){}
                                else if(toupper(choice) == 'C'){}
                                else if(toupper(choice) != 'A', 'B', 'C', 'D'){
                                    goto e5;    
                                }
                                break;
                            
                            case 6:
                                e6:
                                system("clear");
                                printf("\t\t\t\t        EASY MODE");
                                printf("\n\n\t\t\t\t Which operator can be used to compare two values?");
                                printf("\n\n\t\t\t\t a.) == \n\n\t\t\t\t b.) >< \n\n\t\t\t\t c.) = \n\n\t\t\t\t d.) <>");
                                
                                printf("\n\n\t\t\t\t Your Answer?: ");
                                scanf("%s", &choice);
                                if(toupper(choice) == 'A'){
                                    count1++;
                                }
                                else if(toupper(choice) == 'D'){}
                                else if(toupper(choice) == 'B'){}
                                else if(toupper(choice) == 'C'){}
                                else if(toupper(choice) != 'A', 'B', 'C', 'D'){
                                    goto e6;    
                                }
                                break;
                            
                            case 7:
                                e7:
                                system("clear");
                                printf("\t\t\t\t        EASY MODE");
                                printf("\n\n\t\t\t\t How do you call a function in C?");
                                printf("\n\n\t\t\t\t a.) myFunction(); \n\n\t\t\t\t b.) my(Function); \n\n\t\t\t\t c.) myFunction; \n\n\t\t\t\t d.) myfunctions() ");
                                
                                printf("\n\n\t\t\t\t Your Answer?: ");
                                scanf("%s", &choice);
                                if(toupper(choice) == 'A'){
                                    count1++;
                                }
                                else if(toupper(choice) == 'D'){}
                                else if(toupper(choice) == 'B'){}
                                else if(toupper(choice) == 'C'){}
                                else if(toupper(choice) != 'A', 'B', 'C', 'D'){
                                    goto e7;    
                                }
                                break;
                            
                            case 8:
                                e8:
                                system("clear");
                                printf("\t\t\t\t        EASY MODE");
                                printf("\n\n\t\t\t\t How do you start writing an if statement in C?");
                                printf("\n\n\t\t\t\t a.) if(x > y) \n\n\t\t\t\t b.) if x > y \n\n\t\t\t\t c.) if (x > y); \n\n\t\t\t\t d.) if (x > y) then ");
                                
                                printf("\n\n\t\t\t\t Your Answer?: ");
                                scanf("%s", &choice);
                                if(toupper(choice) == 'A'){
                                    count1++;
                                }
                                else if(toupper(choice) == 'D'){}
                                else if(toupper(choice) == 'B'){}
                                else if(toupper(choice) == 'C'){}
                                else if(toupper(choice) != 'A', 'B', 'C', 'D'){
                                    goto e8;    
                                }
                                break;
                                
                            case 9:
                                e9:
                                system("clear");
                                printf("\t\t\t\t        EASY MODE");
                                printf("\n\n\t\t\t\t Which keyword is used to return a value inside a function?");
                                printf("\n\n\t\t\t\t a.) return \n\n\t\t\t\t b.) break \n\n\t\t\t\t c.) else if \n\n\t\t\t\t d.) while");
                                
                                printf("\n\n\t\t\t\t Your Answer?: ");
                                scanf("%s", &choice);
                                if(toupper(choice) == 'A'){
                                    count1++;
                                }
                                else if(toupper(choice) == 'D'){}
                                else if(toupper(choice) == 'B'){}
                                else if(toupper(choice) == 'C'){}
                                else if(toupper(choice) != 'A', 'B', 'C', 'D'){
                                    goto e9;    
                                }
                                break;
                                
                            case 10:
                                e10:
                                system("clear");
                                printf("\t\t\t\t        EASY MODE");
                                printf("\n\n\t\t\t\t Which statement can be used to select one of many code blocks to be executed?");
                                printf("\n\n\t\t\t\t a.) switch \n\n\t\t\t\t b.) while \n\n\t\t\t\t c.) else if \n\n\t\t\t\t d.) for loop");
                                
                                printf("\n\n\t\t\t\t Your Answer?: ");
                                scanf("%s", &choice);
                                if(toupper(choice) == 'A'){
                                    count1++;
                                }
                                else if(toupper(choice) == 'D'){}
                                else if(toupper(choice) == 'B'){}
                                else if(toupper(choice) == 'C'){}
                                else if(toupper(choice) != 'A', 'B', 'C', 'D'){
                                    goto e10;    
                                }
                                break;
                                
                        
                        }
                    }
                    score1:
                    system("clear");
                    printf("\n\t\t _____________________________________________________________________");
                    printf("\n\n\t\t\t\t YOU GOT %d OUT OF 10 QUESTIONS ON EASY MODE.\n", count1);
                    printf("\t\t _____________________________________________________________________");
                    printf("\n\n\t\t\t\t           PRESS 'M' TO MENU");
                    printf("\n\t\t\t\t         PRESS 'C' TO CONTINUE");
                    printf("\n\n\t\t\t\t                : ");
                    scanf("%s",&move);
                    if(toupper(move) == 'C'){
                        goto normal;
                    }
                    else if(toupper(move) == 'M'){
                        goto start;
                    }
                    else if(toupper(move) != 'M' , 'C'){
                        goto score1;
                    }
                case 'N':
                    normal:
                    system("clear");
                    count2 = 0;
                    srand(time(NULL));
                    for (i = 0; i < 10; i++){
                        j = rand() % 10;
                        temp = n1[i];
                        n1[i] = n1[j];
                        n1[j] = temp;
                    }
                    
                    for (i = 0; i < 10; i++) {
                        system("clear");
                        sleep(.5);
                        
                        switch(n1[i]){
                            case 1:
                                n1:
                                system("clear");
                                printf("\t\t\t\t          NORMAL MODE");
                                printf("\n\n\n\t\t\t\t What year language 'C' debut?");
                                printf("\n\n\t\t\t\t a.) early 1970's \n\n\t\t\t\t b.) early 1980's \n\n\t\t\t\t c.) early 1960's \n\n\t\t\t\t d.) early 1990's");
                                printf("\n\n\t\t\t\t Your Answer?: ");
                                
                                scanf("%s",&choice);
                                if(toupper(choice) == 'A'){
                                   count2++;
                                }
                                else if(toupper(choice) == 'D'){}
                                else if(toupper(choice) == 'B'){}
                                else if(toupper(choice) == 'C'){}
                                else if(toupper(choice) != 'A', 'B', 'C', 'D'){
                                    goto n1;    
                                }
                                break;
                            
                            case 2:
                                n2:
                                system("clear");
                                printf("\t\t\t\t          NORMAL MODE");
                                printf("\n\n\n\t\t\t\t Who invented program 'C' ?");
                                printf("\n\n\t\t\t\t a.) Dennis M. Ritchie \n\n\t\t\t\t b.) Ritchie R. Monroe \n\n\t\t\t\t c.) Monroe D. Ritchie \n\n\t\t\t\t d.) Charles M. Ritchie");
                                printf("\n\n\t\t\t\t Your Answer?: ");
                                
                                scanf("%s",&choice);
                                if(toupper(choice) == 'A'){
                                     count2++;
                                }
                                else if(toupper(choice) == 'D'){}
                                else if(toupper(choice) == 'B'){}
                                else if(toupper(choice) == 'C'){}
                                else if(toupper(choice) != 'A', 'B', 'C', 'D'){
                                    goto n2;    
                                }
                                break;
                            
                            case 3:
                                n3:
                                system("clear");
                                printf("\t\t\t\t          NORMAL MODE");
                                printf("\n\n\n\t\t\t\t What Laboratorie did the Language 'C' invented?");
                                printf("\n\n\t\t\t\t a.) Bell Laboratories of AT&T Labs\n\n\t\t\t\t b.) Dell Laboratories of AT&t Labs\n\n\t\t\t\t c.) Cell Laboratories of AT&t Labs \n\n\t\t\t\t d.) None of the Above ");
                                printf("\n\n\t\t\t\t Your Answer?: ");
                                
                                scanf("%s",&choice);
                                if(toupper(choice) == 'A'){
                                    count2++;
                                }
                                else if(toupper(choice) == 'D'){}
                                else if(toupper(choice) == 'B'){}
                                else if(toupper(choice) == 'C'){}
                                else if(toupper(choice) != 'A', 'B', 'C', 'D'){
                                    goto n3;    
                                }
                                break;
                                
                            case 4:
                                n4:
                                system("clear");
                                printf("\t\t\t\t          NORMAL MODE");
                                printf("\n\n\n\t\t\t\tWhat is the only function C Programming must contain?");
                                printf("\n\n\t\t\t\t a.) main() \n\n\t\t\t\t b.) int() \n\n\t\t\t\t c.) real() \n\n\t\t\t\t d.) prototype() ");
                                printf("\n\n\t\t\t\t Your Answer?: ");
                                
                                scanf("%s",&choice);
                                if(toupper(choice) == 'A'){
                                    count2++;
                                }
                                else if(toupper(choice) == 'D'){}
                                else if(toupper(choice) == 'B'){}
                                else if(toupper(choice) == 'C'){}
                                else if(toupper(choice) != 'A', 'B', 'C', 'D'){
                                    goto n4;    
                                }
                                break;
                                
                            case 5:
                                n5:
                                system("clear");
                                printf("\t\t\t\t          NORMAL MODE");
                                printf("\n\n\n\t\t\t\tWhat punctuation ends most line of C code?");
                                printf("\n\n\t\t\t\t a.): \n\n\t\t\t\t b.) ; \n\n\t\t\t\t c.) {} \n\n\t\t\t\t d.) ,.");
                                printf("\n\n\t\t\t\t Your Answer?: ");
                                
                                scanf("%s",&choice);
                                if(toupper(choice) == 'B'){
                                    count2++;
                                }
                                else if(toupper(choice) == 'D'){}
                                else if(toupper(choice) == 'A'){}
                                else if(toupper(choice) == 'C'){}
                                else if(toupper(choice) != 'A', 'B', 'C', 'D'){
                                    goto n5;    
                                }
                                break;
                                
                            case 6:
                                n6:
                                system("clear");
                                printf("\t\t\t\t          NORMAL MODE");
                                printf("\n\n\n\t\t\t\t What is C language?");
                                printf("\n\n\t\t\t\t a.) C language is a structure/procedure oriented \n\n\t\t\t\t b.) C language is a middle level programming language \n\n\t\t\t\t c.) C language was invented for implementing UNIX operating system \n\n\t\t\t\t d.) All of the above");
                                printf("\n\n\t\t\t\t Your Answer?: ");
                                
                                scanf("%s",&choice);
                                if(toupper(choice) == 'D'){
                                    count2++;
                                }
                                else if(toupper(choice) == 'B'){}
                                else if(toupper(choice) == 'A'){}
                                else if(toupper(choice) == 'C'){}
                                else if(toupper(choice) != 'A', 'B', 'C', 'D'){
                                    goto n6;    
                                }
                                break;
                            
                            case 7:
                                n7:
                                system("clear");
                                printf("\t\t\t\t          NORMAL MODE");
                                printf("\n\n\n\t\t\t\t C was initially used for ");
                                printf("\n\n\t\t\t\t a.) General purpose \n\n\t\t\t\t b.) System development work \n\n\t\t\t\t c.) Data processing \n\n\t\t\t\t d.) None of these ");
                                printf("\n\n\t\t\t\t Your Answer?: ");
                                
                                scanf("%s",&choice);
                                if(toupper(choice) == 'B'){
                                    count2++;
                                }
                                else if(toupper(choice) == 'D'){}
                                else if(toupper(choice) == 'A'){}
                                else if(toupper(choice) == 'C'){}
                                else if(toupper(choice) != 'A', 'B', 'C', 'D'){
                                    goto n7;    
                                }
                                break;
                            
                            case 8:
                                n8:
                                system("clear");
                                printf("\t\t\t\t          NORMAL MODE");
                                printf("\n\n\n\t\t\t\t C programming language is ");
                                printf("\n\n\t\t\t\t a.) Procedural language \n\n\t\t\t\t b.) Object Oriented language \n\n\t\t\t\t c.) Scripting languages \n\n\t\t\t\t d.) None of these ");
                                printf("\n\n\t\t\t\t Your Answer?: ");
                                
                                scanf("%s",&choice);
                                if(toupper(choice) == 'A'){
                                    count2++;
                                }
                                else if(toupper(choice) == 'D'){}
                                else if(toupper(choice) == 'B'){}
                                else if(toupper(choice) == 'C'){}
                                else if(toupper(choice) != 'A', 'B', 'C', 'D'){
                                    goto n8;    
                                }
                                break;
                            
                            case 9:
                                n9:
                                system("clear");
                                printf("\t\t\t\t          NORMAL MODE");
                                printf("\n\n\n\t\t\t\t C can be used on?");
                                printf("\n\n\t\t\t\t a.) Only MS-Dos operating System \n\n\t\t\t\t b.) Only Linux operating system \n\n\t\t\t\t c.) Only Windows operating system \n\n\t\t\t\t d.) All of the above");
                                printf("\n\n\t\t\t\t Your Answer?: ");
                                
                                scanf("%s",&choice);
                                if(toupper(choice) == 'D'){
                                    count2++;
                                }
                                else if(toupper(choice) == 'A'){}
                                else if(toupper(choice) == 'B'){}
                                else if(toupper(choice) == 'C'){}
                                else if(toupper(choice) != 'A', 'B', 'C', 'D'){
                                    goto n9;    
                                }
                                break;
                                
                            case 10:
                                n10:
                                system("clear");
                                printf("\t\t\t\t          NORMAL MODE");
                                printf("\n\n\n\t\t\t\t Which is not a character Of C?");
                                printf("\n\n\t\t\t\t a.) $ \n\n\t\t\t\t b.) ^ \n\n\t\t\t\t c.) - \n\n\t\t\t\t d.) | ");
                                printf("\n\n\t\t\t\t Your Answer?: ");
                                
                                scanf("%s",&choice);
                                if(toupper(choice) == 'A'){
                                    count2++;
                                }
                                else if(toupper(choice) == 'D'){}
                                else if(toupper(choice) == 'B'){}
                                else if(toupper(choice) == 'C'){}
                                else if(toupper(choice) != 'A', 'B', 'C', 'D'){
                                    goto n10;    
                                }
                                break;
                        }
                            
                    }
                    score2:
                    system("clear");
                    printf("\n\t\t _____________________________________________________________________");
                    printf("\n\n\t\t\t\t YOU GOT %d OUT OF 10 QUESTIONS ON NORMAL MODE.\n", count2);
                    printf("\t\t _____________________________________________________________________");
                    printf("\n\n\t\t\t\t           PRESS 'M' TO MENU");
                    printf("\n\t\t\t\t         PRESS 'C' TO CONTINUE");
                    printf("\n\n\t\t\t\t                : ");
                    scanf("%s",&move);
                    if(toupper(move) == 'C'){
                        goto hard;
                    }
                    else if(toupper(move) == 'M'){
                        goto start;
                    }
                    else if(toupper(move) != 'M' ,'C'){
                        goto score2;
                    }

                case 'H':
                    hard:
                    system("clear");
                    count3 = 0;
                    srand(time(NULL));
                    for (i = 0; i < 10; i++){
                        j = rand() % 10;
                        temp = h1[i];
                        h1[i] = h1[j];
                        h1[j] = temp;
                    }
                    
                    for (i = 0; i < 10; i++){
                    
                        system("clear");
                        sleep(.5);
                        switch(h1[i]){
                                case 1:
                                    h1:
                                    printf("\t\t\t\t          HARD MODE");
                                    system("clear");
                                    printf("\n\n\n\t\t\t\tWhat is a correct syntax to output ''Hello World'' in C?");
                                    printf("\n\n\t\t\t\t a.) printf(''Hello World''); \n\n\t\t\t\t b.) Console.WrittenLine(''Hello world''); \n\n\t\t\t\t c.) Printf(''Hello World''); \n\n\t\t\t\t d.) System.out.printline(''Hello World''); ");
                                    printf("\n\n\t\t\t\t Your Answer?: ");
                                        
                                    scanf("%s",&choice);
                                    if(toupper(choice) == 'A'){
                                        count3++;
                                    }
                                    else if(toupper(choice) == 'D'){}
                                    else if(toupper(choice) == 'B'){}
                                    else if(toupper(choice) == 'C'){}
                                    else if(toupper(choice) != 'A', 'B', 'C', 'D'){
                                        goto h1;    
                                    }
                                    break;
                                
                                case 2:
                                    h2:
                                    system("clear");
                                    printf("\t\t\t\t          HARD MODE");
                                    printf("\n\n\n\t\t\t\t int arr[50] = {0,1,2,[47]=47,48,49};");
                                    printf("\n\n\t\t\t\t a.) Yes! this is allowed in C \n\n\t\t\t\t b.) No! This is not allowed in C \n\n\t\t\t\t c.) This is for Java \n\n\t\t\t\t d.) I dont know ");
                                    printf("\n\n\t\t\t\t Your Answer?: ");
                                        
                                    scanf("%s",&choice);
                                    if(toupper(choice) == 'A'){
                                        count3++;
                                    }
                                    else if(toupper(choice) == 'D'){}
                                    else if(toupper(choice) == 'B'){}
                                    else if(toupper(choice) == 'C'){}
                                    else if(toupper(choice) != 'A', 'B', 'C', 'D'){
                                        goto h2;    
                                    }
                                    break;
                            
                                case 3:
                                    h3:
                                    system("clear");
                                    printf("\t\t\t\t          HARD MODE");
                                    printf("\n\n\n\t\t\t\t #include <stdio.h>");
                                    printf("\n\t\t\t\t int main()");
                                    printf("\n\t\t\t\t {");
                                    printf("\n\t\t\t\t int var;  /*Suppose address of var is 2000 */");
                                    printf("\n\t\t\t\t void *ptr = &var;");
                                    printf("\n\t\t\t\t *ptr = 5;");
                                    printf("\n\t\t\t\t printf(\"var= ⁰/⚬d and *ptr= ⁰/⚬d ,var,*ptr);");
                                    printf("\n\t\t\t\t return 0;");
                                    printf("\n\t\t\t\t }");
                                    printf("\n\n\t\t\t\t a.) Compile Error \n\n\t\t\t\t b.) It will print “var=5 and *ptr=5”\n\n\t\t\t\t c.) It will print “var=5 and *ptr=XYZ” where XYZ is some random address\n\n\t\t\t\t d.) It will print “var=5 and *ptr=2000” ");
                                    printf("\n\n\t\t\t\t Your Answer?: ");
                                        
                                    scanf("%s",&choice);
                                    if(toupper(choice) == 'A'){
                                        count3++;
                                    }
                                    else if(toupper(choice) == 'D'){}
                                    else if(toupper(choice) == 'B'){}
                                    else if(toupper(choice) == 'C'){}
                                    else if(toupper(choice) != 'A', 'B', 'C', 'D'){
                                        goto h1;    
                                    }
                                    break;
                                
                                case 4:
                                    h4:
                                    system("clear");
                                    printf("\t\t\t\t          HARD MODE");
                                    printf("\n\n\n\t\t\t\t Assume int is 4 bytes, char is 1 byte and float is 4 bytes. Also, assume that pointer size is 4 bytes (i.e. typical case)");
                                    printf("\n\t\t\t\t char *pChar;");
                                    printf("\n\t\t\t\t int *pInt;");
                                    printf("\n\t\t\t\t float *pFloat;");
                                    printf("\n\n\t\t\t\t sizeof(pChar);");
                                    printf("\n\t\t\t\t sizeof(pInt);");
                                    printf("\n\t\t\t\t sizeof(pFloat);");
                                    printf("\n\t\t\t\t What’s the size returned for each of sizeof() operator?");
                                    printf("\n\n\t\t\t\t a.) 444 \n\n\t\t\t\t b.) 144 \n\n\t\t\t\t c.) 244 \n\n\t\t\t\t d.) None of the above ");
                                    printf("\n\n\t\t\t\t Your Answer?: ");
                                        
                                    scanf("%s",&choice);
                                    if(toupper(choice) == 'A'){
                                        count3++;
                                    }
                                    else if(toupper(choice) == 'D'){}
                                    else if(toupper(choice) == 'B'){}
                                    else if(toupper(choice) == 'C'){}
                                    else if(toupper(choice) != 'A', 'B', 'C', 'D'){
                                        goto h4;    
                                    }
                                    break;
                                
                                case 5:
                                    h5:
                                    system("clear");
                                    printf("\t\t\t\t          HARD MODE");
                                    printf("\n\n\n\t\t\t\tPredict the output of following program. Assume that the numbers are stored in 2’s complement form.");
                                    printf("\n\n\n\t\t\t\t#include<stdio.h> ");
                                    printf("\n\n\t\t\t\t  int  main() {");
                                    printf("\n\t\t\t\t  unsigned int x = -1;");
                                    printf("\n\t\t\t\t  int y = ~0;");
                                    printf("\n\t\t\t\t  if (x == y)");
                                    printf("\n\t\t\t\t  printf(''same'');");
                                    printf("\n\t\t\t\t  else {");
                                    printf("\n\t\t\t\t  }");
                                    printf("\n\t\t\t\t  printf(''not same'');");
                                    printf("\n\t\t\t\t  return 0;");
                                    printf("\n\t\t\t\t  }");
                                    printf("\n\n\t\t\t\t a.) Same \n\n\t\t\t\t b.) Not same \n\n\t\t\t\t c.) Maybe \n\n\t\t\t\t d.) None of the Above");
                                    printf("\n\n\t\t\t\t Your Answer?: ");
                                        
                                    scanf("%s",&choice);
                                    if(toupper(choice) == 'A'){
                                        count3++;
                                    }
                                    else if(toupper(choice) == 'D'){}
                                    else if(toupper(choice) == 'B'){}
                                    else if(toupper(choice) == 'C'){}
                                    else if(toupper(choice) != 'A', 'B', 'C', 'D'){
                                        goto h5;    
                                    }
                                    break;
                                
                                case 6:
                                    h6:
                                    system("clear");
                                    printf("\t\t\t\t          HARD MODE");
                                    printf("\n\n\n\t\t\t\t What is the Output? ");
                                    printf("\n\n\t\t\t\t #include <stdio.h> ");
                                    printf("\n\n\t\t\t\t int main() { ");
                                    printf("\n\n\t\t\t\t    int i = 3; ");
                                    printf("\n\n\t\t\t\t    printf(''⁰/⚬d'',++i + i++); ");
                                    printf("\n\n\t\t\t\t    return 0;");
                                    printf("\n\n\t\t\t\t } ");
                                    printf("\n\n\t\t\t\t a.) 9 \n\n\t\t\t\t b.) 6 \n\n\t\t\t\t c.) 10 \n\n\t\t\t\t d.) 8");
                                    printf("\n\n\t\t\t\t Your Answer?: ");
                                        
                                    scanf("%s",&choice);
                                    if(toupper(choice) == 'A'){
                                        count3++;
                                    }
                                    else if(toupper(choice) == 'D'){}
                                    else if(toupper(choice) == 'B'){}
                                    else if(toupper(choice) == 'C'){}
                                    else if(toupper(choice) != 'A', 'B', 'C', 'D'){
                                        goto h6;    
                                    }
                                    break;
                                    
                                case 7:
                                    h7:
                                    system("clear");
                                    printf("\t\t\t\t          HARD MODE");
                                    printf("\n\n\n\t\t\t\t What is the Output? ");
                                    printf("\n\n\t\t\t\t #include <stdio.h> ");
                                    printf("\n\n\t\t\t\t int main() { ");
                                    printf("\n\n\t\t\t\t    char str[] = ''Hello''; ");
                                    printf("\n\n\t\t\t\t    printf(''⁰/⚬c'',*str++); ");
                                    printf("\n\n\t\t\t\t    printf(''⁰/⚬c'',*++str); ");
                                    printf("\n\n\t\t\t\t    return 0;");
                                    printf("\n\n\t\t\t\t } ");
                                    printf("\n\n\t\t\t\t a.) ''H'' and ''e'' \n\n\t\t\t\t b.) ''L'' and ''L'' \n\n\t\t\t\t c.) ''e'' and ''o'' \n\n\t\t\t\t d.) ''H'' and ''o''");
                                    printf("\n\n\t\t\t\t Your Answer?: ");
                                        
                                    scanf("%s",&choice);
                                    if(toupper(choice) == 'A'){
                                        count3++;
                                    }
                                    else if(toupper(choice) == 'D'){}
                                    else if(toupper(choice) == 'B'){}
                                    else if(toupper(choice) == 'C'){}
                                    else if(toupper(choice) != 'A', 'B', 'C', 'D'){
                                        goto h7;    
                                    }
                                    break;
                                    
                                case 8:
                                    h8:
                                    system("clear");
                                    printf("\t\t\t\t          HARD MODE");
                                    printf("\n\n\n\t\t\t\t What is the Output? ");
                                    printf("\n\n\t\t\t\t #include <stdio.h> ");
                                    printf("\n\n\t\t\t\t int main() { ");
                                    printf("\n\n\t\t\t\t    int a[] = {10, 20 ,30 ,40, 50,}; ");
                                    printf("\n\n\t\t\t\t    int *p = a + 2; ");
                                    printf("\n\n\t\t\t\t    printf(''⁰/⚬d'',*--p); ");
                                    printf("\n\n\t\t\t\t    return 0;");
                                    printf("\n\n\t\t\t\t } ");
                                    printf("\n\n\t\t\t\t a.) 20 \n\n\t\t\t\t b.) 30 \n\n\t\t\t\t c.) 10 \n\n\t\t\t\t d.) 40");
                                    printf("\n\n\t\t\t\t Your Answer?: ");
                                        
                                    scanf("%s",&choice);
                                    if(toupper(choice) == 'A'){
                                        count3++;
                                    }
                                    else if(toupper(choice) == 'D'){}
                                    else if(toupper(choice) == 'B'){}
                                    else if(toupper(choice) == 'C'){}
                                    else if(toupper(choice) != 'A', 'B', 'C', 'D'){
                                        goto h8;    
                                    }
                                    break;
                                
                                case 9:
                                    h9:
                                    system("clear");
                                    printf("\t\t\t\t          HARD MODE");
                                    printf("\n\n\n\t\t\t\t What is the Output? ");
                                    printf("\n\n\t\t\t\t #include <stdio.h> ");
                                    printf("\n\n\t\t\t\t int main() { ");
                                    printf("\n\n\t\t\t\t    int i = 0, j = 0; ");
                                    printf("\n\n\t\t\t\t    for(; i < 5 && j < 5; ++i, j++) {");
                                    printf("\n\n\t\t\t\t       printf(''⁰/⚬d'',i); ");
                                    printf("\n\n\t\t\t\t    } ");
                                    printf("\n\n\t\t\t\t    return 0;");
                                    printf("\n\n\t\t\t\t } ");
                                    printf("\n\n\t\t\t\t a.) 0 1 2 3 4 \n\n\t\t\t\t b.) 1 2 3 4 5 \n\n\t\t\t\t c.) Error \n\n\t\t\t\t d.) None of the above");
                                    printf("\n\n\t\t\t\t Your Answer?: ");
                                        
                                    scanf("%s",&choice);
                                    if(toupper(choice) == 'A'){
                                        count3++;
                                    }
                                    else if(toupper(choice) == 'D'){}
                                    else if(toupper(choice) == 'B'){}
                                    else if(toupper(choice) == 'C'){}
                                    else if(toupper(choice) != 'A', 'B', 'C', 'D'){
                                        goto h9;    
                                    }
                                    break;
                                    
                                case 10:
                                    h10:
                                    system("clear");
                                    printf("\t\t\t\t          HARD MODE");
                                    printf("\n\n\n\t\t\t\t What is the Output? ");
                                    printf("\n\n\t\t\t\t #include <stdio.h> ");
                                    printf("\n\n\t\t\t\t int main() { ");
                                    printf("\n\n\t\t\t\t    int x = 10, y = 20, z = 30; ");
                                    printf("\n\n\t\t\t\t    int *p[] = {&x ,&y, &z}");
                                    printf("\n\n\t\t\t\t       printf(''⁰/⚬d'',*(*p+2)); ");
                                    printf("\n\n\t\t\t\t    return 0;");
                                    printf("\n\n\t\t\t\t } ");
                                    printf("\n\n\t\t\t\t a.) 30 \n\n\t\t\t\t b.) 40 \n\n\t\t\t\t c.) 50 \n\n\t\t\t\t d.) 20");
                                    printf("\n\n\t\t\t\t Your Answer?: ");
                                        
                                    scanf("%s",&choice);
                                    if(toupper(choice) == 'A'){
                                        count3++;
                                    }
                                    else if(toupper(choice) == 'D'){}
                                    else if(toupper(choice) == 'B'){}
                                    else if(toupper(choice) == 'C'){}
                                    else if(toupper(choice) != 'A', 'B', 'C', 'D'){
                                        goto h10;    
                                    }
                                    break;
                                    
                            
                        } 
                    }
                    
                    score3:
                    system("clear");
                    printf("\n\t\t _____________________________________________________________________");
                    printf("\n\n\t\t\t\t YOU GOT %d OUT OF 10 QUESTIONS ON HARD MODE.\n", count3);
                    printf("\t\t _____________________________________________________________________");
                    printf("\n\n\t\t\t\t           PRESS 'M' TO MENU");
                    printf("\n\t\t\t\t         PRESS 'C' TO CONTINUE");
                    printf("\n\n\t\t\t\t                : ");
                    scanf("%s",&move);
                    if(toupper(move) == 'C'){
                        goto total;
                    }
                    else if(toupper(move) == 'M'){
                        goto start;
                    }
                    else if(toupper(move) != 'M', 'C'){
                        goto score3;   
                    }
                    
             }
    }
    total:
    totalcount = count1 + count2 + count3;
    system("clear");
    
    if(totalcount == 30){
        system("clear");
        attempts++;
        printf("\n\n\t\tCONGRATULATION, %s! YOU HAVE DEMONSTRATED EXEPTIONAL PROFINCIENCY WITH JUST %d ATTEMTPS.",player_name, attempts);
        printf("\n\n\n\t\t                      PRESS ANY BUTTON TO CONTINUE");
        printf("\n\n\t\t                                   : ");
        scanf("%s",&move); 
        goto start;
    }
    else{
        fail:
        system("clear");
        printf("\n\n\t''SUCCESS IS NOT FINAL, FAILURE IS NOT FATAL: IT IS THE COURAGE TO CONTINUE THAT COUNTS''");
        printf("\n\n\t                                                                    - Winston Churchill");
        printf("\n\n\n\t I APOLOGIZE, %s. YOUR PERFORMANCE ON QUIZ GAME YIELDED A SCORE OF %d OUT OF 30.",player_name,totalcount);
        printf("\n\n\t\t\t\t             PRESS 'R' TO RETAKE");
        printf("\n\t\t\t\t           PRESS 'M' TO RETURN MENU");
        printf("\n\n\t\t\t\t                     : ");
        scanf("%s",&move);
        
        if(toupper(move) == 'R'){
            attempts++;
            if(attempts == 5){
                system("clear");
                printf("\n\n\n\t\t\t        YOU HAVE REACHED THE MAXIMUM NUMBER OF ATTEMPTS");
                printf("\n\n\t\t\t                   PRESS ANY BUTTON TO CONTINUE");
                printf("\n\t\t\t                                :");
                scanf("%s",&move);
                goto welcome;
            }
            goto easy;
        }
        else if(toupper(move) == 'M'){
            goto start;
        }
        else if(toupper(move) != 'M', 'R'){
            goto fail;
        }
        
    }

}
