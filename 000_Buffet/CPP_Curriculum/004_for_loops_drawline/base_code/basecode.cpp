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
cout << "Which direction would you like your line?" << endl;
cin >> sym;

cout << "How long would you like your line to be?" << endl;
cin >> bob;

cout << "What symbol would you like your line to be?" << endl;
cin >> dog;


if(sym == 'h')
{
	for(i= 0 ;i <= bob ; i++){
		cout << dog;
	}
}
if (sym == 'v')
{
	for(i = 0; i <= bob; i++){
 	cout << dog << endl;
 }
}
 
 
 
	
 












}
