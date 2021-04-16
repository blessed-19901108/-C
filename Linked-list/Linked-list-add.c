#include "node.h"
#include<stdio.h>
#include<stdlib.h>

//typedef struct _node{
//int value;            
//struct _node *next;   
//}Node;

/*Node* add(Node** pHead,int number);

//Node* head;//add函数里面会修改head，可以用全局变量
			 //但全局变量是有害的，是一次性的，add函数只能对全局变量起作用，如果程序有两个链表呢？
			 //原来void add(Node* head,int number);-->Node* add(Node* head,int number); 缺点：head = add(head,number);在主函数中会忘记赋值，传head进去又将结果赋给head
			 //Node* add(Node* head,int number);-->Node* add(Node** pHead,int number);我们传head的指针，现在add的return就没有关系了

int main(int argc,char const *argv[])
{
	Node *head = NULL;
	int number;
	do{
		scanf("%d",&number);
		if( number != -1 ){
			head = add(&head,number);
		}
	}while( number != -1);

	return 0;
}

Node* add(Node** pHead,int number)	//传进一个指针的指针，在函数内部对指针的值做修改
{	
	Node *last;
	//add to linked-list
	Node *p = (Node*)malloc(sizeof(Node));
	p->value = number;
	p->next = NULL;					//next指向NULL表示这个链表已经结束了
	//find the last
	Node *last = *pHead;			//创建一个指针指向head所指的那个东西
	if( last ){						//先要判断last与head是否已经指向数据
		while(last->next){			//如果last还有next,即next不是NULL的话
			last = last->next;		//last等于（指向）last所有的那个next
		}							//当这个循环结束时，这个last就是链表的最后一个
	//attach
		last->next = p;
	}else {
		*pHead = p;
	}
	return *pHead;
}*/

//法2 这个最好

/*typedef struct _list{				//通过定义一个自己的数据结构，对将来的升级有好处
	Node* head;						//Node* tail;可以让这个一直指向新加入的那个数据
}List;                              //不用add函数中一直去找最后一个数据

void add(List* pList,int number);

int main(int argc,char const *argv[])
{
	List list;
	int number;
	list.head = NULL;
	do{
		scanf("%d",&number);
		if( number != -1 ){
			add(&list,number);
		}
	}while( number != -1);

	return 0;
}

void add(List* pList,int number)	//传进一个指针的指针，在函数内部对指针的值做修改
{	
	Node *last;
	//add to linked-list
	Node *p = (Node*)malloc(sizeof(Node));
	p->value = number;
	p->next = NULL;					//next指向NULL表示这个链表已经结束了
	//find the last
	Node *last = pList->head;		//创建一个指针指向head所指的那个东西
	if( last ){						//先要判断last与head是否已经指向数据
		while(last->next){			//如果last还有next,即next不是NULL的话
			last = last->next;		//last等于（指向）last所有的那个next
		}							//当这个循环结束时，这个last就是链表的最后一个
	//attach
		last->next = p;
	}else {
		pList->head = p;
	}
}*/
