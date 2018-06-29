#include "header_Files.h"
#include "SignIN_UP.h"
#include "friends.h"
int main(){
    login log;
    if(log.check()){
        int x,y;
        Friends fri;    // Friends and Followers Object
        Page pg;
        x=fri.friends_Entry();
        if(x==3){
            fri.Followers();
        }
        if(x==4){
            Group grp;    // Group Object
            y=grp.create();
            if(y==3){
                pg.new_page(fri);
            }
            if(y==5){
                system("clear");
                cout<<endl<<"             -----------------------------------"<<endl;
                        cout<<"         ---Good bye from your facebook account---";
                        cout<<endl<<"            -------------------------------------"<<endl;
                        cout<<endl<<"__________________________________________________________"<<endl<<endl<<endl;
                return 0;
            }
        }
    }

    return 0;

}
