#include "node.h"
#include<stdio.h>
#include<stdlib.h>

typedef struct _list{				
	Node* head;						
}List;                              

void add(List* pList,int number);
void print(List *pList);

int main(int argc,char const *argv[])
{
	List list;
	int number;
	Node* p;							//遍历链表的初始量
	int isFound = 0;					//找到链表中的数字的标志符
	Node *q;                            //链表删除时所需的中间量
	list.head = NULL;
	do{
		scanf("%d",&number);
		if( number != -1 ){
			add(&list,number);
		}
	}while( number != -1);
	print(&list);
	scanf("%d",&number);				//找到链表中的数字然后删除
	for( p=list.head;p;p= p->next){		
		if( p->value == number){
			printf("找到了\n");
			isFound = 1;
			break;
		}
	}
	if( !isFound ){
		printf("没找到\n");
	}
	for( q=NULL,p=list.head;p;q=p,p= p->next){		
		if( p->value == number){
			if( q ){
				q->next = p->next;
			}else{
				list.head = p->next;
			}
			free(p);
			break;
		}
	}
	for( p=list.head;p;p=q){            //删除整个链表
		q = p->next;
		free(p);
	}

	return 0;
}

void add(List* pList,int number)	
{	
	Node *last;
	//add to linked-list
	Node *p = (Node*)malloc(sizeof(Node));
	p->value = number;
	p->next = NULL;					
	//find the last
	Node *last = pList->head;						
	if( last ){						
		while(last->next){			
			last = last->next;		
		}							
	//attach
		last->next = p;
	}else {
		pList->head = p;
	}
}

void print(List *pList){
	Node* p;
	for( p=pList->head;p;p= p->next){		//循环结束的条件就是p还存在
		printf("%d\t",p->value);
	}
	printf("\n");
}
