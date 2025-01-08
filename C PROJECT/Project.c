#include <stdio.h>

int score = 0;

// Define a structure to hold each quiz question
struct Quiz {
    char question[200];
    char options[4][100];
    int correctAnswer;
    int answered;  // To check if the quiz is answered or not
};

// Initialize quizzes using the structure
struct Quiz quizzes[9] = {
    {"Who invented- C program?", 
     {"1. Dennis Ritchie", "2. Guido van Rossum", "3. James Gosling", "4. Tim Berners-Lee"}, 
     1, 0},

    {"Where was the C program invented?", 
     {"1. Sun Microsystems", "2. Bell Laboratories", "3. Netherlands", "4. Geneva"}, 
     2, 0},

    {"Which of the following is not a valid C variable name?", 
     {"1. int number;", "2. float rate;", "3. int variable_count;", "4. int $main;"}, 
     4, 0},

    {"All keywords in C are in?", 
     {"1. LowerCase letters", "2. UpperCase letters", "3. CamelCase letters", "4. None of the mentioned"}, 
     1, 0},

    {"Which of the following cannot be a variable name in C?", 
     {"1. volatile", "2. true", "3. friend", "4. export"}, 
     1, 0},

    {"Which keyword is used to prevent any changes in the variable within a C program?", 
     {"1. immutable", "2. mutable", "3. const", "4. volatile"}, 
     3, 0},

    {"What is the result of logical or relational expression in C?", 
     {"1. True or False", "2. 0 or 1", "3. 0 if an expression is false and any positive number if an expression is true", "4. None of the mentioned"}, 
     2, 0},

    {"Functions in C Language are always", 
     {"1. Internal", "2. Both Internal and External", "3. External", "4. External and Internal are not valid terms for functions"}, 
     3, 0},

    {"What is an example of iteration in C?", 
     {"1. for", "2. while", "3. do-while", "4. all of the mentioned"}, 
     4, 0}
};

// Function to display the quiz question and get user input
void displayQuiz(int index) {
    int option;
    printf("%s\n", quizzes[index].question);
    for (int i = 0; i < 4; i++) {
        printf("%s\n", quizzes[index].options[i]);
    }
    printf("Enter option: ");
    scanf("%d", &option);
    
    if (option == quizzes[index].correctAnswer) {
        printf("Correct answer!\n");
        score++;
    } else {
        if (option <= 4)
            printf("Wrong Answer\nCorrect answer: %s\n",  quizzes[index].options[quizzes[index].correctAnswer - 1]);
        else
            printf("Invalid choice\n");
    }

    quizzes[index].answered = 1;  // Mark this quiz as answered
}

void showScore() {
    printf("Score: %d\n", score);
}

int main() {
    int choice;
    printf("\nC Quiz Game\n");

    do {
        printf("\n1. Quiz1\n2. Quiz2\n3. Quiz3\n4. Quiz4\n5. Quiz5\n6. Quiz6\n7. Quiz7\n8. Quiz8\n9. Quiz9\n10. Total score\n0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Check if the selected quiz has been answered
        if (choice >= 1 && choice <= 9) {
            if (quizzes[choice - 1].answered == 1) {
                printf("You have already answered this question. Please select a different one.\n");
            } else {
                displayQuiz(choice - 1);  // Display the selected quiz
            }
        } else if (choice == 10) {
            showScore();  // Display the total score
        } else if (choice == 0) {
            printf("Exiting the quiz game.\n");
            break;
        } else {
            printf("Invalid Choice\n");
        }
    } while (choice != 0);

    return 0;
}
