//azra rangwala
//finding min and max using pointers

#include<stdio.h>
void minmax(int x[], int npts, int *max_ptr, int *min_ptr);
int main(){
    int length, max, min;
    int x[length];
    printf("how many numbers do you want in your array?");
    scanf("%d", &length);
    printf("enter %d numbers", length);
    for (int i=0; i<length; i++){
        scanf("%d", &x[i]);
    }
    minmax (x,length,&max,&min);
    printf("the max is %d and the min is %d", max, min);

}

void minmax(int x[], int npts, int *max_ptr, int *min_ptr){
    int i=0;
    min_ptr=x;
    max_ptr=x;
    for ( ; i<npts; i++){
        if (*min_ptr>*(min_ptr+i)){
            *min_ptr=* (min_ptr+i);
        }
        else if (*max_ptr<*(max_ptr+i)){
            *max_ptr= *(max_ptr+i);
        }
    }
}
