#include <stdio.h>
#include <stdlib.h>

int main (int count, char* arg[ ]) {
    int i;
    for(i=count; i>1; i--){
		if(i==count){
			printf("%s", arg[i-1]);
        }
        else
			printf(" %s", arg[i-1]);
	}
printf("\n");
return 0;
}
