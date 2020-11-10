//Write a C Program to find seed of a number. A number X is said to be ‘seed’ of a number Y if multiplying X by its digits equates to Y. For example, 123 is a seed of 738 coz 123*1*2*3 = 738.
#include<stdio.h>
void main()
{   int num,trial_seed,j,k,remainder,seed_product=1,trial_num,flag=1;
    printf("Enter a number\n");
    scanf("%d",&num);
   printf("%d",num);
    for(trial_seed=1;trial_seed<num;trial_seed++)
    {    j=trial_seed;
    printf("%d\n",trial_seed);

        seed_product=1;
       while(j>=1)
       {   printf("%d\t",j);
           remainder=j%10;
           j=j/10;
           seed_product=seed_product*remainder;
       }
        printf("new seed try \t");

        trial_num=seed_product*trial_seed;
        printf("%d\t%d\t",seed_product,trial_num);
        if(trial_num==num)
        {flag=0;
         break;}
    }
    if(flag==0)
        printf("\n \n The seed is %d",trial_seed);
    else
        printf("\n \n No seed exists");
}
