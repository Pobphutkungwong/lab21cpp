#include <iostream>
using namespace std;

int main(int agrc,char* agrv[]){
    double a = 0;
    if(agrc == 1) cout << "Please input numbers to find average.";
    else{
        double s = agrc - 1;
        cout << "---------------------------------\n";
        for(int i = 1 ;i < agrc;i++){
            a += atof(agrv[i]); 
        }
        cout << "Average of " << agrc - 1 << " numbers = " << a / s << endl;
        cout << "---------------------------------\n";
    }

}
