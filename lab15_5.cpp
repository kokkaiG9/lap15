#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify the code above this line
//Write definition of shuffle() using pointer after this line. 
void shuffle(int *a,int *b,int *c,int *d){
	int *g = a, *h = b, *i = c, *j = d;
    int money[] = {*g, *h, *i, *j};
    *a = money[rand()%4];
    do {
        *b = money[rand()%4];
    } while(*b == *a);
    do {
        *c = money[rand()%4];
    } while(*c == *a || *c == *b);
    do {
        *d = money[rand()%4];
    } while(*d == *a || *d == *b || *d == *c);
}