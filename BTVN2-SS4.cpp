#include <stdio.h>
int main(){
    float a, b, c;
    printf("Nhap vao 3 canh cua tam giac: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            printf("la tam giac deu.");
        } 
		else if (a == b , b == c , a == c) {
            if (a*a + b*b == c*c , a*a + c*c == b*b , b*b + c*c == a*a) {
                printf("la tam giac vuong can.");
            } 
			else if {
                printf("la tam giac can.");
            }
        } 
		else (a*a + b*b == c*c , a*a + c*c == b*b , b*b + c*c == a*a) {
            printf("la tam giac vuong.");
        } 
		else{
            printf("la tam giac thuong.");
        }
    } 
	else{
        printf("Ba canh vua nhap khong phai la tam giac.");
    }
} 
