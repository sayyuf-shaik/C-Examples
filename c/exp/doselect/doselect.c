#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student {
    char *student_name;
    int roll_no;
    int marks;
};

int main ( void ) {
    int i;
    int j;
    int t;
    int flag;
    char *buf = NULL;
    buf = ( char * ) malloc ( sizeof(char)* 256 );
    char *ptr = NULL;
    scanf("%d",&t);
    __fpurge(stdin);

    struct student stu[t];
    struct student temp;
    for ( i = 0; i<t ;i++){
        stu[i].student_name = ( char *) malloc ( sizeof(char) * 256 );
    }
   
    for(i=0;i<t;i++) { 
    fgets(buf,256,stdin);
    //ptr = strtok(buf,",");
    strcpy ( stu[i].student_name , strtok(buf , "," ) );
    ptr = strtok(NULL,",");
    stu[i].roll_no = atoi ( ptr);
    if(ptr == NULL) {
        printf("null");
    }
    ptr = strtok(NULL,"\n");
    stu[i].marks = atoi ( ptr);
    }
    
    for ( i = 0;i < t ;i++ ) {
        for ( j = i + 1  ; j < t; j++ ) 
            if ( stu[i].marks < stu[j].marks ) {
                temp = stu[i];
                stu[i] = stu[j];
                stu[j] = temp;
            }
            else if ( stu[i].marks == stu[j].marks ) {
                if ( ( flag = strcasecmp( stu[i].student_name , stu[j].student_name ) ) > 0  ) {
                    temp = stu[i];
                    stu[i] = stu[j];
                    stu[j] = temp;
                }

                else if ( flag == 0 && ( stu[i].roll_no > stu[j].roll_no ) ) {
                     temp = stu[i];
                     stu[i] = stu[j];
                     stu[j] = temp;
                }
            }
            
    
    }

 
    for( i = 0 ;i < t ; i++ ) {
        printf("%s %d %d\n",stu[i].student_name,stu[i].roll_no,stu[i].marks);
    }
    return 0;

}
