#include <bits/stdc++.h>
using namespace std; 

main(){
    int waga_arbuza; 
    cin >> waga_arbuza; 

    if(waga_arbuza == 2){ // przypadek waga arbuza == 2
    cout<<"NO"<<endl; // to jest źle bo 2 możesz podzielić na 1, 1 a to liczby nieparzyste więc odpoweidz w tym przypadku to NO 
    }
    else if(waga_arbuza % 2 == 0){ // przypadek waga arbuza jest podzielna przez 2
        cout<<"YES"<<endl; 
    }
    else{ //przypadek waga arbuza nie jest podzielna przez 2 
        cout<<"NO"<<endl;
    }
}