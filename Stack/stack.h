#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<assert.h>

typedef int STDatatype;
typedef struct Stack
{
	STDatatype* p;  
	int top; 
	int capacity;
}ST;

//初始化栈
void StackInit(ST* ps); 
//释放栈的空间
void StackDestroy(ST* ps);
//元素入栈
void StackPush(ST* ps, STDatatype x);
//出栈
void StackPop(ST* ps);
//判空
bool StackEmpty(ST* ps);
//计算栈内元素个数
int StackSize(ST* ps);
//返回栈顶元素
STDatatype StackTop(ST* ps);

