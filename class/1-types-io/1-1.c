//
// Created by 86139 on 2023/9/22.
//
#include <stdio.h>
int main(void){
    int price;
    scanf("%d",&price);
    int fifty,twenty,ten,five,one;
    fifty=price/50;
    twenty=price%50/20;
    ten=price%50%20/10;
    five=price%10/5;
    one=price%5;
    printf("%d\n%d\n%d\n%d\n%d",fifty,twenty,ten,five,one);
}