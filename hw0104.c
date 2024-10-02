#include<stdio.h>
#include<stdint.h>

int main(){
    int16_t c1_num,c2_num,c3_num,c4_num,c5_num,c1,c2,c3,c4,c5,temp,min=54,max=0;
    printf("Please enter 5 cards:");
    scanf("%hd %hd %hd %hd %hd",&c1,&c2,&c3,&c4,&c5);
    if(c1==c2 || c1==c3 || c1==c4 || c1 ==c5 || c2==c3 ||
            c2==c4 || c2==c5 || c3==c4 || c3==c5 || c4==c5){
        printf("Invild Number!!!\n");
    }
    else{
        c1-=1;
        c2-=1;
        c3-=1;
        c4-=1;
        c5-=1;
        c1_num = c1%13;
        c2_num = c2%13;
        c3_num = c3%13;
        c4_num = c4%13;
        c5_num = c5%13;
        if(c1<min){
            min= c1;
        }
        if(c2<min){
            min= c2;
        }
        if(c3<min){
            min= c3;
        }
        if(c4<min){
            min= c4;
        }
        if(c5<min){
            min= c5;
        }
        if(c1>max){
            max= c1;
        }
        if(c2>max){
            max= c2;
        }
        if(c3>max){
            max= c3;
        }
        if(c4>max){
            max= c4;
        }
        if(c5>max){
            max= c5;
        }
        if(c1_num>c2_num){
            temp = c1_num;
            c1_num = c2_num;
            c2_num = temp;
        }
        if(c2_num>c3_num){
            temp = c2_num;
            c2_num = c3_num;
            c3_num = temp;
        }
        if(c3_num>c4_num){
            temp = c3_num;
            c3_num = c4_num;
            c4_num = temp;
        }
        if(c4_num>c5_num){
            temp = c4_num;
            c4_num= c5_num;
            c5_num = temp;
        }
        if(c1_num>c2_num){
            temp = c1_num;
            c1_num = c2_num;
            c2_num = temp;
        }
        if(c2_num>c3_num){
            temp = c2_num;
            c2_num = c3_num;
            c3_num = temp;
        }
        if(c3_num>c4_num){
            temp = c3_num;
            c3_num = c4_num;
            c4_num = temp;
        }
        if(c1_num>c2_num){
            temp = c1_num;
            c1_num = c2_num;
            c2_num = temp;
        }
        if(c2_num>c3_num){
            temp = c2_num;
            c2_num = c3_num;
            c3_num = temp;
        }
        if(c1_num>c2_num){
            temp = c1_num;
            c1_num = c2_num;
            c2_num = temp;
        }

        temp = 0;
        if(c1>=0 && c5<52){
            temp += c1_num==c2_num;
            temp += c1_num==c3_num;
            temp += c1_num==c4_num;
            temp += c1_num==c5_num;
            temp += c2_num==c3_num;
            temp += c2_num==c4_num;
            temp += c2_num==c5_num;
            temp += c3_num==c4_num;
            temp += c3_num==c5_num;
            temp += c4_num==c5_num;


            if(temp==1){
                printf("One Pair\n");
            }
            else if(temp==2){
                printf("Two Pair\n");
            }
            else if(temp==3){
                printf("Three of a kind\n");
            }
            else if(temp==6){
                printf("Four of a kind\n");
            }
            else if((c5_num==c4_num+1 && c4_num==c3_num+1 && c3_num==c2_num+1 && c2_num==c1_num+1)
                        || (c1_num==0 && c2_num==9 && c3_num==10 && c4_num==11 && c5_num==12))
            {
                if(max<13){
                    printf("Straight Flush\n");
                }
                else if(min>=13 && max<26){
                    printf("Straight Flush\n");
                }
                else if(min>=26 &&max<39){
                    printf("Straight Flush\n");
                }
                else if(min>=39){
                    printf("Straight Flush\n");
                }
                else{
                    printf("Straight\n");
                }
            }
            else if(c5<=13){
                printf("Flush\n");
            }
            else if(c1>13 && c5<=26){
                printf("Flush\n");
            }
            else if(c1>26 &&c5<=39){
                printf("Flush\n");
            }
            else if(c1>39){
                printf("Flush\n");
            }
            else{
                printf("High Card\n");
            }
        }
        else{
            printf("Invild Number!!!\n");
        }
    }
}