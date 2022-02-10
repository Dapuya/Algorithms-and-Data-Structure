#include "iostream"
#include "string"
#include "queue"

using namespace std;

int main(){
    string s;
    queue <string> deq9;
    queue <string> deq10;
    queue <string> deq11;

    while(getline(cin, s)){
        if(s.substr(0,1) == "9"){
            deq9.push(s.substr(2, (s.size()-2)));
        }
        else if(s.substr(0,2) == "10"){
            deq10.push(s.substr(3, (s.size()-3)));
        }
        else if(s.substr(0,2) == "11"){
            deq11.push(s.substr(3, (s.size()-3)));
        }
//        else if(s == "0"){
//            break;
//        }
    }

    while(!deq9.empty()){
        cout << "9" << " " << deq9.front() << endl;
        deq9.pop();
    }
    while(!deq10.empty()){
        cout << "10" << " " << deq10.front() << endl;
        deq10.pop();
    }
    while(!deq11.empty()){
        cout << "11" << " " << deq11.front() << endl;
        deq11.pop();
    }



    return 0;
}

