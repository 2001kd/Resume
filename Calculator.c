#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
		int a,b;
		float c;
		char op;
		
		printf("Enter the first no. : ");
		scanf("%d",&a);
		
		printf("Enter the operation : ");
		scanf(" %c",&op);
		
		printf("Enter the second no. : ");
		scanf("%d",&b);
		
		c=0;
		switch(op)
		{
			case '+':
				c=a+b;
				break;
				
			case '-':
				c=a-b;
				break;
					
			case '*':
				c=a*b;
				break;
						
			case '/':
				c=(float)a/(float)b;
				break;
			
			case '%':
				c=a%b;
				break;
				
				default:
				printf("ERROR!(Invalid Operation Entered)\n");
		}

		printf("Result : %d %c %d = %f\n",a,op,b,c);
		getch();
		return 0;
}
