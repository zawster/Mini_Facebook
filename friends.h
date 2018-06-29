#include "header_Files.h"
class Friends {
    protected:
        string str,str1;
        int x,y,siz;
    public:
        int friends_Entry(){
            //system("clear");
            cout<<"    Press 1 to add new Friends :"<<endl;
            cout<<"    Press 2 to see your Friend list :"<<endl;
            cout<<"    Press 3 to see your Followers : "<<endl;
            cout<<"    Press 4 for more options : " ;
            cin>>x;
            if(x==1){
                ofstream in;
                in.open("friends.txt",ios::app);
                system("clear");
                cout<<"How many Friend you want to add :";
                cin>>siz;
                y=siz;
                for(int i=0 ; i<siz;i++){
                    cout<<"Enter your Friend Name"<<i+1<<" witheout space :";
                    cin>>str;
                    in<<" "<<str;
                }
                in.close();
                return 0;
            }
            if(x==2){
                ifstream on;
                on.open("friends.txt");
                while(!on.eof()){
                    on>>str1;
                    cout<<str1<<endl;
                }
                on.close();
                return 0;
            }
            if(x==3 || x==4){
                return x;
            }
        }
///////////////////////////////////////////////////////////
            void Followers(){
                if(x==3){
                system("clear");
                ifstream in;
                ofstream inn;
                in.open("friends.txt");
                inn.open("followers.txt");
                cout<<"Your followers are :"<<endl;
                while(!in.eof()){
                    in>>str;
                    inn<<str;
                    cout<<str<<endl;
                }
                }

            }
            //friend class Page;
};
////////////////////////////////////////////////////////
class Group:public Friends{
    private:
        int y,s;
        string *arr=NULL,str;
    public:
        Group(){
                system("clear");
                cout<<endl<<endl<<endl<<"        Press 1 to add your Group member :"<<endl;
                cout<<"        Press 2 to see your Group member list :"<<endl;
                cout<<"        Press 3 to create your facebook page :"<<endl;
                cout<<"        Press 4 to upload your picture  :"<<endl;
                cout<<"        Press 5 to logout :       ";
                cin>>s;
        }
        int create(){
                if(s==1){
                    system("clear");
                    ofstream gr;
                    gr.open("group.txt");
                    cout<<"How many friends you want to add your Group :";
                    cin>>y;
                    arr=new string[y];
                    for(int i=1;i<=y;i++){
                        cout<<"Enter your Group member "<<i<<" name without space:";
                        cin>>arr[i-1];
                        }
                    for(int j=1;j<=y;j++){
                        str=arr[j-1];
                        gr<<" "<<str;
                        }
                    gr.close();
                    return 0;
                }
                else if(s==2){
                    ifstream gr;
                    gr.open("group.txt");
                    cout<<"Your Group members are :"<<endl;
                    while(!gr.eof()){
                        gr>>str;
                        cout<<str;
                    }
                    gr.close();
                    return 0;
                }
                else if(s==4){
                    system("clear");
                    int counter=0;
                    cout<<"         Enter your Picture name :  ";
                    cin>>str;
                    cout<<endl<<endl<<"        <------------------------------------------------>"<<endl<<endl;
                    cout<<"          You have Successfully upload your ( "<<str<<" ) picture :"<<endl;
                    //

                }
                else if(s==3 || s==5){
                    return s;
                }


        }
        friend class Page;
};
class Page{
    private:
        string str2;
        //int *a=NULL;
        int w,z,y=0;
    public:
        void new_page(Friends a){
            system("clear");
            //ifstream pg;
            ofstream chk;
            chk.open("testFile.txt");
           // pg.open("friends.txt");
            cout<<endl<<endl<<endl<<endl;
            cout<<"            Press 1 to invite your friends :"<<endl;
            cout<<"            Press 2 to see your page likes : ";
            cin>>w;
            if(w==1){
                system("clear");
                if(chk.is_open())
                {
                    cout<<endl<<endl<<endl;
                    cout<<"   How many people you wants to invite :";
                    cin>>z;
                    //int *a=new int[z];
                    chk << z;
                   // pg.close();
                    chk.close();
                    //delete [] a;
                }
            }
            else if(w==2){
                //cout<<"HIIIIIIIIIIIII";
                ifstream ch;
                ch.open("testFile.txt");
                if(ch.is_open()){
                    ch>>str2;
                    cout<<"Your page have "<< str2 <<" likes :"<<endl;
                }
                ch.close();
            }

        }

};

