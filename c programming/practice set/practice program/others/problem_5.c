/*

draw this structure using loop
   *
  ***
 *****
for a=3
*/

#include <stdio.h>

int main(){
    int a;
    printf("Enter the value:");
    scanf("%d",&a);
    for(int i=1; i<=a; i++){
        for (int j=1; j<=(a-i); j++){
            printf(" ");
        }
            for (int k=1; k<=(2*i)-1; k++){
                printf("*");
            }
            printf("\n");
        }
        
    
    return 0;
}