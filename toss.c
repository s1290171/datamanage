#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int judge;
  int round = 1,head = 0,tail = 0;
  int i;

  srand(time(NULL));
  
  printf("Tossing a coin...\n");
  
  for(i = 0; i < 3; i++){
    judge = rand();
    printf("%d\n",judge);
    
    if( judge % 2 == 0){
      printf("Round %d: Heads\n",round);
      round++;
      head++;
    }
    else{
      printf("Round %d: Tails\n",round);
      round++;
      tail++;
    }
  }

  printf("Heads: %d, Tails: %d\n",head,tail);

  if(head > tail) printf("You won!\n");
  else printf("You lost!\n");
    
  return 0;
}
