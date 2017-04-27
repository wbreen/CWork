#include <stdio.h>

// Q1
//reverse string1 into string2
void reverse2(char* string1, char* string2){
	int length = 0;
	while(*string1){
		string1++;
		length++;
	}
	string1--;
	while(*string1){
		*string2 = *string1;
		string2++;
		string1--;
	}
}

// Q2
//compute the index of the first vowel in a word, or -1 if there is no vowel
//'y' is not a vowel and assume only lower case
int firstVowel(char* string){
	int index = 0;
	while(*string){
		if(*string == 'a'||*string =='e'||*string =='i'||*string =='o'||*string =='u'){
			return index;
		}
		index++;
		string++;
	}
	return -1;
}

//strLen as created in class:
int strLen(char* str){
	int counter=0;
	while(*str != '\0'){
		counter++;
		str++;
	}
	return counter;
}

// Q3
//Concat two strings, return a new string(char)
//have to use strLen as created in class
char* concat(char* first, char* second){
	char* final;
	int lenFirst = strLen(first);
	int lenSecond = strLen(second);
	int lenBoth = lenFirst + lenSecond + 1;
	final = malloc(sizeof(char)*lenBoth+1);
	printf("%d", lenBoth);
	
	while(*first){
		*final = *first;
		*final++;
		first++;
	}
	while(*second){
		*final = *second;
		*final++;
		second++;
	}
	//*final = '\0';
	return final;
}

int main(void) {
	//printf("literally anything \n");
	
	//Question 1
	//reverse2 testing code 
	char* forward = "abcdxyz";
	char* backward = malloc(sizeof(char)*9);
	reverse2(forward, backward);
	printf(backward);
	printf("\n");
	
	//Question 2
	char* trial = "abced";
	char* trial2 = "bdef";
	char* trial3 = "lkjg";
	printf("%d\n",firstVowel(trial)); // 0
	printf("%d\n",firstVowel(trial2)); // 2
	printf("%d\n",firstVowel(trial3)); // -1
	
	//Question 3
	char* first = "abc";
	char* second = "defg";
	printf(concat(first,second));
	
	return 0;
}
