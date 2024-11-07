#include<stdio.h>

int main(){
	
	// declaration of 2D array
	
    int scores[2][2];
    
    
    scores[0][0] = 65;
    scores[0][1] = 92;
    scores[1][0] = 84;
    scores[1][1] = 72;
    scores[0][0] = 35;
    scores[0][1] = 70;
    scores[1][0] = 59;
    scores[1][1] = 67;
    
    
    for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("%d ",scores[i][j]);
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}