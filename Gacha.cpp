#include <stdio.h>
#include <time.h>
#include <stdlib.h> 
void check(int num,int *SSR){
    printf(" %d -> ",num);
    if(num <= 11)
    {
        printf("!! SSR !!\n");
        *SSR = 1000;
    }
    else if(num > 11 && num <= 212)
        printf(" ! SR ! \n");
    else if (num > 212 && num < 1000)
        printf(" - R - \n");
}
int main(){
    int a ;
    int r = rand() % 100;
    int round = 500 + rand() % 500;
    int number ;
    int k ;
    while(1)
    {
        printf("ROUND : %d  >> ",round);
        k = 0;
        printf("Select Package [1/2] : ");
        scanf("%d",&k);
        rewind(stdin);
        if(k == 1) // 1 round
        {
            number = rand() % round;
            check(number , &round);
            round-= 2;
        }
        else if(k == 2) // 10 rounds
        { // อาจเพิ่มโอกาส เมื่อกดสุ่ม 10 รอบ
            for(int i = 0 ; i < 10 ; i++)
            {
                number = rand() % round;
                printf("%d : ",i+1);
                check(number , &round);
                round-= 5;
            }
        }
        printf("\n\n");
    }
    return 0;
}
