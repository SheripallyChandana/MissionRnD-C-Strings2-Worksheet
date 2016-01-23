/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

bool stringCompare(char* a, char* b, int n){
	
	while(n--){
		if(*a != *b)
			return *a - *b;
		else{			
			++a;
			++b;
		}		
	}	
    return 0;
}

int stringLength(char* array){
	
	int length;
	for(length = 0; array[length] != '\0'; ++length);
	return length;
}

int count_word_in_str_way_1(char *str, char *word){

	int count = 0;
	int length = stringLength(word);
	int overlap = 1;

	while(*str != '\0'){
		if(stringCompare(str++,word, length))
			continue;
		if(!overlap)
			str += length - 1;
		count++;
		
	}	
	return count;
}

int count_word_int_str_way_2_recursion(char *str, char *word){
	return 0;
}

