#include <omp.h>
#include <stdio.h>

int main() {
	
	printf("Hello 2017BTECS00028! executed by Thread %d\n",omp_get_thread_num());

	return 0;
}
