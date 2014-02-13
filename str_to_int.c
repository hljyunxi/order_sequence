#include "str_to_int.h"

int32_t str_to_int(unsigned char * str){
    uint32_t ret = 0;
    int negative = 0;

    if(*str=='-'){
        negative = 1;
        str++;
    }

    while(*str){
        ret = ret*10 + (*str-'0');
        str++;
    }
    
    return negative?(int32_t)-ret:(int32_t)ret;
}

int main(){
    printf("%d", str_to_int("-1000"));
    return 0;
}
