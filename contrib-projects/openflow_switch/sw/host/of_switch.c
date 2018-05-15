#include <fcntl.h>
#include <sys/ioctl.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "../../../../tools/lib/nf10_lib.c"
#include "reg_defines.h"

void print_IP(unsigned ip);

int main(){

    // printf("Attacker's IP:\t|       %x     | \n", regread(ATTACKER_IP));
    print_IP(regread(ATTACKER_IP));

}

void print_IP(unsigned ip)
{
  printf("%u.%u.%u.%u \n",
      ((ip>>24)&0xff), ((ip>>16)&0xff), ((ip>>8)&0xff), ((ip>>0)&0xff)
    );
}