/*INPUT Test  program of virtual function from hackerrank

4
1
Walter 56 99
2
Jesse 18 50 48 97 76 34 98
2
Pinkman 22 10 12 0 18 45 50
1
White 58 87

*/

#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
#include<algorithm>
#include<conio.h>
using namespace std;

class Person{
    
    protected: 

        //created members are protected to make use in other deriving classes.     
        string name;
        int age;
    
    public:

        //virtual function used to call from pointer object of this Person class 
        //will be declared in other class which inherits properties of this class
        virtual void getdata(){}
        virtual void putdata(){}

};

class Professor : public Person{

    private:

        int publications;
        static int cur_id; // this also must be declared outside the class because of staic
                           // it will be given by default zero value
    public:

        void getdata(){
            cin >> name >> age >> publications;
        }

        void putdata(){
            cout << name << " " << age << " " << publications << " " << ++cur_id <<endl;
        }

};

int Professor :: cur_id; //this is neccesary to create static member inside the class and 
                         // and can be defined here like cur_id = 5; or whatever 
                         // but not at the time of declaration

class Student : public Person{

    private:

        int marks[6];
        static int cur_id; // same rules for static explain in Professor class

    public:

        int sum = 0;
        void getdata(){
            cin >> name >> age;
            for(int i = 0 ; i < 6 ; i++){
                cin>>marks[i];
                sum += marks[i];
            }
        }

        void putdata(){
            cout << name << " " << age << " " << sum << " " << ++cur_id <<endl;
        }

};

int Student :: cur_id; // same explanation

int main(){

    int n, val;
    cin >> n; // The number of object that is going to be created
    Person *per[n]; // pointer created as object

    for(int i = 0; i < n ; i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.
    getch();
    return 0;

}



