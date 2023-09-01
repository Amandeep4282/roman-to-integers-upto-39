#include <stdio.h>
#include <string.h>
int main()
{
    char user[10];
    for (int k = 0; k < 10; k++)
    {
    printf("Enter a roman number:   \n");
    gets(user);
    int length = strlen(user);
    int sum = 0;
    int temp=0;
    int counti=0,countv=0,countx=0;
    

        for (int i = 0; i < length; i++)
        {

            if (user[i] == 'i')
            {
                countv=0;
                countx=0;
                counti++;
                if (counti>3)
                {
                    printf("wrong input");
                    return 0;
                }
                
                if (user[i + 1] == 'v' || user[i + 1] == 'x')
                {
                    
                    temp--;
                }
                else
                {
                    sum += 1;
                }
            }

            else if (user[i] == 'v')
            {
                countv++;
                countx=0;
                counti=0;
                if (countv>1)
                {
                    printf("wrong input");
                    return 0;
                }
                sum += (5+temp);
            }

            else if (user[i] == 'x')
            {
                countv=0;
                countx++;
                counti=0;
                if (countx>3)
                {
                    printf("wrong input");
                    return 0;
                }
                sum += (10+temp);
            }
        }

        printf("It is:  %d\n", sum);
    }
}