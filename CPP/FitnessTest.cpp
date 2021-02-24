#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
    int count = 0, temp, P1 = 0, P2 = 0, P3 = 0;
    while(count!=9){
        cin>>temp;
        if(temp < 1 || temp > 100){
            cout<<"INVALID INPUT";
            count++;
        } else {
            if(count%3 == 0){
                P1 += temp;
            }
            if(count%3 == 1){
                P2 += temp;
            }
            if(count%3 == 2){
                P3 += temp;
            }
            count++;
        }
    }

    P1 = round(P1/3);
    P2 = round(P2/3);
    P3 = round(P3/3);

    if(P1 < 70 && P2 < 70 && P3 < 70){
        cout<<"All trainees are unfit"<<endl;
    }
    if(P1 >= P2 && P1 >= P3){
        cout<<"Trainee no. 1"<<endl;
    }
    if(P2 >= P1 && P2 >= P3){
        cout<<"Trainee no. 2"<<endl;
    }
    if(P3 >= P2 && P3 >= P1){
        cout<<"Trainee no. 3"<<endl;
    }
    return 0;
}