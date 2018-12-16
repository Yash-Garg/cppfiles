#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
char digits[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
char u_letter[26];
int w_count =0, v_count =0, d_count =0, ul_count =0, line_count =0;

int main(){
	
	for( int i=0 ; i<26 ; i++ ){
		u_letter[i] = ((char )i + 'A');	
	}
	char word[20];
	fstream file;
	file.open("test.txt" , ios::in);
	while ( file >> word ){
		for( int i=0 ; i<strlen(word) ; i++ ){
			for( int j=0 ; j<10 ; j++ ){
				if( word[i] == vowels[j] ){
					v_count++;	
				}
			}
		}
		for( int i=0 ; i<strlen(word) ; i++ ){
			for( int j=0 ; j<10 ; j++ ){
				if( word[i] == digits[j] ){
					d_count++;	
				}
			}
		}
		for( int i=0 ; i<strlen(word) ; i++ ){
			for( int j=0 ; j<26 ; j++ ){
				if( word[i] == u_letter[j] ){
					ul_count++;	
				}
			}
		}
		w_count++;	
	}
	file.close();
	string line;
	file.open("test.txt" , ios::in);
	while( getline(file , line) ){
		line_count++;	
	}
	file.close();
	cout<<"Count:- \n";
	cout<<"\tWord: " << w_count << endl;
	cout<<"\tvowels: " << v_count << endl;
	cout<<"\tdigits: " << d_count << endl;
	cout<<"\tUppercase Letters: " << ul_count << endl;
	cout<<"\tLines: " << line_count << endl;
	cout<<endl;
	system("pause");
	return 0;	
}
