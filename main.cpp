#include <iostream>
#include <string>
using namespace std;

class Team
{
  private:
    string name;
    string coach_name;
    string home_city;
    bool home_status;
    int score;
    int timeout_count;

  public:
    Team()
    {
      name = "DefaultName";
      coach_name = "DefaultCoach";
      home_city = "DefaultCity";
      home_status = true; // Home team by default
      score = 0;
      timeout_count = 0;
    }
    void setName(string n) { name = n; }
    void setCoachName(string c) { coach_name = c; }
    void setHomeCity(string hc) { home_city = hc; }
    void setHomeStatus(bool s) { home_status = s; }
    void setScore(int s) { score = s; }
    void setTimeoutCount(int tc) { timeout_count = tc; }
    string getName() { return name; }
    string getCoachName() { return coach_name; }
    string getHomeCity() { return home_city; }
    bool getHomeCity() { return home_status; }
    int getScore() { return score; }
    int getTimeoutCount() { return timeout_count; }
};

class Scoreboard
{
  private:
    string T1Name;
    string T2Name;
    int qtr;
    int T1Score;
    int T2Score;
    int down;
    int toGo;

  public:
    Scoreboard()
    {
      T1Name = "DefaultT1Name";
      T2Name = "DefaultT2Name";
      qtr = 1;
      T1Score = 0;
      T2Score = 0;
      down = 0;
      toGo = 0;
    }
    void setT1Name(Team t1) { T1Name = t1.getName(); }
    void setT2Name(Team t2) { T2Name = t2.getName(); }
    void setQTR(int q) { qtr = q; }
    void setT1Score(Team t1) { T1Score = t1.getScore(); }
    void setT2Score(Team t2) { T2Score = t2.getScore(); }
    void setDown(int d) { down = d; }
    void setToGo(int tg) { toGo = tg; }
    string getT1Name() { return T1Name; }
    string getT2Name() { return T2Name; }
    int getQTR() { return qtr; }
    int getT1Score() { return T1Score; }
    int getT2Score() { return T2Score; }
    int getDown() { return down; }
    int getToGo() { return toGo; }

};

int main() 
{
  

  return 0;
} 