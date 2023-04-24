#include <stdio.h>
#include <stdlib.h>
#include "1.c"
#include "2.c"

int main(){
    int z = 0, flag = 1;
    while(flag){
        printf("Оберіть завдання: ");
        scanf("%d", &z);
        switch (z)
        {
        case 1 :
            one();
            break;
        
        case 2 :
            two();
            break;
            
        default:
            printf("Введіть число від 0 до 4");
            break;
        }
    }
}