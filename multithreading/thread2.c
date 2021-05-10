#include<pthread.h>
#include<unistd.h>//header file for sleep
#include<stdio.h>
#include<stdlib.h>

//passing argument to thread
void* myturn(void*ptr)
{
	int *local_int=(int*)ptr;
	for(int i=0;i<5;i++)
	{
		sleep(1);
		printf("\nmy trun %d and data: %d ",i,*local_int);
		(*local_int)++;//incriment thread value
	}
	return NULL;
}
void* yourturn()
{
	int *ip=(int*)malloc(sizeof(int));
	*ip=3;
	for(int i=0;i<5;i++)
	{
		sleep(2);
		printf("\nYour turn %d and *ip: %d",i,*ip);
		(*ip)++;
	}
	return ip;
}

int main()
{
	pthread_t pt1;
	//pt identify thread in system
	/*
	1)pointer to thread which is set by this function
	3)function to be executed for thread to be created
	*/
	
	int a=90;
	//passing &a to thread
	pthread_create(&pt1,NULL,myturn,&a);
	
	pthread_t pt2;
	pthread_create(&pt2,NULL,yourturn,NULL);
	
	//wait for specific thread to finish execution and then continue
	//thread join allow us to take a return value from function
	int result;
	pthread_join(&pt2,&result);
	printf("\nfinal result in main : %d",result);
	yourturn();


}
