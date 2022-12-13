#include<stdio.h>
#define SIZE 5
int top=-1;
int stack[SIZE];

void push(){
	int a;
	printf("Enter the number that you want to push: ");
	scanf("%d",&a);
	if(top==SIZE-1){
		printf("Stack is Overflow!. The item(%d) is not pushed.",a);
	}
	else
	{
	top++;
	stack[top]=a;	
	}
}

void pop(){
	int del;
	if(top==-1)
	{
		printf("Stack is Underflow");
	}
	else{
		del=stack[top];
		top--;
		printf("Poped item is: %d ",del);
	}
}

void peek(){
	if(top==-1){
		printf("Stack is empty");
	}
	else{
		printf("Top most element is : %d 	at position:  %d ",stack[top],top);
	}
}

void display(){
	int i;
	if(top>=0){
		printf("Stack items are: \n");
	
	for(i=top;i>=0;i--)
	{
		printf(" %d ",stack[i]);
	}
	}
	else{
		printf("Stack is empty");
	}
}

int main(){
	int ch;
	printf("STACK OPERATIONS USING ARRAY\n");
	printf("_____________________________\n");
	printf("\n\t1.Push\n\t2.Pop\n\t3.Peek\n\t4.Display\n\t5.Exit\n");
	
	do{
		printf("\nEnter Choice: ");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			push();
			break;
			case 2:
				pop();
				break;
				case 3:
					peek();
					break;
					case 4:
						display();
						break;
						case 5:
							printf("Exit point.");
							return 0;
							break;
							default:
								printf("Enter a valid choice");
								
								
	}

	}
	while(ch!=0);	
}

