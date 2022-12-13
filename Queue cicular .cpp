#include<stdio.h>
#define SIZE 5
int queue[SIZE];
int front=-1;
int rear=-1;

void enqueue(){
	int a;
	printf("Enter the item that you want to enter: ");
	scanf("%d",&a);
	if(front==-1&&rear==-1){
		front=rear=0;
		queue[rear]=a;
		
	}
	else if(((rear+1)%SIZE)==front)
	{
		printf("The Queue is full. %d is not able to enter the queue",a);
	}
	else{
		rear=(rear+1)%SIZE;
		queue[rear]=a;
	}
}

void dequeue(){
	if(front==-1&&rear==-1){
	printf("The Queue is empty");
		
	}
	else if(front==rear){
		printf("Dequeued item is: %d",queue[front]);
		front=rear=-1;
		
	}
	else{
	printf("Dequeued item is: %d",queue[front]);
	front=(front+1)%SIZE;
	}
}

void display(){
	int i=front;
	if(front==-1&&rear==-1){
		printf("The Queue is empty");
		
	}
	else{
		printf("Queue is : ");
		while(i!=rear){
			printf("%d  ",queue[i]);
			i=(i+1)%SIZE;
		}
		printf("%d",queue[rear]);
	}
}

void peek(){
		if(front==-1&&rear==-1){
		printf("The Queue is empty");	
	}
	else{
		printf("Peek item is: %d ",queue[front]);
	}
}


int main(){
	int ch;
	printf("QUEUE OPERATIONS \n");
	printf("_____________________________\n");
	printf("\n\t1.Enqueue\n\t2.Dequeue\n\t3.Peek\n\t4.Display\n\t5.Exit\n");
	
	do{
		printf("\nEnter Choice: ");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			enqueue();
			break;
			case 2:
				dequeue();
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

