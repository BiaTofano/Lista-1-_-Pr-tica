#include <stdio.h>
#include <stdlib.h>

int main(){

int a;

printf("Digite seu numero:");
scanf("%d", & a);

while (a>10) {
        if(a%2==0){
    printf("%d pim\n", a);
        }


     if(a%3 ==0){
     printf("%d pam\n", a);
     }


       if((a%2==0) && (a%3==0)){
        printf("%d pimpam\n", a);
       }


    a++;

     }


return 0;
}

