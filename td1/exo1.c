#include <unistd.h>
#include<stdio.h>

extern char **environ;

int main(int argc, char **argv) {
	#ifdef _POSIX_SOURCE
		printf("_POSIX_SOURCE=%d\n", _POSIX_SOURCE);
	#endif
	printf("login name max: %li\n", sysconf(_SC_LOGIN_NAME_MAX));
	
	while(*environ) {
		printf("%s\n", *environ);
		environ++;
	}
	return 0;
}
