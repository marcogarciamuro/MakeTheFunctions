#include <iostream>
#include <vector>

using namespace std;

//prototypes:
bool isPositive(int num);
void fillWith(vector <int> &V, int value);
void printVector(vector <int> V);
/////DO NOT TOUCH/////
int main()
{
  vector <int> projects;
  vector <int> quizzes;

  int numProjects;
  int numQuizzes;

  cout<<"\nHow many projects are there? ";
  cin>>numProjects;
  cout<<"\nHow many quizzes are there? ";
  cin>>numQuizzes;

  //only proceed if both numbers are positive
  if( isPositive(numProjects) && isPositive(numQuizzes) )
  {
    projects.resize(numProjects);
    quizzes.resize(numQuizzes);

    fillWith(projects, 90); // Fills the vector with all value 90s
    fillWith(quizzes, 80); // Fills the vector with all value 80s

    cout<<"\nProject Scores:\n";
    printVector(projects); // Prints vector with space after each cell
    cout<<"\n\nQuiz Scores:\n";
    printVector(quizzes); // Prints vector with space after each cell
  }
  else
  {
    cout<<"\nSorry, numbers must be bigger than 0.\n";
  }
  return 0;
}

//function definitions
bool isPositive(int num)
{
  if (num > 0) 
  {
    return true;  
  }
  return false;
}
void printVector (vector <int> V)
{
  for(int index = 0; index < V.size(); index++)
  {
    cout<<V[index]<<" "; 
  } 
}
void fillWith (vector <int> &V, int value)
{
  for(int index = 0; index < V.size(); index++)
  {
   V[index] = value;
  }
}

