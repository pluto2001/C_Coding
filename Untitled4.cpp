#include<stdio.h>
 
int main()
{   
    int loop;
    int input;
    int i;
    int max;
     
    printf(" Enter number for loop : ");
    scanf("%d", &loop);
    printf("\n");
     
    for(i = 0; i < loop; i++)
    {
        printf(" Number #%d : ", i+1);
        scanf("%d", &input);
         
        if(i==0 || input > max)
        {
            max = input;
        }
    }
     
    printf("\n Maximum is %d\n\n", max);
     
    return 0;
}
