#include <stdio.h>

int main() {
    // Write C code here
    int i,j,rows;
    printf("Enter height of PYRAMID : \n");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;

    
    return 0;
}

//OutPut
/*Enter height of PYRAMID : 
4
* 
* * 
* * * 
* * * * */
