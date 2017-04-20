#include <stdio.h>

// Question 1
//copy the string into the second char
void stringCopy(char* in, char* out){
	while(*in){
		*out=*in;
		out++;
		in++;
	}
	*out = '\0';
}

// Question 2
//reverse string in place
void reverse(char* string, int size){
	for(int i = 0;i<size; i++){
		//how do you get the last char in a string?
		//(*string) = 
	}
}


int main(void) {
	// Question 1 test code
	char* string = "abcdef";
	char* str2 = malloc(sizeof(char)*7); 
	stringCopy(string, str2);
	printf(str2);
	
	// question 2 test code
	//I have to declare it as an array or C will not let me modify the 
	// String. 
	char string[5] = "abcde";
	reverse(string,5);
	printf(string);
	
	return 0;
}
