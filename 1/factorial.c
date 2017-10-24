#include<stdio.h> 

void FirstFactorial(int num) {
	printf("%d\n", num);
	printf("%d\n", fc(num)); 
}

int fc(int num)
{
	if (num > 1) {
		return num * fc(num-1);
	} else {
		return 1;
	}
}

int main(void) { 
	int num;
       	scanf("%d", &num);	
	FirstFactorial(num);
	return 0;
	          
}
