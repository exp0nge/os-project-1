#include <stdio.h>


int main(void){
	double operand1;
	double operand2;
	char op[1];
	printf("\nEnter the first operand:\n");
	scanf("%d", &operand1);
	printf("\nEnter the operator:\n");
	scanf("%s", &op);
	while(op[0] != '+' && op[0] != '-'){
		printf("Operator must be + or -, you typed: %c\n", op[0]);
		scanf("%c", &op);
	}
	printf("\nEnter the second operand:\n");
	scanf("%d", &operand2);
	printf("Doing: %d %c %d", operand1, op[0], operand2);
	return 0;
}