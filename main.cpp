#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>


using namespace std;

//Main program...
int main()
{
  int numDice;
  int sides;
  string input;
  bool game = true;
  srand(time(NULL));

while(game)
{
  cout<<"Number of dice: ";
  cin >> numDice;
  cout<<"Number of sides: ";
  cin >> sides;
  cout<<"\v";

  for(int i=0; i<numDice; i++)
  {
    cout<<"The dice landed on: "<<rand() % sides + 1 <<endl;
  }

  cout<<"Continue? yes, no: ";

  while(cin>>input)
  {
    if(input == "yes")
      {
        break;
      }
    else if(input == "no")
      {
        game=false;
        break;
      }
    else
      {
        cout << "must input yes, or no." << '\n';
        continue;
      }
      continue;
  }
}
  return 0;
}
