#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "file1.h"

#define SIZE 104857600

static unsigned long arr[SIZE] = {0};

void amount_different(char *sstr){
    int current = 1;
    for(int i = 0; i < sizeof(sstr); ++i){
        if(sstr[i] == sstr[i+1])
            current++;
        else{
            arr[current]++;
            current = 1;
        }
    }
}


int maxinmum_lenth(){
    int lenth = 0, maximum = 0;
    for(int i = 0; i < SIZE; ++i){
        if(arr[i] > maximum){
            maximum = arr[i];
            lenth = i;
        }
    }
    return lenth;
}


char find_symbol(char* sstr, int lenth){
    int current = 1;
    char symb;
    for(int i = 0; i < sizeof(sstr); ++i){
        if(sstr[i] == sstr[i+1])
            current++;
        else{
            if(current == lenth){
                symb = sstr[i];
                return symb;
            }
            current = 1;
        }
    }
    return symb;
}


void print_ans(char symb, int lenth){
    for(int i = 0; i < lenth; ++i)
        printf("%c", symb);
}