#include<stdio.h>
#include<stdint.h>

int main(){
    double temp_F=0;
    int32_t n_h_in;
    int32_t n_h,n_i,n_ui,n_f,n_2_1=0,n_2_2=0,n_2_3=0,n_2_4=0,mode=0,temp,sign,exp=0;
    printf("Please input a hex:");
    scanf("%x",&n_h_in);
    printf("Please choose the output type(1:integer ,2:unsigned integer ,3:float):");
    scanf("%d",&mode);
    n_h = n_h_in;

    temp = n_h % 2;
    n_2_1 += temp;
    n_h /= 2;
    temp = n_h % 2;
    n_2_1 += temp*10;
    n_h /= 2;
    temp = n_h % 2;
    n_2_1 += temp*100;
    n_h /= 2;
    temp = n_h % 2;
    n_2_1 += temp*1000;
    n_h /= 2;

    temp = n_h % 2;
    n_2_2 += temp;
    n_h /= 2;
    temp = n_h % 2;
    n_2_2 += temp*10;
    n_h /= 2;
    temp = n_h % 2;
    n_2_2 += temp*100;
    n_h /= 2;
    temp = n_h % 2;
    n_2_2 += temp*1000;
    n_h /= 2;

    temp = n_h % 2;
    n_2_3 += temp;
    n_h /= 2;
    temp = n_h % 2;
    n_2_3 += temp*10;
    n_h /= 2;
    temp = n_h % 2;
    n_2_3 += temp*100;
    n_h /= 2;
    temp = n_h % 2;
    n_2_3 += temp*1000;
    n_h /= 2;

    temp = n_h % 2;
    n_2_4 += temp;
    n_h /= 2;
    temp = n_h % 2;
    n_2_4 += temp*10;
    n_h /= 2;
    temp = n_h % 2;
    n_2_4 += temp*100;
    n_h /= 2;
    temp = n_h % 2;
    n_2_4 += temp*1000;
    n_h /= 2;

    
    if(mode==1){
        printf("Binary of %X is: %.4d %.4d %.4d %.4d\n",n_h_in,n_2_4,n_2_3,n_2_2,n_2_1);
        printf("Converted integer is: %hd\n",n_h_in);
    }
    else if(mode==2){
        printf("Binary of %X is: %.4d %.4d %.4d %.4d\n",n_h_in,n_2_4,n_2_3,n_2_2,n_2_1);
        printf("Converted unsigned integer is: %u\n",n_h_in);
    }
    else if(mode==3){
        printf("Binary of %X is: %.4d %.4d %.4d %.4d\n",n_h_in,n_2_4,n_2_3,n_2_2,n_2_1);
        temp=0;
        temp = n_2_4 % 10;
        exp += temp*4;
        n_2_4 /= 10;
        temp = n_2_4 % 10;
        exp += temp*8;
        n_2_4 /= 10;
        temp = n_2_4 % 10;
        exp += temp*16;
        n_2_4 /= 10;
        temp = n_2_4 % 10;
        sign = temp;
        n_2_4 /= 10;

        temp = n_2_3 % 10;
        temp_F += (double)temp * 0.25;
        n_2_3 /= 10;
        temp = n_2_3 % 10;
        temp_F += (double)temp * 0.5;
        n_2_3 /= 10;
        temp = n_2_3 % 10;
        exp += temp;
        n_2_3 /= 10;
        temp = n_2_3 % 10;
        exp += temp*2;
        n_2_3 /= 10;

        temp = n_2_2 % 10;
        temp_F += (double)temp * 0.015625;
        n_2_2 /= 10;
        temp = n_2_2 % 10;
        temp_F += (double)temp * 0.03125;
        n_2_2 /= 10;
        temp = n_2_2 % 10;
        temp_F += (double)temp * 0.0625;
        n_2_2 /= 10;
        temp = n_2_2 % 10;
        temp_F += (double)temp * 0.125;
        n_2_2 /= 10;

        temp = n_2_1 % 10;
        temp_F += (double)temp * 0.0009765625;
        n_2_1 /= 10;
        temp = n_2_1 % 10;
        temp_F += (double)temp * 0.001953125;
        n_2_1 /= 10;
        temp = n_2_1 % 10;
        temp_F += (double)temp * 0.00390625;
        n_2_1 /= 10;
        temp = n_2_1 % 10;
        temp_F += (double)temp * 0.0078125;
        n_2_1 /= 10;
        if(exp==31){
            if(temp_F!=0){
                printf("Converted float is: NAN\n");
            }
            else if(sign==0 && temp_F==0){
                printf("Converted float is: +∞\n");
            }
            else if(sign==1 && temp_F==0){
                printf("Converted float is: -∞\n");
            }
        }
        else if(exp==0 && temp_F==0){
            if(sign==0){
                printf("Converted float is: +0\n");
            }
            else if (sign==1){
                printf("Converted float is: -0\n");
            }
            
        }
        else if(sign==1){
            printf("Converted float is: -%f*2^%d\n",temp_F+1,exp-15);
        }
        else if(sign==0){
            printf("Converted float is: %f*2^%d\n",temp_F+1,exp-15);
        }
        
        
    }
    else{
        printf("Invalid Input!!!\n");
    }
    
    return 0;
}