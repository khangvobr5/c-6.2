#include <stdio.h>

int main() {
    int num; 
    printf("Nhap 5 so nguyên:\n");
    for (int i = 1; i <= 5; i++) {
        printf("So thu %d: ",i);
        scanf("%d",&num);
        if(num % 2 != 0){
        	printf("so le\n");
			}
        	else{
			printf("so chan\n");
			}
		
}
        return 0;
    }
