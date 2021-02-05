#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"array.h"
#include<time.h>
#include"stack.h"

const char RANK[13][2]={"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
const char SYMBOL[4][20]={"Clubs","Diamonds","Hearts","Spades"};


  
// C Program to shuffle a given array 




void shuffle( int arr[], int n , Stack* stack) 
{ 
	srand ( time(NULL) );
	for (int i = n-1; i > 0; i--) 
	{ 
		// Pick a random index from 0 to i 
		int j = rand() % (i+1);
		// Swap arr[i] with the element at random index 
		 push(stack,arr[j]);
		// swap(&arr[i], &arr[j]); 
	} 
}



void findCard(int n){
int rank,symbol;
rank=n%13;
symbol=n/13;
// return strcat(RANK[rank],SYMBOL[symbol]);
printf("%s of %s",RANK[rank],SYMBOL[symbol]);
}

int main()
{
    int dummy;
    int deck[52];
    for (int i = 0; i < 52; i++)
    {
        deck[i]=i;
    }
    Stack* playingDeck=createStack(52);

    Stack* discardDeck=createStack(26);
    shuffle(deck,52,playingDeck);
    printf("%d",peek(playingDeck));
    printf("End of program........\n");
    scanf("%d",&dummy);

}