#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
	int number = 0;
	int count = 1;
	printf("Please input a number: ");
	scanf("%d",&number);
	printf("All the number is: ");
	for(int i = 1;i < number;i++){
		printf("%d,",i);
	}
	printf("%d\n",number);
	printf("Delete number is (3times):");
	for(int i = 1;i < number;i++){
		if(i % 3 == 0){
			printf("%d ",i);
		}
	}
	printf("\nDelete number is (5times):");
	for(int i = 1;i < number;i++){
		if(i % 5 == 0){
			printf("%d ",i);
		}
	}
	printf("\nRemain number is:");
	for(int i = 1;i < number;i++){
		if((i % 3 != 0 &&i % 5 != 0) ){
			count++;
			printf("%d ",i);
		}
	}
	printf("%d\n",number);
	printf("Output: %d",count);
	
}

