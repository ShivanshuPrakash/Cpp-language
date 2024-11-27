// ************************************BREAK STATEMENT** ****************************************
#include<iostream>
using namespace std;
int main(){
for (int i=0;i<=100;i++){
    cout<<"the value of i is: "<<i<<endl;
    if(i==3){
    break;
    }
}
for (int j=0;j<=100;j++){
    if(j==3){
    break;                        //ANALYSE THE DIFF IN OUTPUT OF BOTH CODE 
    }
    cout<<"the value of j is: "<<j<<endl;
}
// ***************************************CONTINUE STATEMENT ****************************************
for(int i=0;i<=10;i++){
        if (i==6){
        continue;   // basically skips 6
    }
    cout<<"The value of insane i is: "<<i<<endl;
}                       //IF YOU PUT THIS COUT STATEMENT BEFORE CONTINUE YOU IS CALLED AS INSANE
return 0;
}