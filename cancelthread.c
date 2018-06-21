#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

void * readfromserver();
void * readfromkeyboard();
pthread_t th1,th2;

int main(){
   
    puts("creating ...");
    pthread_create(&th1,NULL,readfromserver,NULL);
    pthread_create(&th2,NULL,readfromkeyboard,NULL);
    while(1) 
		;
	return 0;
}
//=================
void * readfromserver(){
	while(1)
		puts("Reading from Server");
}
//=================
void * readfromkeyboard(){
	pthread_cancel(th1);
	while(1)
		puts("Reading from keyboard");
}
