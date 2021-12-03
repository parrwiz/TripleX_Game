#include <iostream>
#include <ctime>
using namespace std;
void printintro(int difficulty){
    cout<<"\nWelcome to the best game of the decade."<<endl;
    cout<<"Enter your name:";
    string name;
    cin>>name;
    cout<<"\n************************"<<endl;
    cout<<"       Hello, "<<name;
    cout<<"\n************************"<<endl;
     cout<<"\nYou are a secret agent\nand you are trying to save your country\nbut to save your country\nyou need to first pass\nsome challenges."<<endl;
   cout<<"In total there are 10 challenges for you"<<endl;
 
   
    
}
bool playgame(int difficulty){
  
  
   //  cout<<"Enter your code to accept the mission:";
     
     //declaring three number
     const int codeA = rand()%difficulty+difficulty;
     const int codeB = rand()%difficulty+difficulty; const int codeC = rand()%difficulty+difficulty;
     const int codeSum= codeA+codeB+codeC;
     const int codeProduct = codeA*codeB*codeC;

     //pring 
     cout<<endl;
     cout<<"There are 3 numbers in the code"<<endl;
     cout<<"The sum add up to "<<codeSum<<"\n and the product  is "<<codeProduct<<endl;
        int GuessA, GuessB, GuessC;
        cin>>GuessA;
        cin>>GuessB;
        cin>>GuessC;
        int Guesssum = GuessC+GuessA+GuessB;
        int Guessproduct=GuessC*GuessB*GuessA;
  
    if(Guessproduct==codeProduct && Guesssum==codeSum){
        cout<<"Nice job, your country needs more\npeople like you";
        cout<<"\nYour difficulty level is "<<difficulty;
        return true;
    }else{
        difficulty=1;
              cout<<"\nYour difficulty level is "<<difficulty;
        cout<<"You digust ME, you are disgrace to your country";
        return false;
    }
       



}
int main()
{
   
    string name;
    cin>>name;
    srand(time(NULL));
    int maxdifficulty =10;
    int LevelDifficulty = 1;
      printintro(LevelDifficulty);
    while(true)
    {

        bool bLevelComplete = playgame(LevelDifficulty);
        std::cin.clear(); // Clears any errors
        std::cin.ignore(); // Discards the buffer

        if (bLevelComplete) 
        {
            ++LevelDifficulty;
        }
        if(LevelDifficulty==11){
            cout<<"\nCongratulations! "<<name<<"\nYou have successfully saved your country soldier";
            break;
        }
       

    }

    return 0;
}
