#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted num
unsigned int binary_to_uint(const char *b){
    if(b = NULL ){
        return(0);
    }
    int i;
    unsigned int n = 0;
    unsigned int weight = 1;
    int len = strlen(b);

    for(i = len-1; i>=0; i--){
        if(b[i] != '0' && b[i] != '1')
                return (0);
        else{
            n = n + b[i]*weight;
            weight = weight * 2;
        }

    }
   return (n);


}
