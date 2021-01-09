#include<stdio.h>

// Calculator
	/* by using function
	   
	   */

void addition(){   //subfunction 01 (not retrun to main funtion (void) )
		
		int i;
		float total =0,sum = 0;
		
		printf("\t\t\tDesplay answer Enter the -0 \n");
			
		for(i=1;i>0;i++){
			
			printf("\nEnter the value:");
			scanf("%f",& sum);
			
			if(sum == -0)//condition
			break;
			
			total= total + sum; //calculation part
		}
		

	printf("\n Answer is: %.2f",total); //display two point(.2)
		
}  //end of subfunction 01



void subtraction(){  //subfunction 02 (not retrun to main funtion (void) )
		int i;
        float sub1 =0,sub2 =0,total = 1;
        
        printf("\t\t\t Desplay answer Enter the -0 \n");
        
        printf("\nEnter the value:");
        scanf("%f",& sub1);
			
		for(i=1;i>0;i++){
			
			printf("\nEnter the value:");
			scanf("%f",& sub2);
			
			if(sub2 == -0)
			break;	
		
		sub1  = sub1 - sub2;
		}
		
		
	printf("\n Answer is: %.2f",sub1);	
		
}  //end of subfunction 02


void division(){  //subfunction 03 (not retrun to main funtion (void) )
		
		int i;
		float division1=0,division2=0;
		
		printf("\t\t\tDesplay the answer Enter -0 \n");
		
		printf("\nEnter the value:");
		scanf("%f",& division1);
			
		for(i=1;i>0;i++){
			
			printf("\nEnter the value:");
			scanf("%f",& division2);
			
			if(division2 == -0)
			break;
				
		division1 = division1/division2;
		}
		
		
	printf("\n Sumation is: %.2f",division1);	
		
}  //end of subfunction 03



void multiplication(){   //subfunction 04 (not retrun to main funtion (void) )
		int i;
		float total = 1;
		float mul = 0;
		
		
		printf("\t\t\tDesplay the answer Enter -0 \n");
	
		
		for(i=1;i>0;i++){
			
			printf("\nEnter the value:");
			scanf("%f",& mul);
			
			if(mul == -0)
			break;
			
			total= total * mul; //calculation part
			  
		/*    ******total variable must have a value(1) otherwise can not do the calculation
			eg:0*1= 0    
		*/	
		}
		
	printf("\n Answer is: %.2f",total);	
		
}  //end of subfunction 04

void modulodivision(){  //subfunction 05 (not retrun to main funtion (void) )
		
		int i;
		int a=0,b=0;
		
		printf("\t\t\tDesplay the answer Enter -0 \n");
		
		printf("\nEnter the value:");
		scanf("%d",& a);
			
		for(i=1;i>0;i++){
			
			printf("\nEnter the value:");
			scanf("%d",& b);
			
			if(b == -0)
			break;
				
		a = a%b;
		}
		
		
	printf("\n Sumation is: %d",a);	
		
}  //end of subfunction 03





int main(){       //main function
	
	char opratr;  // Declear Veriable

	printf("\t\t\tCalulator\n\n");
	   
	printf("Enter the Operator (/ * - + %)");         //Desplay to user
	scanf( " %c",&opratr);         //get the value of opratr variable
	
	

	
	if(opratr == '+'){ // condition if else
		
		addition();   //call the sub function 01
		
	}
	
	else if (opratr == '-'){
		
		subtraction(); //call the subftion 02
		
	}
	
	else if (opratr == '/'){
		
		division();  //call the subftion 03
		
	}
	
	else if (opratr == '*'){
		
		multiplication(); // call the subftion 04
		
	}
	
	else if (opratr == '%'){
		
		modulodivision(); // call the subftion 05
		
	}
	
	else {
		
		printf("\n Invalid Operatoer Please try agin");
	}
	
	
	
	

return 0 ;
}
