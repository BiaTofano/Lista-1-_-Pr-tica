 #include <stdio.h>
    #include <stdlib.h>

    int main (){

        int a;
        int b;

        printf("digite um numero inteiro e positivo");
        scanf("%d" , &a);

    b = 2;

        while(b < a){

        if (a%b == 0){
    printf("%d nao e primo", a);
    break;

    }

    b++;

    }

    if(b == a){

        printf("%d e primo",a);
    }
    return 0;
    }
