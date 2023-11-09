#include<stdio.h>

int main(){
	int oldindex, newindex, price, money;
	scanf("%d %d",&oldindex,&newindex);
	int number= newindex - oldindex;
	if(number<50){
	  price=10000;	
	}
	else if (number<100){
		price=15000;
	}
	else if(number<150){
		price=20000;
	}
	else if(number<200){
		price = 25000;
	}
	else{
		price = 30000;
	}
	money = number * price;
	printf("Gia tien dien la: %d VND",money);	
}
