/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){

	if (str == NULL)
		return NULL;

	char *subStr;
	subStr = (char*)malloc(sizeof(char)* 100);
	int curr = -1;
	int prev = -1;

	for (int index = 0; str[index] != '\0'; ++index){
		if (str[index] == ' ' && str[index + 1] != ' ' && str[index + 1] != '\0'){
			prev = curr;
			curr = index;
		}
	}

	int k = 0;
	for (int index = curr + 1; str[index] != '\0'; ++index, ++k){
		if (str[index] == ' ')
			break;
		subStr[k] = str[index];
	}
	subStr[k] = '\0';

	return subStr;
}
