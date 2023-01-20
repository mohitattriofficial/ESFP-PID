#include <stdio.h>
#include <string.h>
int main() {
	printf("========================================================================================================================\n");
printf("                                               GANPAT UNIVERTSITY\n");
printf("                                  BRANCH - COMPUTER SCIENCE AND ENGINEERING (CS)\n");
printf("                                                BATCH - 12\n");
printf("                                           Name: Attri Mohit B.\n");
printf("                              PROJECT TITLE - Chatbot for Revenue Website :PID107\n");
printf("                                               ESFP-I PROJECT\n");
printf("                                             Roll NO. - CS07\n");
printf("                                          ENROLLMENT NO. - \n");
printf("========================================================================================================================");
    char application[200];
    printf("                               iORA-Integrated Online Revenue Applications\n");
    printf("                                             Revenue Department\n");
    printf("                                           Government of Gujarat\n");
    printf("========================================================================================================================\n");
if (login() == 1) {
        chatbot();
    }
}
int login() {
    char username[20];
    char password[20];
    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);
    if (strcmp(username, "admin") == 0 && strcmp(password, "123") == 0) {
        return 1;
    } else {
        printf("Invalid username or password.\n");
        return 0;
    }
}

void chatbot() {
    char input[20];
    printf("Welcome to the iORA-Integrated Online Revenue Applications-chatbot.\n");
    while (1) {
        printf("What application are you inquiring about?\n");
        scanf("%s", input);
        if (strcmp(input, "passport") == 0) {
            printf("To apply for a passport, you will need to submit a completed passport application, a passport photo, and proof of citizenship.\n");
        } else if (strcmp(input, "driver's license") == 0) {
            printf("To apply for a driver's license, you will need to submit a completed driver's license application, a passport photo, proof of citizenship, and proof of residency.\n");
        }else if (strcmp(input, "exit") == 0) {
            break;
        } else {
            printf("I'm sorry, I don't have information about that application.\n");
        }
    }
    printf("Thank you for using the chatbot.\n");
}
    