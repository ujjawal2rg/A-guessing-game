#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    char name[100];

    printf("Enter you name:\n");

    scanf("%s", &name);

    printf("Lets Play WelCome !: %s\n",name);
    printf("****Play A guessing game****\n ");




    int i, r, j = 1;
    srand(time(0));
    r = rand()%100 +1;
    //printf("the RandoM Number is : %d\n",r);//

    do
    {

        printf("***Enter Number Between 10 to 100 ***\n");
        scanf("%d", &i);

        if (i > r)
        {
            printf("Number You Enter Is Bigger Than Random Number \n"); /* code */
        }
        else if (i < r)
        {
            printf("Number You Enter Is Smaller Than Random Number \n"); /* code */
        }

        else
        {
            printf("Total Attempt You Guessing Number : = %d\n", j);
        }

        j++;


    }
    while (i != r);

    printf("***Congrats You WIN ****\n");

    return 0;
}
