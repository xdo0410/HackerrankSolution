#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
	private:
		vector<int> testScores; 
        int sum = 0;
        int subs = 0;
        double avg = 0; 
	public:
        /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here
        Student(string firstN, string lastN, int iD, vector<int> score):
                    Person(firstN, lastN, iD){
                        this -> testScores = score;
                        subs = testScores.size();
                    }
        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
        char calculate(){
            char g;
            for (int i = 0; i < subs; i++){
                sum += testScores[i];
            }
            avg = sum/subs;

            if (avg >= 90 && avg <= 100)
                g = 'O';
            else if (avg >= 80 && avg < 90)
                g = 'E';
            else if (avg >= 70 && avg < 80)
                g = 'A';
            else if (avg >= 55 && avg < 70)
                g = 'P';
            else if (avg >= 40 && avg < 55)
                g = 'D';
            else if (avg < 40)
                g = 'T';

            return g;
        }
};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}
