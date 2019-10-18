#include "isogram.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int is_isogram(const char phrase[]){
	
	printf("phrase: %s\n", phrase);
	
	int length = strlen(phrase);
	
	if (strlen(phrase) == 0){
		return 1;
		}
		
	if (phrase == NULL){
		return 0;
		}
	int i;
	while ( i = 0; i < length; i++){
		printf("length %d\n", length);
		}
	
	return 0;
}
	
