#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 11

struct Book {
    char id[5];
    char title[100];
    char author[50];
    char genre[50];
    float rating;
};

// Function to remove newline from strings
void removeNewline(char *str) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') str[len - 1] = '\0';
}

// Display all company books
void displayBooks(struct Book books[], int count) {
    printf("\n--- Company Book List ---\n");
    for (int i = 0; i < count; i++) {
        printf("%2d. \"%s\" by %s | Genre: %s | Rating: %.1f\n",
               i + 1, books[i].title, books[i].author, books[i].genre, books[i].rating);
    }
}

int main() {
    struct Book books[MAX_BOOKS] = {
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

    // Personal info
    char authorName[100], location[100];
    int age;

    printf(" Welcome to Author Company!\n");

    printf("What is your name? ");
    fgets(authorName, sizeof(authorName), stdin);
    removeNewline(authorName);

    printf("How old are you? ");
    scanf("%d", &age);
    getchar(); // consume leftover newline

    printf("Where do you live? ");
    fgets(location, sizeof(location), stdin);
    removeNewline(location);

    printf("\n--- Personal Information ---\n");
    printf(" Name: %s\n", authorName);
    printf(" Age: %d\n", age);
    printf(" Location: %s\n", location);

    if (age < 18) {
        printf(" You are not eligible to use our author services.\n");
        return 0;
    }

    printf(" You are eligible to use our author services.\n");

    // Book submission
    printf("\n Author Application Form\n");

    char newBookTitle[100], ruleStatus[20], bookGenre[50];
    int pages;
    int salary = 70000;

    printf("Enter your book's title: ");
    fgets(newBookTitle, sizeof(newBookTitle), stdin);
    removeNewline(newBookTitle);

    printf("How many pages? ");
    scanf("%d", &pages);
    getchar(); // consume newline

    printf("Enter your book's genre: ");
    fgets(bookGenre, sizeof(bookGenre), stdin);
    removeNewline(bookGenre);

    printf("Enter rule check status (Pass/Fail): ");
    fgets(ruleStatus, sizeof(ruleStatus), stdin);
    removeNewline(ruleStatus);

    printf("\n--- Review Status ---\n");

    if (strcmp(ruleStatus, "Pass") == 0) {
        printf("✅ Congratulations! You passed our initial review.\n");
        printf(" Your chosen genre: %s\n", bookGenre);
        printf(" Example of a successful book:\n");
        printf(" \"%s\" with rating %.1f (10k reviews in 48 hours)\n", books[0].title, books[0].rating);

        printf("\n Success Requirements:\n");
        printf("1. Maintain a 4.0+ rating for 90 days.\n");
        printf("2. Become a top recommendation on Amazon.\n");
        printf("3. Be recognized globally for 120 days.\n");
        printf("4. Host 35+ events per year.\n");
        printf("5. Be in the top 10 authors for at least 2 years.\n");
    } else {
        printf("❌ You failed the rule check. View successful examples:\n");
        printf("- \"%s\" by %s\n", books[0].title, books[0].author);
        printf("- \"%s\" by %s\n", books[1].title, books[1].author);
        printf("- \"%s\" by %s\n", books[6].title, books[6].author);
        printf(" You will need to pay a review fee.\n");
    }

    printf("\n Additional Notes:\n");
    printf("• Title must be unique.\n");
    printf("• Genre submitted: %s\n", bookGenre);
    printf("💼 Starting salary: $%d\n", salary);

    // Show book list
    displayBooks(books, MAX_BOOKS);

    printf("\n✅ Thank you for applying to Author Company!\n");

    return 0;
}
