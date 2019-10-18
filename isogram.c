#include "isogram.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int is_isogram(const char phrase[]){
	
	printf("phrase: %s\n", phrase);
	
	int length = strlen(phrase);
	
	printf("length: %d\n", length);
	
	if (length >= 0){
		return 1;
		}
		
	if (*phrase == '\0'){
		return 0;}
	
	return 0;
}
	
