#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);

    if(a < 60){
        printf("F");
    }

    else if(a < 70){
        printf("D");
    }
    else if (a < 80){
        printf("C");
    }
    else if (a < 90){
        printf("B");
    }
    else{
        printf("A");
    }

    return 0;
}