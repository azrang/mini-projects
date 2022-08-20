//azra rangwala
//deleting each char in s1 that matches in s2, squeeze function
#include<stdio.h>
#define MAXSIZE 50
void squeeze(char *s, char *t);
int main(void){
    char arrs[MAXSIZE], arrt[MAXSIZE];
    printf("enter string 1 ");
    scanf("%s", arrs);
    printf("enter string to compare ");
    scanf("%s", arrt);
    squeeze(arrs,arrt);
    printf("the resulting string is %s", arrs);

}
void squeeze(char *s, char *t){
    char *p1=s;
    for(; *s!='\0'; s++){
        char *p2 = t;
            for(; *p2!='\0'; p2++){
                if (*s == *p2)
                break;
            }
        if(*p2=='\0'){
            *p1 = *s;
            p1++;
        }
    }
    *s='\0';
    *p1='\0';
}
