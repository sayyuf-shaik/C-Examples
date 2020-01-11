#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <netpacket/packet.h>
#include <net/ethernet.h>
#include <linux/if_ether.h>
#include <netinet/ip.h>
#include <linux/tcp.h>
int main ( void ) 
{

    int packet_socket;
   packet_socket =  socket ( AF_PACKET , SOCK_RAW , htons ( ETH_P_ALL ) );
   char *buf = NULL;
   buf = ( char * ) malloc ( sizeof(char) * 1522 );
   /*struct sockaddr_ll addr;
   addr.sll_family = AF_PACKET;
   addr.sll_addr = INADDR_ANY;
   addr.sll_halen = htons(1514); */
   if ( packet_socket == -1 ) {
       perror("socket");
       exit(0);
   }
  struct eth_hdr {
	unsigned char h_dest[6];
	unsigned char h_source[6];
        unsigned short h_proto;
  };
  struct eth_hdr *eth;

   struct ip_hdr {
	unsigned short ihl:4;
        unsigned short version:4;
        unsigned short tos:8;
	unsigned short tot_len;
        unsigned short id;
	unsigned short ttl:8;
	unsigned short protocol:8;
        unsigned short frag_off;
	unsigned short check;
	unsigned int saddr;
	unsigned int daddr;
};
   struct ip_hdr *ip;
  //struct tcp_hdr *tcp;
	
  while ( 1 ) {

    if (  recv ( packet_socket , buf , 1522 ,  0 ) == -1 ) {
      perror("recv");
      exit(1);
  } 


   eth = ( struct eth_hdr * ) buf;

   buf = ( buf + sizeof( struct eth_hdr ));
   ip = ( struct ip_hdr * ) buf;
   //tcp = ( struct tcphdr * ) ( buf + sizeof( struct iphdr ));
   printf("<------------------------------------------------------------------------------------->\n");
   printf("\n******ETHERNET HEADER*******\n");
   printf("dest mac  = %x:%x:%x:%x:%x:%x\n" , eth->h_dest[0] ,eth->h_dest[1],eth->h_dest[2],eth->h_dest[3],eth->h_dest[4],eth->h_dest[5]  );
   printf("source mac  = %x:%x:%x:%x:%x:%x\n" , eth->h_source[0] ,eth->h_source[1],eth->h_source[2],eth->h_source[3],eth->h_source[4],eth->h_source[5]  );
   printf ( "Packet Type = %x \n", eth->h_proto )  ;
   printf("\n******IP HEADER*******\n");
   printf("verson : %d\n" , ip->version); 
   printf("source ip :%s\n" , ( char * ) inet_ntoa ( ip->saddr ) );
   printf("dest ip :%s\n" , ( char * ) inet_ntoa ( ip->daddr ) );
   printf("type of service  : %x\n" ,(ip->tos)); 
   printf("header length: %x\n" , ip->ihl );
   printf("total length: %d\n", ip->tot_len);
   printf("identificion number: %d\n" , ip->id ); 
   printf("fragment offset: %d\n" , ip->frag_off ); 
   printf("ttl : %d\n" , ip->ttl );
   printf("protocol :%d\n" , ip->protocol );
   #if 0 

   /**** tcp header****/
   printf("\n******TCP HEADER*******\n");
   printf("source port = %d \n",ntohs ( tcp->source) ); 
   printf("dest port = %d\n",ntohs ( tcp->dest ) ); 
   printf("seq no = %d \n", ( tcp->seq ) ); 
   printf("acq no = %d \n", ( tcp->ack_seq) ); 
   printf("fin  = %d \n", ( tcp->fin )); 
   printf("syn  = %d \n", ( tcp->syn )); 
   printf("window  = %d ", ( tcp->window )); 
   printf("check  = %d \n", ( tcp->check )); 
   printf("urg_ptr  = %d \n", ( tcp->urg_ptr )); 
   #endif
   // printf("%s" , eth->h_dest[6] );
   printf("<------------------------------------------------------------------------------------->\n");

   }
   return 0;
}

   
   



