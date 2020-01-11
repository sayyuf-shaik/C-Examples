/*process2 recive messages from message queue*/
#include <stdio.h>
#include <mqueue.h>
#include <stdlib.h>
#include <time.h>
#define QUEUE_NAME "/que_buf"
#define MAX_MESSAGES 5
#define MAX_MSG_SIZE 250
#define QUEUE_PER 0660

int main(void)
{
    mqd_t queue1;//handle
	mqd_t que_rec;
	int status;
    char *msg_buf;

	/*structure attr member initialization*/
    struct mq_attr attr;

    attr.mq_flags = 0;
    attr.mq_maxmsg = MAX_MESSAGES;
    attr.mq_msgsize = MAX_MSG_SIZE;
    attr.mq_curmsgs = 0;

	
	
	msg_buf = (char *) malloc (sizeof(char) * MAX_MSG_SIZE);

    /*to open msg queue*/
    if((queue1 = mq_open (QUEUE_NAME,O_RDONLY | O_CREAT, QUEUE_PER , &attr)) == -1) {
        perror("Queue creation failed not opened: \n");
        exit(EXIT_FAILURE);
    }

	/*recive from message queue*/
	/*if((que_rec = mq_receive(queue1,msg_buf,MAX_MSG_SIZE,NULL)) == -1) {
		printf("recive failed\n");
		 exit(EXIT_FAILURE);

	}
	*/

	/*timed recive*/
	if(( mq_receive(queue1,msg_buf,MAX_MSG_SIZE,NULL)) == -1) {
        perror("\n");
         exit(EXIT_FAILURE);

    }

	printf("Message received\n");
	printf("%s\n",msg_buf);//priniting recived message

	/*close message queue*/
	status = mq_close(queue1);
	 if(status == -1) {
        perror("message queue failed to close\n");
        exit(EXIT_FAILURE);
    }
	return 0;
}
