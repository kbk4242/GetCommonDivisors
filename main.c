#include <stdio.h>
 
void printfUsage()
{
	printf("./get_common_divisor number\n");
}

int main(int argc, char *argv[])
{
    int i, j;

    int nNumber =0;


    if(argc != 2) {
        printfUsage();
        return 0;
	}

    nNumber = atoi(argv[1]);

    printf("Common Divisor(s) of  %d \n", nNumber); 
 
    for(i = 1 ; i <= nNumber; i++) {
        if((nNumber % i) == 0){
            printf("%d ", i);
        }
    } 
 
    printf("\n");
    return 0;
}

