
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void printfWord(char []);

char words[20] = { 0 };

int main(){
	printf("Please enter a String: ");
	fgets(words,20,stdin);
	printfWord(words);
}

void printfWord(char words[]){
	int	x = strlen(words) - 1;
	printf("Output: "); 
	for(int i = 0;i < x;i++){
		if(words[x - i - 1] == ' '){
			break;
		}
		else {
			printf("%c",words[x - i - 1]);
		}
	}
}
