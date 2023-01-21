// Bismillahir Rahmanir Rahim
//https://codeforces.com/contest/677/problem/A

#include<stdio.h>
int main()
{
    int i, num_of_frnds,height_of_fence,height_of_frnds,sum;
    scanf("%d %d",&num_of_frnds,&height_of_fence);

    sum = 0;
    for(i = 1; i <= num_of_frnds; i++)
    {
        scanf("%d",&height_of_frnds);
        if(height_of_frnds <= height_of_fence)
        {
            sum = sum+1;
        }

        else
        {
            sum = sum+2;
        }
    }
    printf("%d",sum);

    return 0;
}


