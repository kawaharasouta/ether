#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<sys/ioctl.h>
#include<arpa/inet.h>
#include<sys/socket.h>

//need to use datalink interface
#include<linux/if.h>
#include<net/ethernet.h>
#include<netpacket/packet.h>
#include<netinet/if_ether.h>

int InitRawSocket(char *device, int promiscFlag, int ipOnly){

}
