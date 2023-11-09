#include<stdio.h>
int main(){
	float salary;
	int dayReality;
	scanf("%f %d",&salary,&dayReality);
	if(dayReality>26){
		salary=salary*(dayReality-26)*1.5/26+ salary;
	}else{
		salary=salary*dayReality/26;
	}
	printf("Luong la: %f",salary);
	return 0;
}
