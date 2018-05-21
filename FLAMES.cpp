#include <iostream>
#include <string.h>
using namespace std;

void GetName( char* );
void RmLastName( char* );
void RmRepitition( char*, char* );
void CleanName( char* );
int GetFlameIndex( char*, char* );
char CheckFlame( int );
int HowClean( char* );

int main() {
	char per[2][100];
	
	for( int i = 0; i < 2; i++ ) {
		GetName( per[i] );
		RmLastName( per[i] );
	}
	
	RmRepitition( per[0], per[1] );
	
	for( int i = 0; i < 2; i++ ) {
		CleanName( per[i] );
	}
	
	int flame_no = GetFlameIndex( per[0], per[1] );
	
	char flame = CheckFlame( flame_no );
	
	cout << flame << endl;
	
	return 0;
}

void GetName( char* person ) {
	cout << "Enter the name of the person: ";
	cin.getline( person, 100 );
	return;
}

void RmLastName( char* person ) {
	int len = strlen( person );
	for( int i = 0; i < len; i++ ) {
		if( person[i] == ' ' ) {
			for( int j = i; j < len; j++ ) {
				person[j] = '\0';
			}
			break;
		}
	}
	return;
}

void RmRepitition( char* person1, char* person2 ) {
	for( int i = 0; i < strlen( person1 ); i++ ) {
		for( int j = 0; j < strlen( person2 ); j++ ) {
			if( person1[i] == person2[j] ) {
				person1[i] = 176;
				person2[j] = 176;
				break;
			}
		}
	}
	return;
}

void CleanName( char* person ) {
	int counter = 0;
	char temp[100];
	for( int i = 0; i < 100; i++ ) {
		temp[i] = '\0';
	}
	for( int i = 0; i < strlen( person ); i++ ) {
		if( ( person[i] >= 'a' && person[i] <= 'z' ) || ( person[i] >= 'A' && person[i] <= 'Z' ) ) {
			temp[counter] = person[i];
			counter++;
		}
	}
	
	for( int i = 0; i < 100; i++ ) {
		person[i] = '\0';
	}
	
	strcpy( person, temp );
	
	return;
}

int GetFlameIndex( char* person1, char* person2 ) {
	int index = 0;
	for( int i = 0; i < strlen( person1 ); i++ ) {
		if( person1[i] != (char)176 ) {
			index++;
		}
	}
	for( int i = 0; i < strlen( person2 ); i++ ) {
		if( person2[i] != (char)176 ) {
			index++;
		}
	}
	return index;
}

char CheckFlame( int index ) {
	
	int word_pos = 0, index_rem = 1;
	char check[] = {"FLAMES"};
	
	while( HowClean( check ) > 1 ) {
  while(index_rem<index){
            if(word_pos==strlen(check)-1) {
                if(check[word_pos]!=(char)176) {
                word_pos=0;
                index_rem++;
            }
                else {
                word_pos=0;
            }
            }
            else {
                if(check[word_pos]!=(char)176) {
                word_pos++;
                index_rem++;
            }
                else {
                word_pos++;
            }
        }
        }
		while(check[word_pos] == (char)176) {
            if(word_pos==strlen(check)-1) {
            word_pos=0;
        }
            else{
                word_pos++;
            }
        }
  check[word_pos] = char(176);
		cout << check << endl;
  index_rem=1;
	}
	
	for( int i = 0; i < strlen( check ); i++ ) {
		if( check[i] != (char)176 ) {
			return check[i];
			break;
		}
	}
}

int HowClean( char* str ) {
	int counter = 0;
	for( int i = 0; i < strlen( str ); i++ ) {
		if( str[i] == (char)176 ) {
			counter++;
		}
	}
	
	counter = strlen( str ) - counter;
	
	return counter;
}
