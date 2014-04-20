//
//  GameScene.h
//  nyangame_2_2_3
//
//  Created by 小野昌平 on 2014/04/20.
//
//

#ifndef __GameScene_H__
#define __GameScene_H__

#include "cocos2d.h"

class GameScene : public cocos2d::CCLayer {
public:
	virtual bool init();
	static cocos2d::CCScene* scene();
	CREATE_FUNC(GameScene);
};

#endif // __GAMESCENE_H__#endif // __GAMESCENE_H__
