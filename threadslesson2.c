#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

void * readfromserver();
void * readfromkeyboard();

int main(){
    pthread_t th1,th2;
    puts("creating ...");
    pthread_create(&th1,NULL,readfromserver,NULL);
    pthread_create(&th2,NULL,readfromkeyboard,NULL);
    sleep(0.1);
	return 0;
}
//=================
void * readfromserver(){
	while(1)
		puts("Reading from Server");
}
//=================
void * readfromkeyboard(){
	while(1)
		puts("Reading from keyboard");
}

	

