#include <stdio.h>
#include <ctype.h>

int main() {
    char input[256];
    int result = 0;
    int current = 0;
    char op = '+'; 
    
    scanf("%s", input);

    for (int i = 0; input[i] != '\0'; i++) {

        if (isdigit(input[i])) {
            current = current * 10 + (input[i] - '0');
        }

        if (!isdigit(input[i]) || input[i + 1] == '\0') {

            if (op == '+') result += current;
            else if (op == '-') result -= current;
            else if (op == '*') result= current;
            
            op = input[i];
            current = 0;

        }
    }
    
    printf("Result = %d\n\n", result);
    return 0;
}