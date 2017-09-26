#include<cstdlib>
#include<ctime>
#include<iostream>

using namespace std;

int main() 
{ 
  srand( time(0) );
  int guess;
  int train;
  train=rand() % 10 + 1;

  cout<<"Guess a random number between 1 and 10"<<endl;
  cin>>guess; 

  if(guess==train) 
  {
   cout<<" You, playing correctly! you win! " <<endl;
  }
  else if (guess>train) 
  {
  int A;
   A = guess - train;
   cout<<"you were far by "<<A<<" Sorry, you lose :( "<<endl;
  }  
    else if (guess<train)
  {
    int A;
    A = train - guess;
    cout<<"you were far by "<<A<<" Sorry, you lose :( "<<endl;
     }


    return 0;
}
  
