// . Write a program that acts as a basic chatbot with predefined responses.

#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    printf("Hello! I am a basic chatbot. Type 'bye' to exit.\n");

    while (1) {
        printf("You: ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = 0;  

        if (strcmp(input, "hi") == 0) {
            printf("ChatBot: Hello! How can I assist you?\n");
        } else if (strcmp(input, "how are you") == 0) {
            printf("ChatBot: I'm just a bot, but I'm doing great! How about you?\n");
        } else if (strcmp(input, "what's your name") == 0) {
            printf("ChatBot: I am ChatBot, your virtual assistant.\n");
        } else if (strcmp(input, "bye") == 0) {
            printf("ChatBot: Goodbye! Have a great day!\n");
            break;
        } else {
            printf("ChatBot: I'm sorry, I don't understand that.\n");
        }
    }
    
    return 0;
}
