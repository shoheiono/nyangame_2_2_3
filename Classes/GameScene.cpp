//
//  GameScene.cpp
//  nyangame_2_2_3
//
//  Created by 小野昌平 on 2014/04/20.
//
//

#include "GameScene.h"
#include "SimpleAudioEngine.h"

using namespace cocos2d;
using namespace CocosDenshion;
using namespace std;

CCScene* GameScene::scene(){
	CCScene* scene = CCScene::create();
	GameScene* layer = GameScene::create();
	scene->addChild(layer);
	return scene;
}

// 初期化
bool GameScene::init(){
	if(!CCLayer::init()) {
		return false;
	}
	
	return true;
}

