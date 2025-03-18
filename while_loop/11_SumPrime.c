#include<stdio.h>
void main ()
{
    int i =1,factoril =0,n,sum = 0,k;
    printf("Enter your number");
    scanf("%d",&n);
    k=n;
    while(i<=n) {
        if(n % i ==0) {
            factoril+=1;
        }
        i++;

        while(k!=0) {
            sum += k%10;
            k/=10;
        }


    }

    if (factoril == 2) {
        printf("%d is prime number\t",n);
        printf("%d\n\n",sum);

    }

    else {
        printf("%d is not prime number\t ",n);
    }

}
