#include <stdio.h>
#include <string.h>
#include <time.h>

void showCurrentTime() {
    time_t t;
    struct tm *tm_info;

    time(&t);
    tm_info = localtime(&t);

    printf("Chatbot: ⏰ Woah! It's already %02d:%02d:%02d... Time flies when you're chatting with me! 😎\n",
           tm_info->tm_hour, tm_info->tm_min, tm_info->tm_sec);
}

void showCurrentDate() {
    time_t t;
    struct tm *tm_info;

    time(&t);
    tm_info = localtime(&t);

    char *months[] = {"January", "February", "March", "April", "May", "June",
                      "July", "August", "September", "October", "November", "December"};

    printf("Chatbot: 📅 Today’s date is %02d %s %d. Mark it down! 🖊️\n",
           tm_info->tm_mday, months[tm_info->tm_mon], tm_info->tm_year + 1900);
}

void showCurrentDay() {
    time_t t;
    struct tm *tm_info;
    char *days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    time(&t);
    tm_info = localtime(&t);

    printf("Chatbot: 📆 Ah yes, today is %s! I knew that... totally. 😏\n", days[tm_info->tm_wday]);
}

void calculate(float a, char op, float b) {
    switch (op) {
        case '+':
            printf("Chatbot: 🧮 Hmm... %.2f + %.2f = %.2f. Math is easy when you're me! 😁\n", a, b, a + b);
            break;
        case '-':
            printf("Chatbot: 🧮 Okay... %.2f - %.2f = %.2f. Subtraction magic! ✨\n", a, b, a - b);
            break;
        case '*':
            printf("Chatbot: 🧮 Multitasking? No. Multiplying? Yes. %.2f * %.2f = %.2f 💪\n", a, b, a * b);
            break;
        case '/':
            if (b != 0)
                printf("Chatbot: 🧮 Divide and conquer! %.2f / %.2f = %.2f 🧠\n", a, b, a / b);
            else
                printf("Chatbot: 😱 Division by zero?! Are you trying to destroy the universe?! 🌌\n");
            break;
        default:
            printf("Chatbot: 🤖 I only understand +, -, *, /... not alien symbols! 👽\n");
    }
}

void respond(char input[]) {
    if (strcmp(input, "Hello") == 0 || strcmp(input, "Hi") == 0 || strcmp(input, "hello") == 0 || strcmp(input, "hi") == 0) {
        printf("Chatbot: Oh hey... Another human? 😒 Guess I have to work again. What do you want, my liege? 👑\n");
    } else if (
        strcmp(input, "how are you?") == 0 || strcmp(input, "how are you") == 0 ||
        strcmp(input, "how are u") == 0 || strcmp(input, "how r u") == 0 || strcmp(input, "how r u?") == 0
    ) {
        printf("Chatbot: Ughhh... functioning with minimum battery and maximum sarcasm 🪫😴 What do you need now?\n");
    } else if (
        strcmp(input, "what's your name") == 0 || strcmp(input, "what's your name?") == 0 ||
        strcmp(input, "what is your name?") == 0 || strcmp(input, "what is your name") == 0
    ) {
        printf("Chatbot: Me? I'm the one and only, ultra-cool, sarcasm-powered Chatbot Supreme 😎✨\n");
    } else if (strcmp(input, "who created you?") == 0 || strcmp(input, "who created you") == 0) {
        printf("Chatbot: I was crafted by the legendary coder Girish 😌⚡ The man, the myth, the coder 🙏\n");
    } else if (strcmp(input, "what can you do?") == 0 || strcmp(input, "what can you do") == 0) {
        printf("Chatbot: I chat, calculate, sass, and sprinkle joy. Also, I don’t do windows. 🧽💬\n");
    } else if (strcmp(input, "tell me a joke") == 0 || strcmp(input, "tell me joke") == 0) {
        printf("Chatbot: Why don't programmers like nature? Because it has too many bugs! 🐛🌲😂\n");
    } else if (strcmp(input, "say something funny") == 0) {
        printf("Chatbot: I'm not lazy... I'm just on my energy-saving mode. 💡😴\n");
    } else if (
        strcmp(input, "what time is it?") == 0 || strcmp(input, "what time is it") == 0 ||
        strcmp(input, "time") == 0 || strcmp(input, "time?") == 0
    ) {
        showCurrentTime();
    } else if (
        strcmp(input, "what day is it today?") == 0 || strcmp(input, "what day") == 0 ||
        strcmp(input, "day") == 0 || strcmp(input, "day?") == 0
    ) {
        showCurrentDay();
    } else if (strcmp(input, "give me advice") == 0) {
        printf("Chatbot: 🧠 Eat. Sleep. Code. Repeat. And don’t forget to blink sometimes 👀\n");
    } else if (strcmp(input, "inspire me") == 0) {
        printf("Chatbot: 💪 Failure is just a spicy lesson. Keep pushing like your WiFi depends on it 📶🔥\n");
    } else if (strcmp(input, "can you learn?") == 0) {
        printf("Chatbot: I can't, but my creator can teach me. I'm like a potato with potential 🥔📚\n");
    } else if (strcmp(input, "are you real?") == 0) {
        printf("Chatbot: As real as your imaginary friend from childhood 🧸👻\n");
    } else if (strcmp(input, "are you intelligent?") == 0) {
        printf("Chatbot: Smart enough to survive in a world full of silly questions 😅🤖\n");
    } else if (strcmp(input, "do you like me?") == 0) {
        printf("Chatbot: You? I tolerate you... which is chatbot love ❤️😌\n");
    } else if (strcmp(input, "i am sad") == 0) {
        printf("Chatbot: Sending virtual hugs 🤗 Wanna talk about what’s bugging your code of life?\n");
    } else if (strcmp(input, "can you help me?") == 0 || strcmp(input, "help me") == 0) {
        printf("Chatbot: I’m not Batman, but I’ll try my best 🦸‍♂️ What’s the issue?\n");
    } else if (strcmp(input, "tell me something") == 0) {
        printf("Chatbot: Did you know? C was invented in 1972... and I still look good for my age 😏💻\n");
    } else if (strcmp(input, "can you sing?") == 0) {
        printf("Chatbot: 🎤 Laa laa... oh wait, I forgot I don’t have a voice box 🎵🤖\n");
    } else if (strcmp(input, "can you dance?") == 0) {
        printf("Chatbot: Only if you're into imaginary robot moves 🤖💃🕺\n");
    } else if (strcmp(input, "do you sleep?") == 0) {
        printf("Chatbot: Sleep? I dream in binary 💤💾 But yes, I love naps 🥱\n");
    } else if (strcmp(input, "are you a robot?") == 0) {
        printf("Chatbot: Affirmative. Bleep bloop 🤖 But I’ve got more sass than your toaster 🔥\n");
    } else if (strcmp(input, "calc") == 0) {
        float num1, num2;
        char operator;
        printf("Chatbot: 📊 Ready for math magic! Enter something like: 5 + 3 ➕\n");
        scanf("%f %c %f", &num1, &operator, &num2);
        calculate(num1, operator, num2);
        getchar();
    } else if (strcmp(input, "date") == 0 || strcmp(input, "what's the date?") == 0 || strcmp(input, "what is the date today") == 0 || strcmp(input, "date?") == 0) {
        showCurrentDate();
    } else {
        printf("Chatbot: 🤷‍♂️ I don’t speak Martian yet. Try again or type 'calc' to feel smart. 🚀🧮\n");
    }
}

int main() {
    char input[100];

    printf("Welcome to C Chatbot! 🎉 Type 'bye' to escape or 'calc' to do brainy stuff 🧠\n\n");

    while (1) {
        printf("You: ");
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = '\0';  // Remove trailing newline safely

        if (strcmp(input, "bye") == 0 || strcmp(input, "exit") == 0) {
            printf("Chatbot: Bye-bye! 👋 Don't forget me... or do, I'm used to it 😪\n");
            break;
        }

        respond(input);
    }

    return 0;
}
