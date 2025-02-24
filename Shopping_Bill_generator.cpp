#include<iostream>
#include <cstdlib>
using namespace std;
class shop{
     static int count;

    public:
    int code,tabnum,totalprice;
    void input();
    void show();
    void total();


};

int shop :: count;

     void welcome(){
    cout<<"__________________________________________________________________________________________________________"<<endl<<endl;
    cout<<"\t\t\t\t\t D & G Medicine Shop"<<endl;
    cout<<"__________________________________________________________________________________________________________"<<endl;
    cout<<"\t\t\t\t\t MEDICINES CODE - "<<endl;
    cout<<"\t\t\t 1. Zerodol P  \t\t\t 4. Seridon "<<endl;
    cout<<"\t\t\t 2. Pantop DSR \t\t\t 5. Levocet"<<endl;
    cout<<"\t\t\t 3. Aciloc     \t\t\t 6. Move"<<endl;

}


void shop :: input(){
    cout<<"Enter the code of the Medicine : ";
    cin>>code;
    switch(code){
        case 1: 
        cout<<"Enter total no. of tablets of Zerodol P : ";
        cin>>tabnum;
        cout<<"\t\t\t Zerodol P  -  Rs."<<(tabnum * 8)<<endl;
        count = count + (tabnum * 8);
        break;


        case 2: 
        cout<<"Enter total no. of tablets of Pantop DSR : ";
        cin>>tabnum;
        cout<<"\t\t\t Pantop DSR  -  Rs."<<(tabnum * 10)<<endl;
        count = count + (tabnum * 10);
        break;


        case 3: 
        cout<<"Enter total no. of tablets of Aciloc : ";
        cin>>tabnum;
        cout<<"\t\t\t Aciloc  -  Rs."<<(tabnum * 3)<<endl;
        count = count + (tabnum * 3);

        break;

        case 4: 
       cout<<"Enter total no. of tablets of Seridon : ";
        cin>>tabnum;
        cout<<"\t\t\t Seridon  -  Rs."<<(tabnum * 5)<<endl;
        count = count + (tabnum * 5);
        break;


        case 5: 
      cout<<"Enter total no. of tablets of Levocet : ";
        cin>>tabnum;
        cout<<"\t\t\t Levocet  -  Rs."<<(tabnum * 7)<<endl;
        count = count + (tabnum * 7);
        break;


        case 6: 
        cout<<"Enter total no. of  Move cream : ";
        cin>>tabnum;
        cout<<"\t\t\t Move cream  -  Rs."<<(tabnum * 20)<<endl;
        count = count + (tabnum * 20);
        break;
        default:
        cout<<"! No any Medicine of this code exist"<<endl;
    }

}

void shop :: show(){
    switch(code){
        case 1: cout<<"\t\t\t\t Zerodol P  -    Rs  "<<tabnum *8<<endl;;
        break;
        case 2: cout<<"\t\t\t\t Pantop DSR -    Rs  "<<tabnum * 10<<endl;;
        break;
        case 3: cout<<"\t\t\t\t Aciloc     -    Rs  "<<tabnum *3<<endl;;
        break; 
        case 4: cout<<"\t\t\t\t Seridon    -    Rs  "<<tabnum *5<<endl;;
        break;
        case 5: cout<<"\t\t\t\t Levocet    -    Rs  "<<tabnum *7<<endl;;
        break;
        case 6: cout<<"\t\t\t\t Move Cream -    Rs  "<<tabnum *20<<endl;;
        break;
        
    }

}

void shop :: total(){
    cout<<"__________________________________________________________________________________________________________"<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t Total amount :      Rs  "<<count<<endl;;
    cout<<"__________________________________________________________________________________________________________"<<endl<<endl;

}

int main(){
    welcome();
    int n;
    cout<<"__________________________________________________________________________________________________________"<<endl<<endl;
    cout<<"Enter the total types of medicine you have bought :";
    cin>>n;
    shop medicine[n];
   for(int i=0;i<n;i++){
        medicine[i].input();
    }
    cout<<"__________________________________________________________________________________________________________"<<endl<<endl;
    cout<<"\t\t\t\t\t Bill Receipt"<<endl<<endl;
    for(int i=0;i<n;i++){
        medicine[i].show();
    }
    medicine[1].total();


int inp;
    cout<<"Enter 1 to continue your shoping 0 to exit";
    cin>>inp;
    
    
    if(inp==0){
        system("cls");
        cout<<"Thanks for shopping ";
        cout << "\03[1mThis is bold text.\033[0m" ;
            }
            else{
                main();
            }
            



    
    
}


