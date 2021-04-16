#ifndef _NODE_H_
#define _NODE_H_

typedef struct _node{
	int value;            //因为链表的特性，所以下一个结构类型仍然是它自己
	struct _node *next;   //这里不用Node是因为编译器在这一行的时候还不知道Node的名字
}Node;

#endif
