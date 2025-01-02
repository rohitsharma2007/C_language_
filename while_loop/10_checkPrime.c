#include<stdio.h>
void main ()
{
    int i =1,factoril =0,n;
    printf("Enter your number");
    scanf("%d",&n);

    while(i<=n)
    {
        if(n % i ==0)
        {
            factoril++;        
        }
    i++;
    }

    if (factoril == 2){
        printf("%d is prime number",n);
    }

    else{
        printf("%d is not prime number ",n);
    }

}
