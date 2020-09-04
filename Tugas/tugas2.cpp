#include <stdio.h>
#define secretKey "Super Secret Key That Never Can Be Found"
#define secretLength (sizeof(secretKey)/sizeof(secretKey[0]) - 1)

int checkScore(char *string){
    int index = 0;
    int score = 0;
    while(secretKey[index] != '\0' && string[index] != '\0'){
        if(secretKey[index] == string[index]){
            score++;
        }
        index++;
    }
    return score;
}

int main(int argc, char **argv){
    int score;
    char input[255];

    printf("Welcome to my game, try to guess my secret key ;)\n");
    printf("You need %ld in score to win\n", secretLength);

    do{
        printf("Your input : ");
        scanf("%[^\n]", input); getchar();
        score = checkScore(input);
        printf("Your score is : %d\n", score);
        input[0] = '\0';
    }while(score != secretLength);

    printf("Congrats, you win...\n");
    printf("Nothing :)\n");

    return 0;
}
