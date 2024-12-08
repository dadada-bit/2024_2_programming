//
//  board.c
//  sharkGame
//

#include "board.h"

// ----- EX. 3 : board ------------
#define N_COINPOS       12
#define MAX_COIN        4
// ----- EX. 3 : board ------------
// ----- EX. 5 : shark ------------
#define MAX_SHARKSTEP   6
#define SHARK_INITPOS   -4
// ----- EX. 5 : shark ------------
// ----- EX. 3 : board ------------
static int board_coin[N_BOARD];
static int board_status[N_BOARD]; //0 - OK, 1 - destroyed
// ----- EX. 3 : board ------------
static int shark_position;

// ----- EX. 3 : board ------------
void board_printBoardStatus(void)
{
    int i;
    
    printf("----------------------- BOARD STATUS -----------------------\n");
    for (i=0;i<N_BOARD;i++)
    {
        printf("|");
        
        if (i == shark_position){
        	printf("X");
		}
		
        else if (board_status[i] == BOARDSTATUS_NOK){
            printf("X");
        }else{
            printf("O");
        }
    }
    printf("|\n");
    printf("------------------------------------------------------------\n");
}



int board_initBoard(void)
{
	srand((unsigned int)time(NULL));
    int i;
    
    //variable initialization
    for (i=0;i<N_BOARD;i++)
    {
        board_status[i] = BOARDSTATUS_OK;
        board_coin[i] = 0;
    }
        
    
// ----- EX. 5 : shark ------------
    shark_position = SHARK_INITPOS;
// ----- EX. 5 : shark ------------

    //coin allocation
    for (i=0;i<N_COINPOS;i++)
    {
    	while(board_coin[i] == 0)
    	{
    		int randomPosition = rand() % N_BOARD;
    		int randomValue = 1 + (rand() % MAX_COIN);

    		if(board_coin[randomPosition] == 0)
			{
				board_coin[i] = randomValue;
				}	
    		
		}
	}
    
    return N_COINPOS;
}
// ----- EX. 3 : board ------------


// ----- EX. 5 : shark ------------
int board_stepShark(void)
{
	int step = 1 + (rand() % MAX_SHARKSTEP); // Random step size (1~6)
    printf("Shark moves %d steps.\n", step);
    
    for(int i = 0; i < step; i++){
    	shark_position = (shark_position + 1) % N_BOARD;
    	board_status[shark_position] = BOARDSTATUS_NOK;
    	printf("Shark moved to position %d\n", shark_position);
	}
	
	if (shark_position >= N_BOARD) {
		shark_position = N_BOARD - 1;
	}

    return shark_position;
}
// ----- EX. 5 : shark ------------


// ----- EX. 3 : board ------------
int board_getBoardStatus(int pos)
{
	if (pos < 0 || pos >= N_BOARD) return BOARDSTATUS_NOK;
	
    return board_status[pos];
}

int board_getBoardCoin(int pos)
{
    int coin = board_coin[pos];
    board_coin[pos] = 0;
    
    return coin;
}
// ----- EX. 3 : board ------------
