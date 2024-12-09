#include <stdio.h>
#include <stdlib.h>

typedef enum{
    INT,
} TypeLiteral;

typedef enum {
    EXIT,
} TypeKeyword;

typedef enum {
    OPEN_PAREN,
    CLOSE_PAREN,
    SEMI,

} TypeSeperator;

typedef struct {
    TypeLiteral type;
    int value;
} TokenLiteral;

typedef struct {
    TypeKeyword type;
} TokenKeyword;

typedef struct {
    TypeSeperator type;
} TokenSeperator;

void lexer(FILE *file){
    char current = fgetc(file);

    while(current != EOF){
        if(current == ';'){
            printf("Found SEMICOLON\n");  
        } else if(current == '('){
            printf("Found OPEN_PAREN\n");
        } else if(current == ')'){
            printf("Found CLOSE_PAREN\n");
        }

        current = fgetc(file);

    }

}

int main(){
    FILE *file;
    file = fopen("test.unn","r");
    lexer(file);
}