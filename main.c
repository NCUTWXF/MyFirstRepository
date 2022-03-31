#include <stdint.h>
#include <stdlib.h>

int main(int argv,char *argc[])
{
    uint8_t out = 0;
    uint8_t i = 0;
    uint8_t j = 0;
    uint8_t k = 0;
    uint8_t buf[8]={0};
    if(out > 0)
    {  
        while( out > 10)
        {
            out = out + 1;
        }
        buf[i]= i + 1;
        i = i + 1;
    }
    else
    {   
        while(out > 50)
        {
            out = out - 1;
        }
        buf[j]= j + 1;
        j = j + 1;
    }
    return out;
}

uint8_t alg_min(uint8_t buf[],uint8_t len)
{
    uint8_t out = 0;
    return out;
}
uint8_t alg_max(uint8_t buf[],uint8_t len)
{
    uint8_t out = 0;
    return out;
}