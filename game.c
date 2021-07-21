#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    char name[100];

    printf("**** Enter You Name: ****\n");

    scanf("%s", &name);

    printf("**** Lets Play A Game WelCome !: %s\n ****",name);
    printf("**** Play A Guessing Number Game : ****\n ");




    int i, r, j = 1,y,k=1;
    srand(time(0));
    r = rand()%100 +1;
    //printf("the RandoM Number is : %d\n",r);//

    do
    {

        printf("*** Enter Number Between 1 to 100 ***\n");
        scanf("%d", &i);

        if (i > r)
        {
            printf("  Number You Enter Is Bigger Than Random Number \n "); /* code */
        }
        else if (i < r)
        {
            printf("   Number You Enter Is Smaller Than Random Number \n"); /* code */
        }

        else
        {
            printf("  Total Attempt You Guessing Number : = %d\n", j);
        }

        j++;


    }
    while (i != r);

    printf("**** Congrats You WIN ****\n");


    printf("******** Press 1 For Play Again And 0 For Exit : ******** \n");
    scanf("%d",&y);

    if(y==1)
    {
        printf("Enter you name:\n");

        scanf("%s", &name);

        printf("Lets Play A Game WelCome !: %s\n",name);
        printf("****Play A guessing Number game****\n ");

        srand(time(0));
        r = rand()%100 +1;
        //printf("the RandoM Number is : %d\n",r);//

        do
        {

            printf("*** Enter Number Between 1 to 100 ***\n");
            scanf("%d", &i);

            if (i > r)
            {
                printf("  Number You Enter Is Bigger Than Random Number \n"); /* code */
            }
            else if (i < r)
            {
                printf("  Number You Enter Is Smaller Than Random Number \n"); /* code */
            }

            else
            {
                printf("  Total Attempt You Guessing Number  : = %d\n", k);
            }

            k++;


        }
        while (i != r);
        printf(" **** Congrats You WIN ****\n");


    }
    else if(y==0)
    {

        printf(" ******** Thank You For Playing : ********\n");
    }
    else
    {
        printf(" ******** Close Window : ********\n");
    }

    return 0;
}
