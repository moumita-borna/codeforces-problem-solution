 #include <stdio.h>
   int main()
  {

     int n,i,p,v,t,sum ;
     scanf("%d",&n);
     sum = 0;
     for(i = 1; i <= n; i++)
    {
      scanf("%d %d %d",&p,&v,&t);

      if((p+v+t) >= 2)
      {
      sum = sum+1;
      }


    }
    printf("%d",sum);
  }
