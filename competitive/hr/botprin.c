#include <stdio.h>
#include <string.h>

#include <math.h>
void displayPathtoPrincess(int n, char grid[101][101]){
    
    // declare variable
    
    //    printf("RIGHT");
    
    //    printf("\n");
    
    //    printf("UP");  
    
    int botrows=0, botcols=0, prinrows=0, princols =0;
    
    if(n < 100 && n % 2 != 0){
        for(int i = 0; i<n; i++){
            for(int j= 0; j<n; j++){
               if(grid[i][j]=='m' || grid[i][j]=='M'){
                   botrows = i;
                   botcols = j;
               }else if(grid[i][j]=='p' || grid[i][j]=='P'){
                   prinrows=i;
                   princols=j;
               }
            }   
        }
        
        // LEfT and RIGHT
        if(botrows > prinrows){
            while (botrows != prinrows){
                botrows--;
                printf("LEFT\n");
            }
        }else if(botrows < prinrows){
            while (botrows != prinrows){
                botrows++;
                printf("RIGHT\n");
            }
        }
        // UP and DOWN
        if(botcols > princols){
            while (botcols != princols){
                botcols--;
                printf("UP\n");
            }
        }else if(botcols < princols){
            while (botcols != princols){
                botcols++;
                printf("DOWN\n");
            }
        }       
    } 
}

int main(void) {

    int m;
    scanf("%d", &m);
    char grid[101][101]={};
    char line[101];

    for(int i=0; i<m; i++) {
        scanf("%s", line);
        strcpy(grid[i], line);
    }
    displayPathtoPrincess(m,grid);
    return 0;
}
