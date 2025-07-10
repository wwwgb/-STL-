#include<iostream>
#include<vector>
#include<map>
#include"./speaker.h"

using namespace std;

class SpeechManager{
public:

    SpeechManager();

    ~SpeechManager();

    void show_menu();

    void exitSystem();

    vector<int>v1;

    vector<int>v2;

    vector<int>vectory;

    map<int, Speaker>m_Speaker;

    int m_index = 0;

    void initSpeech();

    void createSpeaker();

    void startSpeech();

    void speechDraw();

};