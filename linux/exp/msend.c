/*msg_queue implementaion*/
#include <stdio.h>
#include <mqueue.h>
#include <time.h>
#include <stdlib.h>
#define QUEUE_NAME "/que_buf"
#define MAX_MESSAGES 5
#define MAX_MSG_SIZE 250
#define QUEUE_PER 0660

int main(void)
{
	mqd_t queue1;
	int status;
	char *msg_buf;

/*	struct mq_attr attr;

	attr.mq_flags = 0;
	attr.mq_maxmsg = MAX_MESSAGES;
	attr.mq_msgsize = MAX_MSG_SIZE;
	attr.mq_curmsgs = 0;
*/
	/*to open msg queue*/
/*	if((queue1 = mq_open (QUEUE_NAME,O_RDWR | O_CREAT, QUEUE_PER , &attr)) == -1) {
		printf("Queue creation failed not opened \n");
		exit(EXIT_FAILURE);
	}
*/


	msg_buf = (char *) malloc (sizeof(char) * MAX_MSG_SIZE);	

	/*open message queue*/
	queue1 = mq_open(QUEUE_NAME,O_WRONLY);
	printf("Enter msg to be send\n");

	if(fgets(msg_buf,MAX_MSG_SIZE,stdin) == NULL ) {
		printf("Fgets failed\n");
		exit(EXIT_FAILURE);
	}

	/* send*/
    if( (status = mq_send(queue1,msg_buf,MAX_MSG_SIZE,0) ) == -1 ) {
        perror("error");
        exit(EXIT_FAILURE);
    }
	printf("Sent message is : %s\n",msg_buf);

	status = mq_close(queue1);
	if(status == -1) {
		perror("message queue failed to close\n");
		exit(EXIT_FAILURE);
	}
	return 0;
}

