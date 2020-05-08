#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main() {
//	int A = 0;
//	int B = 0;
//	scanf("%d%d", &A, &B);
//	int i = 1;
//	while (((A*i) % B) != 0) {
//		i++;
//	}
//	printf("%d\n", A*i);
//	return 0;
//}

#include <string.h>

void reverse(char* start, char* end) {
	while (start < end) {
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}

int main() {
	char input[100];
	gets(input);
	reverse(input, input + strlen(input) - 1);

	char* start = input;
	while (*start) {
		char *end = start;
		while (*end != ' ' && *end) {
			end++;
		}
		reverse(start, end - 1);
		if (*end) {
			start = end + 1;
		}
		else {
			start = end;
		}
		printf("%s", input);
		return 0;
	}
}