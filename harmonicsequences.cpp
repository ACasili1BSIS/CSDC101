using namespace std;

int main(){
    //harmonic sequence by 3s
    float numerator, demoninator = 3, n, condition = 1;
    
    cout<<"Enter number of terms in a sequence";
    cin>>n;
    while(condition <=n){
        cout<<1/ demoninator << endl;
        demoninator = demoninator + 3;
        condition++;
    }
    
    
    
    return 0;
}
