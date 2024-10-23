#include <stdio.h>
#include <math.h>
int main(){
    char ch;
    float result;
    printf("Enter operand ");
	scanf("%f",&result);
	while(ch!='='){
	    printf("\n Enter Operator\n");
		scanf(" %c",&ch);
		if (ch=='+'){
			int op2;
			printf("Enter operand");
			scanf("%d",&op2);
			result=result+op2;
			printf("%f",result);
		}
		else if (ch=='-'){
			int op2;
			printf("Enter operand");
			scanf("%d",&op2);
			result=result-op2;
			printf("%f",result);
		}
		else if (ch=='*'){
			int op2;
			printf("Enter operand");
			scanf("%d",&op2);
			result=result*op2;
			printf("%f",result);
		}
		else if (ch=='%'){
			int op2;
			printf("Enter operand");
			scanf("%d",&op2);
			result=((int)(result))%op2;
			printf("%f",result);
		}
		else if (ch=='/'){
			float op2;
			printf("Enter operand");
			scanf("%f",&op2);
			result=result/op2;
			printf("%f",result);
		}
		else if (ch=='^'){
			int op2;
			printf("Enter operand");
			scanf("%d",&op2);
			result=pow(result,op2);
			printf("%f",result);
		}
		else if (ch=='s'){
			result=sqrt(result);
			printf("%f",result);
		}
		else if (ch=='='){
			printf("the result is %f",result);
		}
		else{
			printf("Enter Proper operator");
			break;
		}
		
	}
	return 0;
}