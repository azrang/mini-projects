//azra rangwala
//write a version of library function strcmp
#include<stdio.h>
int n;
int strngcmp(char *s, char *t, int n);
int main(){
    char arrs1[]="understanding";
    char arrs2[]= "no";
    char arrt1[]= "understood";
    char arrt2[]= "nope"; 
    printf("if arrs is %s and arrt is %s, then %d", arrs1,arrt1, strngcmp(arrt2, arrs2, 3));
}

int strngcmp(char *s, char *t, int n){

    int i;
    for(i=0; i<n && *s!='\0' && *t!='\0'; i++, s++,t++){        
        if (*s < *t)
            return -1; //if arrs<arrt
        else if (*s > *t)
            return 1;
    }
    if (*s=='\0' && *t!='\0' && i<n) //after hit null
        return -1;
    else if (*t=='\0' && *s!='\0' && i<n)
        return 1;
    else 
        return 0;
}
