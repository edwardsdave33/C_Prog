#include <stdio.h>
#include <stdlib.h>


int main(){

typedef enum {Wrong, Right} Test;

Test test = Wrong;

 struct sample {
    int value;
    struct sample *next;
};

typedef struct sample Samples;

Samples data;
data.value = 2; 



printf("%d\n",data.value);


}