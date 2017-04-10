#include<stdio.h>
#include<iostream>

using namespace std;

int main(){

    int event[1001];
    int test_case_number = 1;
    int num_of_events;
    while(cin>>num_of_events){
        if(num_of_events == 0)
            break;

        for(int i = 0; i<num_of_events; i++){
            cin>>event[i];
        }

        int num_of_events_supposed_to_give = 0;
        int num_of_events_given = 0;
        int emoogle_balance = 0;

        for(int j = 0; j<num_of_events; j++){
            if(event[j]==0)
                num_of_events_given++;
            else
                num_of_events_supposed_to_give++;
        }
        emoogle_balance = num_of_events_supposed_to_give - num_of_events_given;
        cout<<"Case "<<test_case_number<<": "<<emoogle_balance<<endl;
        test_case_number++;
    }

    return 0;
}
