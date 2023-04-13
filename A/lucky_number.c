#include<stdio.h>

int main(){
    int n; scanf("%d", &n);
    int number = n;
    int flag = 1;
    int ar2[14]={4 ,7 ,44 ,47 ,74 ,77 ,444 ,447 ,474 ,477 ,744 ,747 ,774 ,777};
    // int ar[1001];
    // int cnt = 0;
    // for(int i = 1; i<=1000; i++){
    //     int n = i;
    //     int flag = 1;
    //     while(n!=0){
    //         int temp = n%10;
    //         if(temp!= 7 && temp!= 4){
    //             flag = 0;
    //             break;
    //         }
    //         n/=10;
    //     }
    //     (flag)? ar[cnt++]=i:0;
    // }
    // for(int i=0; i<14; i++){
    //     printf("%d ", ar2[i]);
    // }
    while(n!=0){
        int temp = n%10;
        // printf("%d\n", temp);
        if(temp!= 7 && temp!= 4){
            flag = 0;
            break;
        }
        n/=10;
    }

    if(flag) printf("YES\n");
    else{
        int flg = 0;
        for(int i=0; i<14; i++){
            // printf("i=> %d\n", ar2[i]);
            if(number%ar2[i]==0){
                // printf("Divisible\n");
                flg = 1;
                break;
            }
        }
        (flg)?printf("YES\n"):printf("NO\n");
    }

    return 0;
}