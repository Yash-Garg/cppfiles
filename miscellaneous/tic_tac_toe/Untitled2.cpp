/*
Movement Table:
	LeftArrowKey = 75
	RightArrowKey = 77
	UpArrowKey = 72
	DownArrowKey = 80
*/


#define box_len 3
#define N_ROW 5
#define N_COL 3
#include <iostream>
#include "robot_2.1.h"
#include <conio.h>
#include <windows.h>
using namespace std;


const int box_len_2 = box_len;
COORD input_start;
COORD input_end;
char play_box[box_len][box_len];
int i = 0, j = 0;


void ClearPlayGround();
void CreatePlayGround( int, int );
int GetPlaySize( int, char );
void MoveUp();
void MoveDown();
void MoveLeft();
void MoveRight();
void GetUserInput( int );
int GetPlayGroundStat( int, int );
int WhoVictory();
int isFull();


int main() {
	
	ascii_heading( "TIC", 1 );
	cout << endl << endl;
	ascii_heading( "TAC", 1 );
	cout << endl << endl;
	ascii_heading( "TOE", 1 );
	cout << endl << endl << endl;
	
	ClearPlayGround();
	int len_l = GetPlaySize( box_len, 'l');
	int len_h = GetPlaySize( box_len, 'h' );
	CreatePlayGround( len_l, len_h );
	
	// Playing the game
	// All in Testing Mode Currently
	
	int player = 1;
	while( !WhoVictory() && !isFull() ) {
		GetUserInput( player );
		switch( player ) {
			case 1:
				player = 2;
				break;
			case 2:
				player = 1;
				break;
		}
	}
	
	gotoXY( 0, input_end.Y + N_COL, 0 );
	
	switch( WhoVictory() ) {
		case 0:
			cout << "It's a Tie" << endl;
			break;
		case 1:
			cout << "Player 1 Wins!" << endl;
			break;
		case 2:
			cout << "Player 2 Wins!" << endl;
			break;
	}
	
	return 0;
}

void ClearPlayGround() {
	for( int i = 0; i < box_len; i++ ) {
		for( int j = 0; j < box_len; j++ ) {
			play_box[i][j] = '\0';
		}
	}
	return;
}

int GetPlaySize( int len, char type ) {
	switch( type ) {
		case 'l':
			return ( (len*N_ROW) + ( len - 1 ) );
			break;
		case 'h':
			//return ( len*2 );
			return len*N_COL;
			break;
	}
}

void CreatePlayGround( int len, int height ) {
	int counter = ( len + 1) / ( N_ROW + 1 );
	
	cout << endl;
	center_align( len );
	
	COORD box_start, box_end;
	box_start.X = getX();
	box_start.Y = getY();
	
	for( int i = 0; i < counter - 1; i++ ) {
		
		for( int k = 0; k < N_COL - 1; k++ ) {
			// A row without a base line
			center_align( len );
			for( int j = 0; j < counter - 1; j++ ) {
				for( int n = 0; n < N_ROW; n++ ) {
					cout << " ";
				}
				cout << "|";
			}
			for( int n = 0; n < N_ROW; n++ ) {
				cout << " ";
			}
			cout << endl;
		}
		
		
		
		// A row with a base line
		center_align( len );
		for( int j = 0; j < counter - 1; j++ ) {
			for( int n = 0; n < N_ROW; n++ ) {
				cout << "_";
			}
			cout << "|";
		}
		for( int n = 0; n < N_ROW; n++ ) {
			cout << "_";
		}
		cout << endl;
	}
	
	for( int i = 0; i < N_COL; i++ ) {
		
		// Row without base line
		center_align( len );
		for( int j = 0; j < counter - 1; j++ ) {
			for( int n = 0; n < N_ROW; n++ ) {
				cout << " ";
			}
			cout << "|";
		}
		for( int n = 0; n < N_ROW; n++ ) {
			cout << " ";
		}
		cout << endl;
	}
	
	box_start.X = box_start.X + ceil( N_ROW / 2 );
	box_start.Y = box_start.Y + ceil( N_COL / 2 );
	
	box_end.X = box_start.X + ( N_ROW * ( box_len - 1) ) + ( box_len - 1 );
	box_end.Y = box_start.Y + ( N_COL * ( box_len - 1 ) );
	
	gotoXY( box_start.X, box_start.Y, 0 );
	//gotoXY ( box_end.X, box_end.Y, 0 );
	
	input_start = box_start;
	input_end = box_end;
	
	return;
}

void MoveUp() {
	if( getY() - N_COL >= input_start.Y ) {
		gotoXY( 0, -N_COL, 1 );
		j--;
	}
	return;
}

void MoveDown() {
	if( getY() + N_COL <= input_end.Y ) {
		gotoXY( 0, +N_COL, 1 );
		j++;
	}
	return;
}

void MoveLeft() {
	if( getX() - ( N_ROW + 1 ) >= input_start.X ) {
		gotoXY( -( N_ROW + 1 ), 0, 1 );
		i--;
	}
	return;
}

void MoveRight() {
	if( getX()  + ( N_ROW + 1 ) <= input_end.X ) {
		gotoXY( +( N_ROW + 1 ), 0, 1 );
		i++;
	}
	return;
}

void GetUserInput( int player_no ) {
	char selection;
	
	do {
		selection = getch();
		
		switch( selection ) {
			case 75:
				MoveLeft();
				break;
			case 77:
				MoveRight();
				break;
			case 72:
				MoveUp();
				break;
			case 80:
				MoveDown();
				break;
			case 'x':
				if( player_no == 1 ) {
					if( !GetPlayGroundStat( i, j ) ) {
						play_box[i][j] = 'x';
						cout << 'X';
						gotoXY( -1, 0, 1 );
						break;
					}
				}
				selection = '\0';
				break;
			case 'o':
				if( player_no == 2 ) {
					if( !GetPlayGroundStat( i, j ) ) {
						play_box[i][j] = 'o';
						cout << 'O';
						gotoXY( -1, 0, 1 );
						break;
					}				
				}
				selection = '\0';
				break;
			case 13:
				switch( player_no ) {
					case 1:
						if( !GetPlayGroundStat( i, j ) ) {
							play_box[i][j] = 'x';
							cout << 'X';
							gotoXY( -1, 0, 1 );
							break;
						}
						break;
					case 2:
						if( !GetPlayGroundStat( i, j ) ) {
							play_box[i][j] = 'o';
							cout << 'O';
							gotoXY( -1, 0, 1 );
							break;
						}
						break;
				}
		}
	}while( selection != 'x' && selection != 'o' && selection != 13 );
}

int GetPlayGroundStat( int x, int y ) {
	if( play_box[x][y] == '\0' ) {
		return 0;
	}
	else {
		return 1;
	}
}

int WhoVictory() {
	char player_list[2] = {'x','o'};
	int counter = 0;
	for( int k = 0; k < 2; k++ ) {
		for( int m = 0; m < box_len; m++ ) {
			for( int n = 0; n < box_len; n++ ) {
				if( play_box[m][n] == player_list[k] ) {
					counter++;
				}
			}
			if( counter == box_len ) {
				switch( k ) {
					case 0:
						return 1;
						break;
					case 1:
						return 2;
						break;
				}
			}
			else {
				counter = 0;
			}
		}		
	}
	
	for( int k = 0; k < 2; k++ ) {
		for( int m = 0; m < box_len; m++ ) {
			for( int n = 0; n < box_len; n++ ) {
				if( play_box[n][m] == player_list[k] ) {
					counter++;
				}
			}
			if( counter == box_len ) {
				switch( k ) {
					case 0:
						return 1;
						break;
					case 1:
						return 2;
						break;
				}
			}
			else {
				counter = 0;
			}
		}		
	}
	
	for( int k = 0; k < 2; k++ ) {
		for( int n = 0; n < box_len; n++ ) {
			if( play_box[n][n] == player_list[k] ) {
				counter++;
			}
		}
		if( counter == box_len ) {
			switch( k ) {
				case 0:
					return 1;
					break;
				case 1:
					return 2;
					break;
			}
		}
		else {
			counter = 0;
		}
	}
	
	for( int k = 0; k < 2; k++ ) {
		for( int n = 0; n < box_len; n++ ) {
			if( play_box[box_len - n - 1][n] == player_list[k] ) {
				counter++;
			}
		}
		if( counter == box_len ) {
			switch( k ) {
				case 0:
					return 1;
					break;
				case 1:
					return 2;
					break;
			}
		}
		else {
			counter = 0;
		}
	}
	return 0;
}

int isFull() {
	int counter = 0;
	for( int n = 0; n < box_len; n++ ) {
		for( int m = 0; m < box_len; m++ ) {
			if( play_box[n][m] != '\0' ) {
				counter++;
			}
		}
	}
	if( counter == ( box_len * box_len ) ) {
		return 1;
	}
	else {
		return 0;
	}
}
