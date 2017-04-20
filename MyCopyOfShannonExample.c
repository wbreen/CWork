#include <stdio.h>

int strLen(char* str){
	int counter=0;
	while(*str != '\0'){
		counter++;
		str++;
	}
	return counter;
}


//Add one to each number in the array.
void addOne(int* array, int size){
	for(int i = 0; i< size; i++){
		//way 1
		(*array)++;
		array++;
		//way 2
		//(*(array+i))++;
	}
	
}
int main(void) {
	// your code goes here
	char* test = "hey";
	int len = strLen(test);
	printf("length is %d", len);
	
	int array[5] = {1,2,3,4,5};
	addOne(array,5);
	return 0;
}
