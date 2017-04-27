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
	char* end = string + size - 1;
	while(string < end){
		char temp = *string;
		*string = *end;
		*end = temp;
		string++;
		end--;
	}
}
// Question 3
// number of occurrences of a given letter in a given string
int count(char* string, char letter){
	int numLetter = 0;

	while(*string){
		if(*string == letter){
			numLetter++;
			*string++;
		} else{
			*string++;
		}
	}
	return numLetter;
}

// Question 4
// print contents of an array of ints with tabs between elements
void printArray(int array[], int size){
	for(int i = 0; i < size; i++){
		printf("%d\t", array[i]);
	}
}

//Question 5
// Sum the contents of an int array
int addAll(int* array, int size){
	int sum = 0;
	for(int i = 0; i < size; i++){
		sum = sum + (*(array+i));
	}
	return sum;
}

//Question 6
//Create an array of ints in which the negative numbers come before the positive ones
// (Note: You can't return an array in C. The output array must be an argument.)
void negFirst(int array[], int size, int output[]){
	//int place = 0;
	int start = 0;
	int end = size-1;
	for(int i = 0; i < size; i++){
		if(array[i] < 0){
			output[start] = array[i];
			start++;
		} 
		if(array[i]>=0){
			output[end] = array[i];
			end--;
		}
	}
}


int main(void) {
	// Question 1 test code
	char* string = "abcdef";
	char* str2 = malloc(sizeof(char)*7); 
	stringCopy(string, str2);
	printf(str2);
	printf("\n");
	
	// question 2 test code
	//I have to declare it as an array or C will not let me modify the 
	// String. 
	char chars[5] = "abcde";
	reverse(chars,5);
	printf(chars);
	printf("\n");
	
	// Question 3 test code
	// char* trial1 = "help me please";
	// printf("%d",count(trial1,'e'));
	// Should print 4.
	
	//Question 4 test code
	// int array[5] = {1,2,-3,4,-5};
	// printArray(array,5);
	
	//Question 5 test code
	// int array[5] = {1,2,-3,4,-5};
	// printf("%d",addAll(array,5));
	
	
	//Question 6 test code
	// int array[5] = {1,2,-3,4,-5};
	// int* array2= malloc(sizeof(int)*5);
	// negFirst(array,5,array2);
	// printArray(array2,5);
	
	return 0;
}
