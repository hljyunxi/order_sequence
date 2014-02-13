#include <assert.h>
#include "int_to_str.h"

char * uint_to_str(uint32_t value, char buf[16]/*len>16*/, size_t *len){
    char * ret = buf + 15;

    assert(len);

    do{
        *--ret = '0' + value%10;
    }while(value/=10);
    
    *len = 16-(ret-buf);
    return ret;
}

char * int_to_str(int32_t value, char buf[16]/*len>16*/, size_t * len){
    if(value<0){
        char * ret = uint_to_str((uint32_t)(-value), buf, len);
        (*len)++;
        *(--ret) = '-';
        return ret;
    }
    return uint_to_str((uint32_t)value, buf, len);
}

int main(){
    char buf[17];
    size_t len;
    buf[16]='\0';
    printf("%s", int_to_str(1000, buf, &len));
    return 0;
}
