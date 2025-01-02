#include<stdio.h>
void main ()
{
    int i =1,factoril =0,n,sum = 0;
    printf("Enter your number");
    scanf("%d",&n);
    while(i<=n){
        if(n % i ==0){
        factoril++;        
        }
        
    i++;
    }

    if (factoril == 2){
        printf("%d is prime number\t",n);
    }

    else{
        printf("%d is not prime number\t ",n);
    }
    
    while(n!=0)
    {
        sum +=n%10;
        n/=10;
    }
    printf("%d",sum);
}
