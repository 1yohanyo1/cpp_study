#include <iostream>

using namespace std;

struct Person{
    string name;
    int age;
    float height;
    float weight;
};

void check_age(Person *_adult, int _count){
    for(int i = 0; i < _count; i++){
        if(_adult[i].age >= 25){
            cout << "name : " << _adult[i].name << endl;
            cout << "age : " << _adult[i].age << endl;
            cout << "height : " << _adult[i].height << endl;
            cout << "weight : " << _adult[i].weight << endl;
        }
    }
}

int main(){
    Person adult[3] = {
        {"Brain", 24, 100, 70},
        {"Jessica", 22, 165, 55},
        {"James", 30, 170, 65},

    };
    check_age(adult, 3);

    return 0;
}