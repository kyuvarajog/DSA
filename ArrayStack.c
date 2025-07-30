#include <stdio.h>
#define Max 10
int Stack[Max],top= -1;
void push(int item){
		top++;
		Stack[top] = item;
        printf("Success: %d was pushed to the stack.\n", item);
}
void pop(){
	if (top<0)
	printf("Error: No Element Added\n");
	else{
		printf("Successfully popped %d", Stack[top]);
		top--;
	}
}
void display(){
	int i;
	if(top<0)
	printf("Stack Empty/n");
	else{
		printf("Elements in Stack are: { ");
		for(i=top;i>=0;i--){
			printf("%d, ", Stack[i]);
		}
		printf(";
	}
}
int main(){
	int ch,item;
	while(1)
	{
		printf("Press 1 for display:\n");
		printf("Press 2 for Push:\n");
		printf("Press 3 for  Pop:\n");
		printf("Enter your Choice:(4-10 Exit) ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: display();
			    break;
			case 2: printf("Enter The Item");
			        scanf("%d",&item);
			        push(item);
			    break;
			case 3: pop();
			    break;
			default: printf("Exited Successfully");
			    break;
		}//End of Switch
		if(ch>3)
		break;
	}//End of While
	return 0;
}//End of main
