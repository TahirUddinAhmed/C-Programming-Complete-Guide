#include <stdio.h>

int main(){
	int sales;
	float comm;
	
	scanf("%d", &sales);
	
	if(sales <= 500){
		comm = sales * .05;
	}else if(sales <= 2000){
		comm = 35 + .01 * (sales - 500);
	}else if(sales > 2000 && sales <= 5000){
		comm = 185 + .12 * (sales - 2000);
	}else{
		comm = .125 * sales;
	}
	printf("Commision: %.2f", comm);
	return 0;
}