#include <stdio.h>

void print_alien(){
    int enemy_image[11][29] = {
        {0, 0, 0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 0},
		{0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3},
		{0, 0, 3, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 3},
        {0, 0, 3, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 3},
        {0, 0, 3, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 3},
        {0, 0, 3, 0, 1, 0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0, 3},
        {0, 0, 3, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 3},
        {0, 0, 3, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 3},
        {0, 0, 3, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 3},
        {0, 0, 3, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 3},
		{0, 0, 4, 0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 0, 5},
    };

	printf("\n\n");

    for(int i = 0; i < 11; i++){
        for(int j = 0; j < 29; j++){

            if(enemy_image[i][j] == 0){
                printf(" ");
            } else if(enemy_image[i][j] == 1){
                printf("#");
            } else if(enemy_image[i][j] == 2){
                printf("_");
            } else if(enemy_image[i][j] == 3){
                printf("|");
			} else if(enemy_image[i][j] == 4){
                printf("l");
			} else if(enemy_image[i][j] == 5){
                printf("j");
			}
        }
        printf("\n");
    }
	printf("\n");

}
int main(void){

    for (int i = 1; i <= 5; i++)
    {
        print_alien();
        printf("< %d匹目捕獲！\n\n", i);
    }
    return (0);
}
