#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string tim;
    cin >> tim;
    string newtim;
    if(tim.substr(tim.length()-2,tim.length()) =="PM") {
        if(tim.substr(0,2) != "12")
            newtim = to_string(stoi(tim.substr(0,2))+12);
        else
            newtim = tim.substr(0,2);

    }
    
    else{
        if (tim.substr(0,2) == "12")
            newtim = "00";
        else
            newtim = tim.substr(0,2);
    }

    //newtim(2,tim.length()-2) = tim(2,tim.length()-2);
    
    cout<<newtim<<tim.substr(2,tim.length()-4);
        
        
        
        
    
    return 0;
}
