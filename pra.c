#include <stdio.h>
#include<math.h>

int main(){
int num,den,num1,num2,num3;

printf("Enter yevaina two integers:");
scanf("%d %d",&num,&den);

num1=num;
num2=den;

if (num1==0){
    printf("GCD is %d",num1);
    return 0;
}
else if (num2==0){
    printf("Not defined");
}
else {
    do {
        num3=num1%num2;
        num1=num2;
        num2=num3;
    }
    while (num2!=0);
}
printf("gcd is %d \n",num1);
printf("num is %d \n",num);
printf("den is %d \n",den);
printf("evfbhsjdb");
printf("Fraction is %d/%d\n",num/num1,den/num1);
    return 0;
}