#include <iostream>

using namespace std;

class Grades{
    int grades;
public:
    Grades(){
        grades = 0;
    }

    Grades(int g){
        grades = g;
    }

    void dispaly(){
        cout << "Your total grades is: " << grades << endl;
    }

    //operator overloading

   Grades operator+= (int bonus){
       grades = grades + bonus;
   }

    //making operator function be friend with this class
    friend void operator-= (Grades &currentGrade, int minusPoint);
};

// another way -> we can define all inside the passing parameter
void operator-= (Grades &currentGrade, int minusPoint){
    currentGrade.grades -= minusPoint;
}

int main() {
    Grades obj1 = Grades(98);
    obj1 += 3;
    obj1.dispaly();

    Grades obj2 = Grades(100);
    obj2 -= 3;
    obj2.dispaly();
    return 0;
}