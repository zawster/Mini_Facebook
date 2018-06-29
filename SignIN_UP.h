#include "header_Files.h"
class login{
    private:
        string name,fname,str1,str2,key;
        int x;
        bool y;
    public:
        ifstream in;
        ofstream out;
        login(){
                cout<<"Press 1 for Create new Acccount:"<<endl;
                cout<<"Press 2 for login:    ";
                cin>>x;

                system("clear");
                if(x==1){
                    string email;
                    ofstream log;
                    log.open("login.txt");
                    cout<<"Enter your Name without space: ";
                    cin>>fname;
                    cout<<"Enter your Email: ";
                    cin>>email;
                    cout<<"Enter your Username: ";
                    cin>>name;
                    cout<<"Enter your password:";
                    cin>>key;
                    log<<name<<" "<<key<<" "<<fname<<" "<<email<<" "<<endl;
                    x=2;
                    log.close();
                }
                else if(x==2){
                    ifstream in;
                    in.open("login.txt");
                    cout<<"Enter your Username: ";
                    cin>>name;
                    cout<<"Enter your password: ";
                    cin>>key;
                    in>>str1>>str2>>fname;
                    if(name==str1 || key==str2){
                        system("clear");
                        cout<<endl<<"             -----------------------------------"<<endl;
                        cout<<"       ---Welcome Dear "<<fname<<" into your facebook account---";
                        cout<<endl<<"            -------------------------------------"<<endl;
                        cout<<endl<<"__________________________________________________________"<<endl<<endl<<endl;
                        y=true;
                        }
                    if(name!=str1 || key!=str2){
                        system("clear");
                        cout<<endl<<"       ------------------------------------"<<endl;
                        cout<<"          ....Your Account is invalid !...."<<endl;
                        cout<<"   ....Please enter your valid Username and Password !....";
                        cout<<endl<<"       -------------------------------------"<<endl;
                        y=false;
                        }

                }
        }
        bool check(){
            if(y){
                return true;}
            if(!y)
                return false;
        }
};

