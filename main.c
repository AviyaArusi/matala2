# include <stdio.h>
# include "my_mat.h"
# define FINISH 0


int main(){
char user_input = 'E'; // start with a random char jast for first loop entring.
int i,j;
while (user_input != 'D')
{
    printf("\nPlease enter A\\B\\C\\D:\n");
    scanf("%c", &user_input);
    switch (user_input)
    {
    case 'A':
        mat_input();
        break;
     case 'B':
        printf("Please enter i value:\n");
        scanf("%d", &i);
        printf("Please enter j value:\n");
        scanf("%d", &j);
        there_is_a_route(i,j);
        break;
     case 'C':
        printf("Please enter i value:\n");
        scanf("%d", &i);
        printf("Please enter j value:\n");
        scanf("%d", &j);
        printf("%d", sortest_route(i, j));
        break;

    // default:
    //     break;
    }
}
printf("End of program");

    return FINISH;
}

