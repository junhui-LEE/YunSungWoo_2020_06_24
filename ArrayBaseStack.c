#include <stdio.h>
#include <stdlib.h>
#include "ArrayBaseStack.h"

void StackInit(Stack* pstack) {
	pstack->topIndex = -1; // -1 은 스택이 비어있음을 의미
}

int SIsEmpty(Stack* pstack) {
	if (pstack->topIndex == -1)
		return TRUE;     // 빈 경우 TRUE 를 반환
	else
		return FALSE;
}

void SPush(Stack* pstack, Data data) {
	pstack->topIndex += 1;
	pstack->stackArr[pstack->topIndex] = data;
}

Data SPop(Stack* pstack) {
	int rIdx;
	if (SIsEmpty(pstack)) {
		printf("Stack Memory Error!");
		exit(-1);
	}
	rIdx = pstack->topIndex;
	pstack->topIndex -= 1;

	return pstack->stackArr[rIdx];
}

Data SPeek(Stack* pstack) {
	if (SIsEmpty(pstack)) {
		printf("Stack Memory Error!");
		exit(-1);
	}
	return pstack->stackArr[pstack->topIndex];
}
