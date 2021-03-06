#include <stdbool.h>

void move_right(short int grid1[][4],short int x, short int y){
    y++;                                            //x posição do 0 na horizontal
    grid1[x][y-1]=grid1[x][y];                      //y posição do 0 na vertical
    grid1[x][y]=0;
}

void move_left(short int grid1[][4],short int x, short int y){                                             
    y--;                                             
    grid1[x][y+1]=grid1[x][y];   
    grid1[x][y]=0;

}

void move_up(short int grid1[][4], short int x, short int y){                                             
    x--;                                             
    grid1[x+1][y]=grid1[x][y];   
    grid1[x][y]=0;    
}

void move_down(short int grid1[][4],short int x, short int y){                                                 
    x++;                                             
    grid1[x-1][y]=grid1[x][y];   
    grid1[x][y]=0;    
}

bool isMovimentoPossivel(char move, char last, short int zeroLocation[2]){
    if(move=='r'){
        if(last=='l'){
            return false;
        }
        if(zeroLocation[1] == 3){
            return false;
        }
        return true;
    }


    else if(move=='l'){
        if(last=='r'){
            return false;
        }
        if(zeroLocation[1] == 0){
            return false;
        }
        return true;
    }


    else if(move=='u'){
        if(last=='d'){
            return false;
        }
        if(zeroLocation[0] == 0){
            return false;
        }
        return true;
    }


    else if(move=='d'){
        if(last=='u'){
            return false;
        }
        if(zeroLocation[0] == 3){
            return false;
        }
        return true;
    }

}