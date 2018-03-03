#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

float divide(float a, float b)
{
    return a / b;
}

int mod(int a, int b)
{
    return a % b;
}

int pow(int a, int b)
{
    if (b == 0)
        return 1;
    
    return a * pow(a, b - 1);
}

void loopy(){
    int choice, a, b;
    float answer;
    do{
        cout << "Pick a flipping number" << endl;
        cout << "1. add" << endl;
        cout << "2. subtract" << endl;
        cout << "3. multiply" << endl;
        cout << "4. divide" << endl;
        cout << "5. modulus" << endl;
        cout << "6. power" << endl;
        cout << "7. exit" << endl;
        cout << "anything not menthion above. exit" << endl;
        
        cin >> choice;
        
        cout.flush();
        
        cout << "Pick a flipping number" << endl;
        
        cin >> a;
        cin >> b;
        
        //TODO: check if choise is an int default to 0 or something
        switch(choice){
            case 1:
                answer = add(a,b);
                break;
            case 2:
                answer = sub(a,b);
                break;
            case 3:
                answer = mul(a,b);
                break;
            case 4:
                answer = divide(a,b);
                break;
            case 5:
                answer = mod(a,b);
                break;
            case 6:
                answer = pow(a,b);
                break;
        }
        
        cout << answer << endl;
        cout << "Press enter to continue" << endl;
        
        cin.get();
        
        cout.flush();
    }
    while(choice > 0 && choice < 7);
}

//This is 
int main()
{
    loopy();
    return 0;
}


