
#include <stdio.h>
#include <string.h>

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
    if (len > 0 && Auther[len - 1] == '\n') Auther[len - 1] = '\0';

    printf("How old are you? ");
    scanf("%d", &Age);
    getchar();

    printf("Where do you live? ");
    fgets(Place, sizeof(Place), stdin);
    len = strlen(Place);
    if (len > 0 && Place[len - 1] == '\n') Place[len - 1] = '\0';

    printf("\n--- Personal Information ---\n");
    printf("Your name is %s\n", Auther);
    if (Age >= 18) {
        printf("Your age is %d, you have access to our services.\n", Age);
    } else {
        printf("Your age is %d, you are not eligible for our services.\n", Age);
    }
    printf("You live in %s\n", Place);

    // AUTHOR APPLICATION
    printf("\n-----------------------------------\n");
    printf("This form is to become an Author.\n");

    char TitleBooks[100];
    char Rules[100];
    int Pages;
    int Salary = 70000;
    char *Genres[] = {"Self-Help", "Sci-fi", "Research"};

    printf("What is the title of your book? ");
    fgets(TitleBooks, sizeof(TitleBooks), stdin);
    len = strlen(TitleBooks);
    if (len > 0 && TitleBooks[len - 1] == '\n') TitleBooks[len - 1] = '\0';

    printf("How many pages does your book have? ");
    scanf("%d", &Pages);
    getchar();

    printf("Enter the rule check status (Pass/Fail): ");
    fgets(Rules, sizeof(Rules), stdin);
    len = strlen(Rules);
    if (len > 0 && Rules[len - 1] == '\n') Rules[len - 1] = '\0';

    printf("\n--- Review Status ---\n");

    if (strcmp(Rules, "Fail") != 0) {
        printf("Book example for success:\n");
        printf("Title: %s, Rating: %.1f\n", books[0].title, books[0].rating);
        printf("It received 10k reviews in the last 48 hours.\n");

        for (int i = 0; i < 1; i++) {
            printf("Requirement 1: Maintain at least a 4.0 rating for 90 days.\n", i + 1);
            printf("Requirement 2: It become one of most recommend book on Amazon book\n", i + 1);
            printf("Requirement 3: You have become more popular around the world for 120 days\n", i + 1);
            printf("Requirement 4: You have to make 35 event at least for a year\n", i + 1);
            printf("Requirement 5: You have become top 10 Authur for 2 year for Publish\n", i + 1);


        }
    } else {
        printf("You failed the rule check. Here's a list of successful authors:\n");
        printf("%s by %s\n", books[0].title, books[0].author);
        printf("%s by %s\n", books[1].title, books[1].author);
        printf("%s by %s\n", books[6].title, books[6].author);
    }

    printf("\n--- Additional Notes ---\n");
    printf("Your title must be unique.\n");
    printf("Your book must match one of our genres: ");
    for (int i = 0; i < 3; i++) {
        printf("%s ", Genres[i]);
    }
    printf("\n");

    printf("Our starting salary is $%d\n", Salary);
    if (strcmp(Rules, "Fail") == 0) {
        printf("You must pay a review fee because you failed our requirements.\n");
    }

    printf("\n--- Company Book List ---\n");
    for (int i = 0; i < 11; i++) {
        printf("%s by %s (Genre: %s, Rating: %.1f)\n",
               books[i].title, books[i].author, books[i].genre, books[i].rating);
    }

    return 0;
}

