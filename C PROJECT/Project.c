
#include <stdio.h>
int score=0;
int answered[9] = {0};
void quiz1(){
    int option;
    printf("Who invented C programme?");
    printf("\n 1.Dennis Ritchie\n 2.Guido van Rossum\n 3.James Gosling\n 4.Tim Berners-Lee\n");
    printf(" Enter option: ");
    scanf("%d",&option);
    if(option==1){
        printf(" Correct answer!\n");
        score++;
    }
    else{
        if(option<=4)
        printf("Wrong Answer\n Correct answer: 1.Dennis Ritchie\n"); 
        else
        printf(" Invalid choice");
    }
    answered[0] = 1; 
}
void quiz2(){
    int option;
    printf("Where C programme was invented?");
    printf("\n 1.Sun Microsystems\n 2.Bell Laboratories\n 3.Netherlands\n 4.Geneva\n");
    printf(" Enter option: ");
    scanf("%d",&option);
    if(option==2){
        printf(" Correct answer!\n");
        score++;
    }
    else{
         if(option<=4)
        printf("Wrong Answer\n Correct answer: 2.Bell Laboratories\n"); 
        else
        printf(" Invalid choice");
 }
 answered[1] = 1; 
    
}
void quiz3(){
    int option;
    printf("Which of the following is not a valid C variable name?");
    printf("\n 1.int number;\n 2.float rate;\n 3.int variable_count;\n 4.int $main;\n");
    printf(" Enter option: ");
    scanf("%d",&option);
    if(option==4){
        printf(" Correct answer!\n");
        score++;
    }
    else{
         if(option<=4)
        printf("Wrong Answer\n Correct answer:  4.int $main;\n");
        else
        printf(" Invalid choice");
 }
 answered[2] = 1; 
    
}
void quiz4(){
    int option;
    printf("All keywords in C are in?");
    printf("\n 1.LowerCase letters\n 2.UpperCase letters\n 3.CamelCase letters\n 4.None of the mentioned\n");
    printf(" Enter option: ");
    scanf("%d",&option);
    if(option==1){
        printf(" Correct answer!\n");
        score++;
    }
    else{
         if(option<=4)
         printf("Wrong Answer\n Correct answer: 1.LowerCase letters\n");
        else
        printf(" Invalid choice");
 }
 answered[3] = 1; 
    
}
void quiz5(){
    int option;
    printf(" Which of the following cannot be a variable name in C?");
    printf("\n 1.volatile\n 2.true\n 3.friend\n 4.export\n");
    printf(" Enter option: ");
    scanf("%d",&option);
    if(option==1){
        printf(" Correct answer!\n");
        score++;
    }
    else{
         if(option<=4)
       printf("Wrong Answer\n Correct answer: 1.volatile\n");
        else
        printf(" Invalid choice");
   }
   answered[4] = 1; 
    
}
void quiz6(){
    int option;
    printf("Which keyword is used to prevent any changes in the variable within a C program?");
    printf("\n 1.immutable\n 2.mutable\n 3.const\n 4.volatile\n");
    printf(" Enter option: ");
    scanf("%d",&option);
    if(option==3){
        printf(" Correct answer!\n");
        score++;
    }
    else{
         if(option<=4)
        printf("Wrong Answer\n Correct answer: 3.const\n");
        else
        printf(" Invalid choice");
   }
   answered[5] = 1; 
    
}
void quiz7(){
    int option;
    printf(" What is the result of logical or relational expression in C?");
    printf("\n 1.True or False\n 2.0 or 1\n 3.0 if an expression is false and any positive number if an expression is true\n 4.None of the mentioned\n");
    printf(" Enter option: ");
    scanf("%d",&option);
    if(option==2){
        printf(" Correct answer!\n");
        score++;
    }
    else{
         if(option<=4)
     printf("Wrong Answer\n Correct answer: 2.0 or 1\n"); 
        else
        printf(" Invalid choice");
   }answered[6] = 1; 
    
}
void quiz8(){
    int option;
    printf("Functions in C Language are always ");
    printf("\n 1. Internal\n 2.Both Internal and External\n 3.External\n 4.External and Internal are not valid terms for functions\n");
    printf(" Enter option: ");
    scanf("%d",&option);
    if(option==3){
        printf(" Correct answer!\n");
        score++;
    }
    else{
         if(option<=4)
        printf("Wrong Answer\n Correct answer: 3.External\n");
        else
        printf(" Invalid choice");
   }
   answered[7] = 1; 
    
}
void quiz9(){
    int option;
    printf("What is an example of iteration in C?");
    printf("\n 1.for\n 2.while\n 3.do-while\n 4.all of the mentioned\n");
    printf(" Enter option: ");
    scanf("%d",&option);
    if(option==4){
        printf(" Correct answer!\n");
        score++;
    }
    else{
         if(option<=4)
      printf("Wrong Answer\n Correct answer: 4.all of the mentioned\n"); 
        else
        printf(" Invalid choice");
  }
  answered[8] = 1; 
    
}

void Score(){
    printf("Score:%d",score);
}
int main()
{
   int choice;
   printf("\n C Quiz Game");
	do{
	    
		printf("\n 1. Quiz1\n 2. Quiz2\n 3. Quiz3\n 4. Quiz4\n 5. Quiz5\n 6. Quiz6\n 7. Quiz7\n 8. Quiz8\n 9. Quiz9\n 10.Total score\n 0. Exit\n\nEnter your choice: ");
		
		scanf("%d",&choice); //Input the choice from the user
	    // Check if the selected quiz has been answered
        if (choice >= 1 && choice <= 9) {
            if (answered[choice - 1] == 1) {
                printf("You have already answered this question. Please select a different one.\n");
            } else {
                switch (choice) {
                    case 1: quiz1(); break;
                    case 2: quiz2(); break;
                    case 3: quiz3(); break;
                    case 4: quiz4(); break;
                    case 5: quiz5(); break;
                    case 6: quiz6(); break;
                    case 7: quiz7(); break;
                    case 8: quiz8(); break;
                    case 9: quiz9(); break;
                    default: printf("Invalid Choice\n"); break;
                }
            }
        } else if (choice == 10) {
            Score();
        } else if (choice == 0) {
            break;
        } else {
            printf("Invalid Choice\n");
        }
		
	}		
	while(choice!=0);
}
