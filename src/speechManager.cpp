#include<iostream>
#include"../include/speechManager.h"

using namespace std;

SpeechManager::SpeechManager(){

}

SpeechManager::~SpeechManager(){
    
}

void SpeechManager::show_menu(){
    cout << "********************************************" << endl;
    cout << "************* 欢迎参加演讲比赛 ************" << endl;
    cout << "************* 1.开始演讲比赛 *************" << endl;
    cout << "************* 2.查看往届记录 *************" << endl;
    cout << "************* 3.清空比赛记录 *************" << endl;
    cout << "************* 0.退出比赛程序 *************" << endl;
    cout << "********************************************" << endl;
    cout << endl;
}

void SpeechManager::exitSystem()
{
cout << "欢迎下次使用" << endl;
system("pause");
exit(0);
}


int main(){

    SpeechManager sm;

    int choice = 0;

    while(1){
        sm.show_menu();
        cout<<"请输入您的选择："<<endl;
        cin>>choice;
        switch(choice){
            case(0):
                break;
            case(1):
                break;
            case(2):
                break;
            case(3):
                break;
            default:
                system("cls");
                break;
        }
    }
    system("pause");
    return 0;
}