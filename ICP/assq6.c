#include<stdio.h>

int main(){
    int i,n,count=0;

    printf("Enter a number:");
    scanf("%d",&n);

    //repeatedly divide n by powers of 5 and update count
    for(i=5;n/i>=1;i*=5){
        count+=n/i;
    }
    printf("Trailing Zeroes=%d",count);
    return 0;
}
