#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Book {
    char id[5];
    char title[100];
    char author[50];
    char genre[50];
    float rating;
};

int main() {
    struct Book books[] = {
        {"1", "To Kill a Mockingbird", "Harper Lee", "Classic Fiction", 4.8},
        {"2", "Atomic Habits", "James Clear", "Self-Help", 4.5},
        {"3", "The Great Gatsby", "F. Scott Fitzgerald", "Classic Fiction", 4.0},
        {"4", "The Subtle Art of Not Giving a Fck*", "Mark Manson", "Self-Help", 4.2},
        {"5", "Crime and Punishment", "Fyodor Dostoevsky", "Classic", 4.0},
        {"6", "The Great Gatsby", "F. Scott Fitzgerald", "Classic Fiction", 4.0},
        {"7", "Educated", "Tara Westover", "Inspiration", 3.5},
        {"8", "The Pragmatic Programmer", "Andrew Hunt & David Thomas", "Programming", 3.0},
        {"9", "Clean Code", "Andrew Hunt", "Programming", 3.0},
        {"10", "The Midnight Library", "Matt Haig", "Fiction", 3.5},
        {"11", "Thinking, Fast and Slow", "Daniel Kahneman", "Psychology", 2.8}
    };

    char Auther[100];
    int Age;
    char Place[100];

    printf("Welcome to Author Company\n");
    printf("What is your name? ");
    fgets(Auther, sizeof(Auther), stdin);

    size_t len = strlen(Auther);
    if (len > 0 && Auther[len - 1] == '\n') {
        Auther[len - 1] = '\0';
    }

    printf("How old are you? ");
    scanf("%d", &Age);
    getchar();

    printf("Where do you live? ");
    fgets(Place, sizeof(Place), stdin);
    len = strlen(Place);
    if (len > 0 && Place[len - 1] == '\n') {
        Place[len - 1] = '\0';
    }

    printf("Your name is %s\n", Auther);

    if (Age >= 18) {
        printf("Your age is %d, you have access to our services.\n", Age);
    } else {
        printf("Your age is %d, you are not eligible for our services.\n", Age);
    }

    printf("You live in %s\n", Place);
    printf("-----------------------------------\n");

    char *Genres[] = {"Self-Help", "Sci-fi", "Research"};

    char TitleBoooks[500];
    char Rules[100];
    int Pages;
    int Salary = 70000;

    printf("This Form to become Auther\n");

    printf("What is the name of your title books?\n");
    fgets(TitleBoooks, sizeof(TitleBoooks), stdin);
    len = strlen(TitleBoooks);
    if (len > 0 && TitleBoooks[len - 1] == '\n') {
        TitleBoooks[len - 1] = '\0';
    }

    printf("How much page your books do you want?\n");
    scanf("%d", &Pages);
    getchar();

    printf("There is a rules\n");
    printf("Enter rules status (e.g., Pass or Fail): ");
    fgets(Rules, sizeof(Rules), stdin);
    len = strlen(Rules);
    if (len > 0 && Rules[len - 1] == '\n') {
        Rules[len - 1] = '\0';
    }

    if (strcmp(Rules, "Fail") != 0) {
        printf("Title: %s\n", books[0].title);
        printf("It have become 10k review for last 48\n");

        for (int i = 0; i < 11; i++) {
            printf("%s by %s (Rating: %.1f)\n", books[i].title, books[i].author, books[i].rating);
        }

        printf("There are also you have your title become uniqe\n");
        printf("You have a one requriment is has your book: %s\n", Genres[0]);
        printf("Our Salary is %d\n", Salary);
        printf("You have to pay because you fail for our requirement\n");

        for (int i = 0; i < 11; i++) {
            printf("%s\n", books[i].title);
        }
    }

    return 0;
}
