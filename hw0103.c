#include<stdio.h>
#include<stdint.h>

int main(){
    
    uint32_t  num_10=0,num_8=0,num_8r=0,temp=0,place_10=0,place_8=0;
    printf("Please enter an unsigned 16-bits number:\n");
    scanf("%u",&num_10);
    printf("Before Flip:\n");
    place_10=printf("%u",num_10);
    printf("_10 = ");
    place_8=printf("%o_8\n",num_10)-3;
    switch (place_10)
    {
        case 1:
            temp = num_10 % 8;
            num_10 /= 8;
            num_8 += temp;
            temp = num_10 % 8;
            num_8 += temp*10;
            break;
        case 2:
            temp = num_10 % 8;
            num_10 /= 8;
            num_8 += temp;
            temp = num_10 % 8;
            num_10 /= 8;
            num_8 += temp*10;
            temp = num_10 % 8;
            num_10 /= 8;
            num_8 += temp*100;
            break;
        case 3:
            temp = num_10 % 8;
            num_10 /= 8;
            num_8 += temp;
            temp = num_10 % 8;
            num_10 /= 8;
            num_8 += temp*10;
            temp = num_10 % 8;
            num_10 /= 8;
            num_8 += temp*100;
            temp = num_10 % 8;
            num_10 /= 8;
            num_8 += temp*1000;
            break;
        case 4:
            temp = num_10 % 8;
            num_10 /= 8;
            num_8 += temp;
            temp = num_10 % 8;
            num_10 /= 8;
            num_8 += temp*10;
            temp = num_10 % 8;
            num_10 /= 8;
            num_8 += temp*100;
            temp = num_10 % 8;
            num_10 /= 8;
            num_8 += temp*1000;
            temp = num_10 % 8;
            num_10 /= 8;
            num_8 += temp*10000;
            break;
        case 5:
            temp = num_10 % 8;
            num_10 /= 8;
            num_8 += temp;
            temp = num_10 % 8;
            num_10 /= 8;
            num_8 += temp*10;
            temp = num_10 % 8;
            num_10 /= 8;
            num_8 += temp*100;
            temp = num_10 % 8;
            num_10 /= 8;
            num_8 += temp*1000;
            temp = num_10 % 8;
            num_10 /= 8;
            num_8 += temp*10000;
            temp = num_10 % 8;
            num_10 /= 8;
            num_8 += temp*100000;
            break;
    }
    switch (place_8)
    {
        case 1:
            num_8r = num_8;
            break;
        case 2:
            temp = num_8 % 10;
            num_8r += temp*10;
            num_8 /= 10;
            temp = num_8 % 10;
            num_8r += temp;
            break;
        case 3:
            temp = num_8 % 10;
            num_8r += temp*100;
            num_8 /= 10;
            temp = num_8 % 10;
            num_8r += temp*10;
            num_8 /= 10;
            temp = num_8 % 10;
            num_8r += temp;
            break;
        case 4:
            temp = num_8 % 10;
            num_8r += temp*1000;
            num_8 /= 10;
            temp = num_8 % 10;
            num_8r += temp*100;
            num_8 /= 10;
            temp = num_8 % 10;
            num_8r += temp*10;
            num_8 /= 10;
            temp = num_8 % 10;
            num_8r += temp;
            break;
        case 5:
            temp = num_8 % 10;
            num_8r += temp*10000;
            num_8 /= 10;
            temp = num_8 % 10;
            num_8r += temp*1000;
            num_8 /= 10;
            temp = num_8 % 10;
            num_8r += temp*100;
            num_8 /= 10;
            temp = num_8 % 10;
            num_8r += temp*10;
            num_8 /= 10;
            temp = num_8 % 10;
            num_8r += temp;
            break;
        case 6:
            temp = num_8 % 10;
            num_8r += temp*100000;
            num_8 /= 10;
            temp = num_8 % 10;
            num_8r += temp*10000;
            num_8 /= 10;
            temp = num_8 % 10;
            num_8r += temp*1000;
            num_8 /= 10;
            temp = num_8 % 10;
            num_8r += temp*100;
            num_8 /= 10;
            temp = num_8 % 10;
            num_8r += temp*10;
            num_8 /= 10;
            temp = num_8 % 10;
            num_8r += temp;
            break;
    }
    printf("After Flip:\n");
    printf("%u_8 = ",num_8r);
    num_8 = 0;
    num_10 = 0;
    switch (place_8)
    {
        case 1:
            num_10 = num_8r;
            break;
        case 2:
            temp = num_8r % 10;
            num_8r /= 10;
            num_10 += temp;
            temp = num_8r % 10;
            num_8r /= 10;
            num_10 += temp*8;
            break;
        case 3:
            temp = num_8r % 10;
            num_8r /= 10;
            num_10 += temp;
            temp = num_8r % 10;
            num_8r /= 10;
            num_10 += temp*8;
            temp = num_8r % 10;
            num_8r /= 10;
            num_10 += temp*64;
            break;
        case 4:
            temp = num_8r % 10;
            num_8r /= 10;
            num_10 += temp;
            temp = num_8r % 10;
            num_8r /= 10;
            num_10 += temp*8;
            temp = num_8r % 10;
            num_8r /= 10;
            num_10 += temp*64;
            temp = num_8r % 10;
            num_8r /= 10;
            num_10 += temp*512;
            break;
        case 5:
            temp = num_8r % 10;
            num_8r /= 10;
            num_10 += temp;
            temp = num_8r % 10;
            num_8r /= 10;
            num_10 += temp*8;
            temp = num_8r % 10;
            num_8r /= 10;
            num_10 += temp*64;
            temp = num_8r % 10;
            num_8r /= 10;
            num_10 += temp*512;
            temp = num_8r % 10;
            num_8r /= 10;
            num_10 += temp*4096;
            break;
        case 6:
            temp = num_8r % 10;
            num_8r /= 10;
            num_10 += temp;
            temp = num_8r % 10;
            num_8r /= 10;
            num_10 += temp*8;
            temp = num_8r % 10;
            num_8r /= 10;
            num_10 += temp*64;
            temp = num_8r % 10;
            num_8r /= 10;
            num_10 += temp*512;
            temp = num_8r % 10;
            num_8r /= 10;
            num_10 += temp*4096;
            temp = num_8r % 10;
            num_8r /= 10;
            num_10 += temp*32768;
            break;
    }
    printf("%u_10\n",num_10);
    return 0;
}