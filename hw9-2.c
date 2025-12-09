#include <stdio.h>
int main(){
    int a[3][3];
    int a_flip[3][3];
    int i, j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("You entered\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            a_flip[i][j] = a[i][2-j];
        }
    }
    printf("Output\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a_flip[i][j]);
        }
        printf("\n");
    }
return 0;
}