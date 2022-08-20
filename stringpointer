//azra rangwala
/* see if string t occurs at end of string s using pointers */
#define MAXSIZE 100
#include<stdio.h>
#include<string.h>
int strend(char *s, char *t);

int main(){
    char arrs[MAXSIZE];
    char arrt[MAXSIZE];
    printf("enter a word");
    //scanf("%s", arrs); 
    gets(arrs);
    printf("now enter a string that is part of that word");
    //scanf("%s", arrt); 
    gets(arrt);
    if(strend(arrs,arrt))  //no and!! address line of char which is consistent to type passed
        printf("this letter appears at the end of the word");
    else 
        printf("this letter does not appear at the end of the word");
}

int strend(char *s, char *t){
    //char *s= &arrs;
   // char *t= &arrt;
    int length1= strlen(t); //use s instead of arrs
    for (int i=1 ; i<=length1; i++){
        if (*(s+i-1)==*(t+i-1)){   //-1 bc of null character
            printf("hi");
            return 1;} 
        else 
            return 0;
    }
} 
