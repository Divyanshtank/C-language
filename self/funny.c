#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifdef _WIN32
#include <windows.h>
#define SLEEP(x) Sleep(x * 1000)
#else
#include <unistd.h>
#define SLEEP(x) sleep(x)
#endif

int main() {
    const char* samosaTypes[] = {
        "Spicy Aloo Samosa 🌶️",
        "Paneer Lover Samosa 🧀",
        "Chocolate Samosa 🍫 (yes, it exists)",
        "Ghost Pepper Samosa 👻🔥",
        "Plain Boring Samosa 😐",
        "Royal Dry Fruit Samosa 👑",
        "Desi Masala Samosa 💥"
    };

    int totalTypes = sizeof(samosaTypes) / sizeof(samosaTypes[0]);

    printf("Analyzing your samosa personality using ultra-advanced AI...\n");
    printf("Loading");

    // Fake loading animation
    for (int i = 0; i < 5; i++) {
        printf(".");
        fflush(stdout);
        SLEEP(1);
    }

    srand((unsigned int)time(NULL));
    int index = rand() % totalTypes;

    printf("\n\n🔍 Analysis Complete!\n");
    printf("You are: %s\n", samosaTypes[index]);

    return 0;
}
