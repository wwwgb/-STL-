#include<iostream>
#include<algorithm>
#include"../include/speechManager.h"

using namespace std;

SpeechManager::SpeechManager(){
    this->initSpeech();
    this->createSpeaker(); // 创建演讲者
}

SpeechManager::~SpeechManager(){
    
}

void SpeechManager::initSpeech(){
    this->m_index = 1; // 初始化比赛轮数
    this->v1.clear();
    this->v2.clear();
    this->vectory.clear();
    this->m_Speaker.clear();
}

void SpeechManager::createSpeaker(){
    // 创建演讲者
    string nameSeed = "ABCDEFGHIJKL";
    for (int i = 0; i < nameSeed.size(); i++)
    {
    string name = "选手";
    name += nameSeed[i];
    Speaker sp;
    sp.name = name;
    for (int i = 0; i < 2; i++)
    {
    sp.score[i] = 0;
    }
    //12名选手编号
    this->v1.push_back(i + 10001);
    //选手编号 以及对应的选手 存放到map容器中
    this->m_Speaker.insert(make_pair(i + 10001, sp));
    }
}

void SpeechManager::startSpeech(){
    //第一轮比赛
    //1、抽签
    this->speechDraw();
    //2、比赛
    //3、显示晋级结果
    //第二轮比赛
    //1、抽签
    //2、比赛 
    //3、显示最终结果
    //4、保存分数
}

void SpeechManager::speechDraw(){
    cout<<"第"<<this->m_index<<"轮比赛正在抽签"<<endl;
    cout<<"--------------------"<<endl;
    cout<<"抽签结果如下："<<endl;

    if(this->m_index == 1){
        random_shuffle(this->v1.begin(),this->v1.end());
        for(auto it : v1){
            cout << it <<" ";
        }
        cout << endl;
    }
    else{
        random_shuffle(this->v2.begin(),this->v2.end());
        for(auto it : v2){
            cout << it << " ";
        }
        cout << endl;
    }

    cout<<"---------------------"<<endl;
    system("pause");
    cout<<endl;
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
    /*for (map<int, Speaker>::iterator it = sm.m_Speaker.begin(); it != sm.m_Speaker.end(); it++)
    {
    cout << "选手编号：" << it->first
    << " 姓名： " << it->second.name
    << " 成绩： " << it->second.score[0] << endl;
    }测试代码*/
    int choice = 0;

    while(1){
        sm.show_menu();
        cout<<"请输入您的选择："<<endl;
        cin>>choice;
        switch(choice){
            case(0):
                sm.exitSystem();
                break;
            case(1):
                sm.startSpeech();
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