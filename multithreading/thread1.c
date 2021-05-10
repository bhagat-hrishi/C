#include<pthread.h>
#include<unistd.h>//header file for sleep
#include<stdio.h>
void* myturn(void*ptr)
{
	for(int i=0;i<5;i++)
	{
		sleep(1);
		printf("\nmy trun %d",i);
	}
	return NULL;
}
void yourturn()
{
	for(int i=0;i<5;i++)
	{
		sleep(2);
		printf("\nYour turn %d",i);
	}
}

int main()
{
	pthread_t pt;
	//pt identify thread in system
	/*
	1)pointer to thread which is set by this function
	3)function to be executed for thread to be created
	*/
	
	pthread_create(&pt,NULL,myturn,NULL);
	
	//wait for specific thread to finish execution and then continue
	pthread_join(&pt,NULL);
	yourturn();


}
