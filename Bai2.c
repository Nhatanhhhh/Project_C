#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, lastnumber, firstnumber;

    scanf("%d", &n);

    lastnumber = n % 10;
    while (n>=10)
    {
        n /= 10;
    }
    firstnumber = n;
    printf("%d ", firstnumber);
    printf("%d", lastnumber);
}