#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
	int number;
	int start = 0,end = 0;
	char words[100];
	printf("Enter a text: ");
	fgets(words,100,stdin);
	number = strlen(words);

	for(int i = 0;i < number;i++){
		if(words[i] == ' ' || words[i] == '.'){
			start = i;
			for(int j = start - 1;j >= end;j--){
				printf("%c",words[j]);
			}
			printf(" ");
			end = start;
		}
	}
	printf(".");
}

