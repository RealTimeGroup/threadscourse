#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

void * threadfunc();

int main(){
    pthread_t th1;
    puts("creating ...");
    pthread_create(&th1,NULL,threadfunc,NULL);
	return 0;
}
//=================
void * threadfunc(){
    puts("I'm the new thread");
	pthread_exit(NULL);
}


