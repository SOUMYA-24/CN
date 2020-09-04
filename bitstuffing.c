
#include <stdio.h>

int main()
{
    int flag[]={0,1,1,1,1,1,1,0};
    int n;
    scanf("%d",&n);
    int b[n];
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
        
    }
     for(int i=0;i<8;i++){
        printf("%d",flag[i]);
    }
    int count = 0;
    for(int i=0;i<n;i++){
        if(b[i] ==1){
            count++;
        }
        else{
            count = 0;
        }
        printf("%d",b[i]);
        if(count == 5){
            printf("0");
            count = 0;
        }
}
     for(int i=0;i<8;i++){
         printf("%d",flag[i]);
         
     }
     return 0;
}