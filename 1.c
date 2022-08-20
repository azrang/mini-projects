//azra rangwala
//determine if machine is little endian or big endian

#include<stdio.h>
int main(){
    int p=298; //0x0000012A
    int *ip= &p;
    char *cp= (char *)ip;
    printf("the value that it points to is %d\n", *cp);
    printf("moving one byte over, the pointer points to %d\n",*(cp+1) );
    printf("In my machine, the pointer first points to 42. \n"); 
    printf("When it moves over the pointer points to 1. My machine is little endian\n");
    return 0;
    }