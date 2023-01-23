#include <stdio.h>
   int main()
  {
     int i,n;

     scanf("%d",&n);

     char s[n];
     int sum1 = 0, sum2 = 0;

     scanf("%s",s);


    for(i = 0; i < n; i++)
   {

    if(s[i] == 'A')
    {
    sum1 = sum1+1;
    }
    else if(s[i] == 'D')
    {
    sum2 = sum2 + 1;
    }


  }

    if(sum1 > sum2)
    {
    printf("Anton");
    }

    else if(sum2 > sum1)
    {
    printf("Danik");
    }

    else
    {
    printf("Friendship");
    }
    return 0;

 }
