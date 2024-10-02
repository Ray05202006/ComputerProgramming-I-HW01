#include<stdio.h>
#include<stdint.h>

int main(){
	int32_t x=-1,y=-1,z=-1,fir3=-1,fir1=-1,sec2=-1,sum=-1,temp=0;
	printf("Please enter the first\toperand:\n");
	scanf("%dx%d",&fir3,&fir1);
	if(fir3>9 || fir3<0 || fir1>9 || fir1<0){
		printf("INVALID INPUT!!!\n");
		return 0;
	}
	printf("Please enter the second\toperand:\n");
	scanf("\ny%dz",&sec2);
	if(sec2>9 || sec2<0){
		printf("INVALID INPUT!!!\n");
		return 0;
	}
	printf("Please enter the sum\t       :\n");
	scanf("\n%d",&sum);
	if(sum>1998 || sum<0){
		printf("INVALID INPUT!!!\n");
		return 0;
	}

	if(fir1>sum%10){	//borrow
		z = 10+sum%10-fir1;
		temp = (sum/10)%10-1;
	}
	else{
		z = sum%10-fir1;
		temp = (sum/10)%10;
	}
	if(sec2>temp){			//borrow
		x = 10+temp-sec2;
		temp = (sum/100)-1;
	}
	else{
		x = temp-sec2;
		temp = sum/100; 
	}
	if(fir3<=temp){
		y = temp - fir3;
		printf("Ans: x = %d, y = %d, z = %d\n",x,y,z);
	}
	else{
		printf("INVALID INPUT!!!\n");
	}
	
	return 0;
}
