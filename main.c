#include <stdio.h>
#include <stdlib.h>
#ifdef _WIN32
	#include <windows.h>
#else
	#include <unistd.h>
#endif

int main() {
	int* hour = (int*) malloc(sizeof(int));
	int* min = (int*) malloc(sizeof(int));
	int* sec = (int*) malloc(sizeof(int));

	*hour = 0;
	*min = 0;
	*sec = 0;


	return 0;
}
