#include <stdio.h>
#include <stdlib.h>
#define MaxSize 100
typedef int Status;
typedef int ElemType;
typedef int Position;
//1、本题要求实现顺序栈，写出Push 、Pop、StackEmpty函数的实现，并用一个简单的main函数测试。
//已有类型定义
typedef struct
{
    ElemType Data[MaxSize];   // 存储元素的数组
    Position Top;       //栈顶指针
    Position Base;       //栈底指针
} SeqStack;

//函数接口定义：
Status InitStack(SeqStack *L);
Status StackEmpty(SeqStack *L);  //判断栈s是否为空
int StackLength(SeqStack *L);
Status ClearStack(SeqStack *L);
Status DestoryStack(SeqStack *L);
Status Push(SeqStack *L,ElemType e);
Status Pop(SeqStack *L);

Status prinStack(SeqStack *L);
Status convNum(int n, int R);
Status pipei();

Status InitStack(SeqStack *L)
{
    L->Base = 0;
    L->Top = 0;
    if (!L->Base) exit(0);
    return 1;
}
Status StackEmpty(SeqStack *L)
{
    if (L->Base == L->Top)
    {
        /* code */
        return 1;
    }else
    {
        return 0;
    }
    
}

int StackLength(SeqStack *L)
{
    return L->Top - L->Base;
}
Status ClearStack(SeqStack *L)
{
    if(L->Base) L->Top = L->Base;
    return 1;
}
Status DestoryStack(SeqStack *L)
{
    if (L->Base)
    {
        /* code */
        free(L->Data);
        L->Base = 0;
        L->Top = 0;
        
    }
    return 1;
}
Status Push(SeqStack *L,ElemType e)
{
    if (L->Top == MaxSize - 1)
    {
        /* code */ 
        return 0;
    }else
    {
        L->Data[L->Top ++] = e;
        return 1;
    }
    
}

Status Pop(SeqStack *L)
{
    if (L->Top == 0)
    {
        /* code */
        return 0;
    }else
    {
        return L->Data[-- L->Top];
    }
    
}