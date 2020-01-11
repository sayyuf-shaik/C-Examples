#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <stdlib.h>                                                             
#include <fcntl.h>                                                              
#include <sys/types.h>                                                          
#include <unistd.h>                                                             
#include <sys/syscall.h>                                                        
#include <pthread.h>
extern void *print_file( void *p );
FILE *fp;
FILE *fp1;
#define BUF 256
