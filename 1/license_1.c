#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
        if(argc==2) {
		printf("Checking License: %s\n", argv[1]);
		if(strcmp(argv[1], "NOOB{STrINGS_ARE_BASIC}")==0) {
			printf("you found the flag!\n");
		} else {
			printf("hey dude be wise!\n");
		}
	} else {
		printf("Usage: <flag>\n");
	}
	return 0;
}
