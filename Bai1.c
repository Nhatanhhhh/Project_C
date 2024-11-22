#include <stdio.h>
#include <math.h>

int factorial(int n){
    if(n == 0)
        return 1;
    else
        return n * factorial(n-1);
}

int isStrongNumber(int num){
    int originalNum = num;
    int sumOffact = 0;
    while (num>0)
    {   
        int lastDigit = num % 10;
        sumOffact += factorial(lastDigit);
        num /= 10;
    }
    
    if(sumOffact == originalNum)
        return 1;
    else
        return 0;
}

int main(){
    int iNum;
    printf("Enter a Positive Number: ");
    scanf("%d", &iNum);

    if (isStrongNumber(iNum))
    {
        printf("1");
    }else
    {
        printf("0");    
    }
    return 0;
}
