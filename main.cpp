#include <iostream>
#include <iomanip>
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
    string getName() const { return name; }
    string getCoachName() const { return coach_name; }
    string getHomeCity() const { return home_city; }
    bool getHomeStatus() const { return home_status; }
    int getScore() const { return score; }
    int getTimeoutCount() const { return timeout_count; }
};

class Scoreboard
{
  private:
    Team team1;
    Team team2;
    int qtr;
    int T1Score;
    int T2Score;
    int down;
    int toGo;

  public:
    Scoreboard()
    {
      qtr = 1;
      T1Score = 0;
      T2Score = 0;
      down = 0;
      toGo = 0;
    }
    void setTeam1(Team t1) { team1 = t1; }
    void setTeam2(Team t2) { team2 = t2; }
    void setQTR(int q) { qtr = q; }
    void setT1Score(Team t1) { T1Score = t1.getScore(); }
    void setT2Score(Team t2) { T2Score = t2.getScore(); }
    void setDown(int d) { down = d; }
    void setToGo(int tg) { toGo = tg; }
    Team getTeam1() const { return team1; }
    Team getTeam2() const { return team2; }
    int getQTR() const { return qtr; }
    int getT1Score() const { return T1Score; }
    int getT2Score() const { return T2Score; }
    int getDown() const { return down; }
    int getToGo() const { return toGo; }
    void printScoreboard()
    {
      for(int i = 0; i < 39; i++) { cout << "*"; }
      cout << endl; 
      cout << "     (H)\t\t\t\t\t\t(V)" << endl; 
      cout << setw(10) << team1.getName() << setw(27) << team2.getName() << endl;
      cout << setw(10) << team1.getCoachName() << setw(27) << team2.getCoachName() << endl;
      cout << setw(7) << team1.getScore() << setw(27) <<  team2.getScore() << endl;
      cout << setw(23) << "Quarter: " << qtr << endl; 
      cout << setw(5) << down << " Down" << setw(21) << toGo << " To Go" << endl;
      for(int i = 0; i < 39; i++) { cout << "*"; }
      cout << endl;
    }
  
};

void scoreboardControls()
{
  Scoreboard s;
  Team t1;
  Team t2;

}

int main() 
{

  return 0;
} 