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

void errorCode();

// should probably make chef class
class chef
{
    public:
        int MPM; // meals per minute
        float Q; // chefs quality of each meal
        string Z; // chefs name
        string F; // chefs friend name
    private:

}

// class meals
class mealPerNight
{
  public:
      int M;    // number of meals
      float GQ; // goal quality
      int T;    // time allotted
  private:
}

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    // variables
    int K; //  K number of chefs
    int N; // team members

    cin >> K;
    if(K < || K > 100){errorCode(); return 0;}
    N = K/2;
      // might be super wrong and have to change this
    chef chefs = (chef*) malloc (K);
    mealPerNight mealsPerNight = (mealPerNight*) malloc (K-1);

    // ideally this gets you all the info
    for(int i = 0; i < K; i++){
      cin << chefs[i].Z << chefs[i].MPM << chefs[i].Q << chefs[i].F;
    }
    for(int i = 0; i < K-1; i++){
      cin << mealsPerNight[i].M << mealsPerNight[i].GQ << mealsPerNight[i].T;
    }

    return 0;
}

void errorCode(){
    cout << "there was an error";
}
