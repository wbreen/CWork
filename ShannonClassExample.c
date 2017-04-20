#include <stdio.h>

int strLen(char* str){
  int counter = 0;
  while(*str != '\0'){
  	counter++;
  	str++;
  }
  return counter;
}

// add one to each number in the array.
void addOne(int* array, int size){
	for(int i = 0; i< size; i++){
		// Way one
		(*array)++;
		array++;
		//Way two
		//(*(array+i))++;
		// Way three - don't do it
		//array[i]++;
	}
}

void printArray(int* array, int size){
	for(int i = 0; i< size; i++){
		printf("%d\t", array[i]);
	}
}

int main(void) {
	char* test = "hey";
	int len = strLen(test);
	printf("Length is %d\n",len);
	
	int array[5] = {1,2,3,4,5};
	addOne(array, 5);
	
	printArray(array, 5);
	return 0;
}
