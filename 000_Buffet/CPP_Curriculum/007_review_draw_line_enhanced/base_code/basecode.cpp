// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	cout<<"yeah we are starting c++"<<endl;







int i;
char sym;
int bob;
char dog;
int green;
int trash;
cout << "Which direction would you like your line?" << endl;
cin >> sym;

cout << "How long would you like your line to be?" << endl;
cin >> bob;

cout << "What symbol would you like your line to be?" << endl;
cin >> dog;

cout << "Please choose your x coordinate." << endl;
cin >> green;

cout << "Please choose your y coordinate." << endl;
cin >> trash;

if(sym == 'h')
{
	for(i= 0 ;i <= bob ; i++){
		gotoxy(green, trash);
		cout << dog;
	}
}
if (sym == 'v')
{
	for(i = 0; i <= bob; i++){
		gotoxy(green, trash);
 	cout << dog << endl;
 }
}
 
 
 
	
 












}
