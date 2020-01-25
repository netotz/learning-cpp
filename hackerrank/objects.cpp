#include <iostream>

// Write your Student class here
class Student {
    private:
        int exams[5];
    public:
        void input() {
            for(int i = 0; i < 5; i++) {
                std::cin >> exams[i];
            }
        }

        int calculateTotalScore() {
            int total_score = 0;
            for (auto const& score : exams) {
                total_score += score;
            }
            return total_score;
        }
};

int main() {
    int n; // number of students
    std::cin >> n;
    Student *scores = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        scores[i].input();
    }

    // calculate kristen's score
    int kristen_score = scores[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = scores[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    std::cout << count;
    
    return 0;
}