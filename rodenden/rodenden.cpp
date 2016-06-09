#include <iostream>
using namespace std;
 
int godini, a, i, ccount;
 
int main(){
 
    cin >> godini;
    int count[10];
    for(i=0; i<10; i++){
        count[i]=0;
    }
    while(godini>0){
        a = godini % 10;
        count[a]++;
        godini /= 10;
    }
    count[6]+=count[9];
    count[9]=0;
     
    if(count[6] % 2 > 0){
        count[6] /= 2 ;
        count[6] += 1 ;
         
    }
    else{
        count[6] /= 2;
    }
 
    for(i=0; i<10; i++){
        if(count[i] > ccount){
            ccount=count[i];
        }
    }
 
    cout << ccount << endl;
    
}
