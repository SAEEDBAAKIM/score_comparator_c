#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name1 = get_string("What's the name of person one? ");
    printf("Hello, %s!\n", name1);

    int score1 = get_int("Enter %s's score: ", name1);

    string name2 = get_string("What's the name of person two? ");
    printf("Hello, %s!\n", name2);

    int score2 = get_int("Enter %s's score: ", name2);

    if (score1 < score2)
    {
        printf("%s (%d) is less than %s (%d)\n", name1, score1, name2, score2);
    }
    else if (score1 > score2)
    {
        printf("%s (%d) is bigger than %s (%d)\n", name1, score1, name2, score2);
    }
    else
    {
        printf("Both scores are equal.\n");
    }

    return 0;
}
