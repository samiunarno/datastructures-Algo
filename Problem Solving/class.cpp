#include <iostream>
#include <string>

using namespace std;

class Person {
    public:
        string name;
        int age;

        

        void ChangeDep(string newname ){
            name = newname;
        }
};

int main(){
    Person t1;
    t1.ChangeDep("Samiun Mahmud");
    cout<<t1.name<<endl;
}