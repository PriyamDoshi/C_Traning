#include <stdio.h>
#include <string.h>

// hashTable[i] stores all characters that correspond to
// digit i in phone
const char hashTable[10][5]
	= { "", "", "abc", "def", "ghi",
		"jkl", "mno", "pqrs", "tuv", "wxyz" };

// A recursive function to print all possible words that can
// be obtained by input number[] of size n. The output
// words are one by one stored in output[]
void printWordsUtil(int number[], int curr_digit,
					char output[], int n)
{
	// Base case, if current output word is prepared
	int i;
	if (curr_digit == n) {
		printf("%s ", output);
		return;
	}

	// Try all 3 possible characters for current digit in
	// number[] and recur for remaining digits
	for (i = 0; i < strlen(hashTable[number[curr_digit]]);
		i++) {
		output[curr_digit]
			= hashTable[number[curr_digit]][i];
		printWordsUtil(number, curr_digit + 1, output, n);
		if (number[curr_digit] == 0
			|| number[curr_digit] == 1)
			return;
	}
}

// A wrapper over printWordsUtil(). It creates an output
// array and calls printWordsUtil()
void printWords(int number[], int n)
{
	char result[n + 1];
	result[n] = '\0';
	printWordsUtil(number, 0, result, n);
}

// Driver code
int main(void)
{
	int number[7],num;
    printf("inter a 7 digit number");
    scanf("%d",&num);
    
    for(int i = 0;i<7;i++){
        int r = num%10;
		printf("%d",r);
        number[i]=r;
        num = num/10;
    }
    printf("\n the seven digit number is");
    for(int j = 0; j<7; j++){
        printf("%d ",number[j]);
    }
printf("/n");

	int n = sizeof(number) / sizeof(number[0]);

	// Function call
	printWords(number, n);
	return 0;
}