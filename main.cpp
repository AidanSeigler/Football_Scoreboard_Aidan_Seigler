
// Created Nov. 20, 2021
// Assigned by Dr. Tyson McMillian, TCCD
// The purpose of this assignment was to create a football scoreboard
// This assignment increased my knowledge of object oriented programming

#include <iostream>
#include <iomanip>
#include <string>
#include <unistd.h>
#include "Input_Validation_Extended.h"
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
    bool getHomeStatus() { return home_status; }
    int getScore() { return score; }
    int getTimeoutCount() { return timeout_count; }
};

class Scoreboard
{
  private:
    Team team1;
    Team team2;
    int qtr;
    int down;
    int toGo;

  public:
    Scoreboard()
    {
      qtr = 1;
      down = 0;
      toGo = 0;
    }
    void setTeam1(Team t1) { team1 = t1; }
    void setTeam2(Team t2) { team2 = t2; }
    void setQTR(int q) { qtr = q; }
    void setDown(int d) { down = d; }
    void setToGo(int tg) { toGo = tg; }
    Team getTeam1() { return team1; }
    Team getTeam2() { return team2; }
    int getQTR() { return qtr; }
    int getDown() { return down; }
    int getToGo() { return toGo; }
    void printScoreboard()
    {
      string green_white = "\x1b[" + to_string(42) + ";1m";
      string blue = "\x1b[" + to_string(34) + ";1m";
      string yellow = "\x1b[" + to_string(33) + ";1m";
      string red = "\x1b[" + to_string(31) + ";1m";
      string reset = "\x1b[0m";


      cout << setw(17) << green_white << "Football Scoreboard" << reset << endl;
      cout << red;
      for(int i = 0; i < 39; i++) { cout << "*"; }
      cout << reset << endl; 
      cout << setw(8) << "(H)" << setw(27) << "(V)" << endl; 
      cout << setw(5) << blue << team1.getName() << setw(27) << team2.getName() << reset << endl;
      cout << setw(10) << team1.getCoachName() << setw(27) << team2.getCoachName() << endl;
      cout << setw(13) << yellow << team1.getScore() << setw(27) <<  team2.getScore() << reset << endl;
      cout << setw(23) << "Quarter: " << qtr << endl; 
      cout << setw(5) << down << " Down" << setw(21) << toGo << " To Go" << endl;
      cout << red;
      for(int i = 0; i < 39; i++) { cout << "*"; }
      cout << reset << endl;
    }
  
};

void scoreboardControls()
{
  Scoreboard s;
  Team t1;
  Team t2;
  char choice = '\0';
  int newNum = 0;
  string newName = "";

  s.setTeam1(t1);
  s.setTeam2(t2);

  do
  {
    s.printScoreboard();

    cout << "\nMenu:\n";
    cout << "1. Set Team 1 Name\n";
    cout << "2. Set Team 2 Name\n";
    cout << "3. Set Team 1 Coach\n";
    cout << "4. Set Team 2 Coach\n";
    cout << "5. Set Team 1 Score\n";
    cout << "6. Set Team 2 Score\n";
    cout << "7. Set Quarter\n";
    cout << "8. Set Down\n";
    cout << "9. Set To Go\n";
    cout << "X. Exit\n\n";
    cout << "Enter choice: ";
    choice = validateChar(choice);

    if (choice == '1')
    {
      cout << "\nEnter a new name for Team 1: ";
      newName = validateString(newName);

      cout << "Updating Team 1 name to " << newName << "..." << endl;
      t1.setName(newName);
      sleep(3);
    }
    else if (choice == '2')
    {
      cout << "\nEnter a new name for Team 2: ";
      newName = validateString(newName);

      cout << "Updating Team 2 name to " << newName << "..." << endl;
      t2.setName(newName);
      sleep(3);
    }
    else if (choice == '3')
    {
      cout << "\nEnter a new coach for Team 1: ";
      newName = validateString(newName);

      cout << "Updating Team 1 coach to " << newName << "..." << endl;
      t1.setCoachName(newName);
      sleep(3);
    }
    else if (choice == '4')
    {
      cout << "\nEnter a new coach for Team 2: ";
      newName = validateString(newName);

      cout << "Updating Team 2 coach to " << newName << "..." << endl;
      t2.setCoachName(newName);
      sleep(3);
    }
    else if (choice == '5')
    {
      cout << "Enter a new score for Team 1: ";
      newNum = validateInt(newNum);

      cout << "Updating Team 1 score to " << newNum << "..." << endl;
      t1.setScore(newNum);
      sleep(3);
    }
    else if (choice == '6')
    {
      cout << "Enter a new score for Team 2: ";
      newNum = validateInt(newNum);

      cout << "Updating Team 2 score to " << newNum << "..." << endl;
      t2.setScore(newNum);
      sleep(3);
    }
    else if (choice == '7')
    {
      cout << "Enter a new quarter: ";
      newNum = validateInt(newNum);

      cout << "Updating quarter to " << newNum << "..." << endl;
      s.setQTR(newNum);
      sleep(3);
    }
    else if (choice == '8')
    {
      cout << "Enter a new down: ";
      newNum = validateInt(newNum);

      cout << "Updating down to " << newNum << "..." << endl;
      s.setDown(newNum);
      sleep(3);
    }
    else if (choice == '9')
    {
      cout << "Enter a new to go: ";
      newNum = validateInt(newNum);
      
      cout << "Updating to go to " << newNum << "..." << endl;
      s.setToGo(newNum);
      sleep(3);
    }
    s.setTeam1(t1);
    s.setTeam2(t2);
    system("clear");

  } while (choice != 'X' && choice != 'x');

}

int main() 
{

  scoreboardControls();

  cout << "\nGoodbye!\n";

  return 0;
} 
