#include <stdio.h>
int main(){
	int select,scoreofstudent,n1,n2,n3,Num,i ;
	printf("Please Select Your Case (1 2 3 4 5 ) :  ");
	scanf("%d",&select);
	switch (select){
		
		case 1:
			
			printf("\nPlease Enter your score : ");
			scanf("%d",&scoreofstudent);
	
			if(scoreofstudent <=49 && scoreofstudent >=0){
			printf("\nGrade = F");
			}
			else if(scoreofstudent >=50 && scoreofstudent <=54){
			printf("\nGrade = D");
			}
			else if(scoreofstudent >=55 && scoreofstudent <=59){
			printf("\nGrade = D+");
			}
			else if(scoreofstudent >=60 && scoreofstudent <=64){
			printf("\nGrade = C");
			}
			else if(scoreofstudent >=65 && scoreofstudent <=69){
			printf("\nGrade = C+");
			}
			else if(scoreofstudent >=70 && scoreofstudent <=74){
			printf("\nGrade = B");
			}
			else if(scoreofstudent >=75 && scoreofstudent <=79){
			printf("\nGrade = B");
			}
			else if(scoreofstudent >=80 && scoreofstudent <=100){
			printf("\nGrade = A");   
			}
			else if(scoreofstudent >=101 || scoreofstudent <0){
			printf("\nScore Error !! ");
			}break;
		
		case 2:
			
			printf("\nEnter your 3 number = ");
			scanf("%d %d %d",&n1, &n2, &n3);
	
   			if (n1>n2 && n2>n3){
			printf("\nMax = %d | Min = %d",n1,n3);
			}
			else if (n1>n3 && n3>n2){
			printf("\nMax = %d | Min = %d",n1,n2);
			}
			else if (n2>n1 && n1>n3){
			printf("\nMax = %d | Min = %d",n2,n3);
			}
			else if (n2>n3 && n3>n1){
			printf("\nMax = %d | Min = %d",n2,n1);
			}
			else if (n3>n1 && n1>n2){
			printf("\nMax = %d | Min = %d",n3,n2);
			}
			else if (n3>n2 && n2>n1){
			printf("\nMax = %d | Min = %d",n3,n1);
			}
			else if (n1==n2 && n2==n3){
			printf("\nMax = %d | Min = %d",n1,n3);
			}break;
		
		case 3:
			
			printf("\nPlease Enter your number1 : ");	
			scanf("%d",&n1);
			printf("Please Enter your number2 : ");
			scanf("%d",&n2);
			printf("Plus is %d",n1+n2);
			break;
			
		case 4:
	
			printf ("\nPlease Enter your number : ") ;
			scanf ("%d", &Num) ;
			for(int i=1 ; i<=12 ; i++){
			printf ("%d x %d \t= %d\n",Num ,i ,Num*i) ;
			}break ;
		
		case 5:
			printf("\nPrime Number is : ");
			for(i=1 ; i<=29 ; i++){
         		if((i==1 || i%2 == 0 || i%3 == 0 || i%5==0 || i%7==0) 
			&& (i!=2 && i!=3 && i!=5 && i!=7))
 			printf("%d\t", i);   
			}break;
			
			default:printf("Error !! Please enter your number again");
 	}
 	return 0;
}


