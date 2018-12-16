#include<iostream>
using namespace std ;

int findpos(char s[], char c);

int main(){
	
	char string [80], ch;
	int y = 0 ;
	
	cout <<"enter main string : \n" ;
	cin.getline(string,80) ;
	cout << "enter the character to be searched for : \n" ;
	cin.get(ch) ;
	
	y = findpos(string,ch) ;
	
	if(y == -1)
	cout <<"\n sorry! character is not in the string\n" ;
	return 0 ;   
}                           //end of main().

int findpos(char s[],char c){ 
 
 int flag = -1 ;
  
  for(int i = 0 ; s[i] != '\0' ; i++ ){  
    
	if(s[i] == c){   
	  flag = 0 ; 
      cout <<"\nthe character is in the string at position "<< i + 1 ;
        }
      }
  return(flag) ;
}
