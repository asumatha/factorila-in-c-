#include<stdio.h>
    int main (){
            int i,n,fact=1;
                printf("enter a number to find the factorial of the number  ");
                    scanf("%d",&n);
                    for(i=1;i<=n;i++){
                       
                        fact=fact*i;
                        
                    }printf("The factorial of the number %d is %d",n,fact);
                    return 0;

    }