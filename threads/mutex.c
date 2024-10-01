#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int counter = 0;
pthread_mutex_t   lock;

void *increment_counter(void *arg) {
int tid = *(int *) arg;
printf("Thread started\n");
	if(pthread_mutex_lock(&lock) ==0)
	{

    // Crit1000000ical section starts
    int i;
    for (i = 0; i < 1000000; i++) {
        counter++;
		//printf("%d Thread, %d Counter\n", tid, counter);
    }
    // Critical section ends

    pthread_mutex_unlock(&lock);
    return NULL;
	}
}

int main() {
    pthread_t thread1, thread2;

    // Initialize the mutex
    if (pthread_mutex_init(&lock, NULL) != 0) {
        printf("Mutex init failed\n");
        return 1;
    }

	int t1 = 1, t2 = 2;
    // Create threads
    pthread_create(&thread1, NULL, increment_counter, (void*)&t1);
    pthread_create(&thread2, NULL, increment_counter, (void*)&t2);

    // Wait for threads to finish
    pthread_join(thread1, NULL);
	printf("Thread 1 finished\n");
    pthread_join(thread2, NULL);
	printf("Thread 2 finished\n");

    // Destroy the mutex
    pthread_mutex_destroy(&lock);

    printf("Final counter value: %d\n", counter);

    return 0;
}


