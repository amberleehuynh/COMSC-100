#include <iostream>

#include <fstream>//for input file stream

#include <string.h>// for memset

#include <queue>

using namespace std;

int main(){

  //input file to stdin

  freopen("elections.txt", "r", stdin);//elections.txt in same folder

  int n; // number of lines to follow in each test case

  while(cin >> n){ //each test case

      int ballots = n/3; //number of ballots

      queue<int> q[ballots]; //queue[i].front will be the current best choice of a ballot i.

      for(int i = 0; i < ballots; ++i){

          int one, two, three;

          cin >> one >> two >> three;

          q[i].push(one);

          q[i].push(two);

          q[i].push(three);

      }

      //all ballots read

      cout << "Read " << ballots << " ballots." << endl;

      int votes[4] = {0}; // votes[i] is votes to candidate i (1 <= i <=3)

      for(int i = 0; i < ballots; ++i){

          votes[q[i].front()]++;

      }

      int mn = 501;//to track minimum voted candidate for elimination

      bool eliminated[4];

      bool won = false;// if a candidate won

      memset(eliminated, 0, sizeof(eliminated));

      for(int i = 1; i <=3; ++i){

          if(votes[i] > ballots/2){// i_th candidate wins.

             cout << "Candidate #" << i << " wins." << endl << endl;

             won = true;

             break;

          }

          mn = min(mn, votes[i]);

      }

      //eliminate the minimum voted candidate

      for(int i = 1; i <=3; ++i){

          if(votes[i] == mn)eliminated[i] = true;

      }

      if(!won){

          if(eliminated[1] && eliminated[2] && eliminated[3]){//if all eliminated

              cout << "No result!" << endl;

          }

          else{

              for(int i = 0; i < ballots; ++i){

                  if(eliminated[q[i].front()]){

                      while(eliminated[q[i].front()])q[i].pop();//pop until non eliminated candidate

                      //update votecount of non eliminated candidate

                      if(!q[i].empty())votes[q[i].front()]++;

                  }

              }

              mn = 501;

              for(int i = 1; i <=3; ++i){

                  if(!eliminated[i]){

                      if(votes[i] > ballots/2){// i_th candidate wins.

                          cout << "Candidate #" << i << " wins." << endl << endl;

                          won = true;

                          break;

                      }

                      mn = min(mn, votes[i]);

                  }

              }

              for(int i = 1; i <=3; ++i){

                  if(votes[i] == mn)eliminated[i] = true;

              }

              if(!won){

                  if(eliminated[1] && eliminated[2] && eliminated[3]){

                      cout << "No result!" << endl << endl;

                  }

                  else{

                      for(int i = 0; i < ballots; ++i){

                          if(eliminated[q[i].front()]){

                              while(eliminated[q[i].front()])q[i].pop();//pop until non eliminated candidate

                              //update votecount of non eliminated candidate

                              if(!q[i].empty())votes[q[i].front()]++;

                          }

                      }

                      for(int i = 1; i <=3; ++i){

                          if(!eliminated[i]){

                              if(votes[i] > ballots/2){// i_th candidate wins.

                                  cout << "Candidate #" << i << " wins." << endl << endl;

                                  won = true;

                                  break;

                              }

                              else{

                                  cout << "No result" << endl;

                              }

                          }

                      }

                  }

              }

          }

      }

  }

}
