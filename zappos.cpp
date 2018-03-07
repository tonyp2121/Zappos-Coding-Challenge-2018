#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool errorCode(chef chefs, mealPerNight mealsPerNight, int K);

// should probably make chef class
class chef
{
    public:
        int MPM; // meals per minute
        float Q; // chefs quality of each meal
        string Z; // chefs name
        string F; // chefs friend name
        void getChefInfo();
    private:

}

void chef::getChefInfo(){
  cin << Z << MPM << Q << F;
}

// class meals
class mealPerNight
{
  public:
      int M;    // number of meals
      float GQ; // goal quality
      int T;    // time allotted
      void getMealsInfo();
  private:
}

void mealPerNight::getMealsInfo(){
  cin << M << GQ << T;
}

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    // variables
    int K; //  K number of chefs
    int N; // team members

    cin >> K;
    if(K < || K > 100){errorCode();}


    N = K/2;

      // might be super wrong and have to change this
    chef * chefs = new chef[K];
    // chef chefs = (chef*) malloc (K);
    mealPerNight * mealsPerNight = new mealPerNight[K-1];
    // mealPerNight mealsPerNight = (mealPerNight*) malloc (K-1);

    for(int i = 0; i < K; i++){
      chefs[i].getChefInfo();
    }

    for(int i = 0; i < K-1; i++){
      mealsPerNight[i].getMealsInfo();
    }

    if (errorCode(chefs, mealsPerNight, K)){delete[] chefs; delete[] mealsPerNight; return 0;}

    // ok we here but how the fuck we pick teams
    // ok if I'm reading this right we need to get both teams to get
    //     their highest possible score it seems like we would prioritize
    //     one team over another always and almost always have one winner

    return 0;
}

bool errorCode(chef chefs, mealPerNight mealsPerNight, int K){

    if(K < || K > 100){return true;}

    for(int i = 0; i < K; i++){
      if ((i != (K - 1)) && (mealsPerNight[i].M < 1 || mealsPerNight[i].M > 10000 ||
          mealsPerNight[i].T < 1 || mealsPerNight[i].T > 10000 ||
          mealsPerNight[i].GQ < 0.000 || mealsPerNight[i].GQ > 1.000) ){
            cout << "there was an error" << endl;
            return true;
      }
      if (chefs[i].MPM < 1 || chefs[i].MPM > 5 ||
          chefs[i].Q < 0.000 ||  chefs[i].Q > 1.000 ||
          chefs[i].F.length < 1 || chefs[i].Z.length < 1 || chefs[i].Z == chefs[i].F){
             cout << "there was an error" << endl;
             return true;
          }
    }

    return false;
}
