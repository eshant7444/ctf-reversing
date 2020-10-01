#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
        if(argc==2) {
		printf("Checking key: %s\n", argv[1]);
                int sum = 0;
                for (int i = 0; i < strlen(argv[1]); i++) {
			sum+= (int)argv[1][i];	
		}
		if(sum==916) {
			printf("N");
			printf("O");
			printf("O");
			printf("B");
			printf("{");
			printf("f");
printf("u");
printf("N");
                         printf("_");
printf("m");
printf("4");
printf("K");
                         printf("1");
printf("n");
printf("G");
                          printf("_");
printf("R");
printf("E");
printf("V");
			printf("}");
		} else {
			printf("WRONG!\n");
		}
	} else {
		printf("Usage: <key>\n");
	}
	return 0;
}
