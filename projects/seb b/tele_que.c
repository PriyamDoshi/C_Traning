#include <stdio.h>
#include <string.h>


const char hashTable[10][5]
	= { "", "", "abc", "def", "ghi",
		"jkl", "mno", "pqrs", "tuv", "wxyz" };


void printWordsUtil(int number[], int curr_digit,
					char output[], int n)
{
	
	int i;
	if (curr_digit == n) {
		printf("%s ", output);
		return;
	}

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


void printWords(int number[], int n)
{
	char result[n + 1];
	result[n] = '\0';
	printWordsUtil(number, 0, result, n);
}


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

	
	printWords(number, n);
	return 0;
}