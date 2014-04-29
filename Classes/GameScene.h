#ifndef __GameScene_H__
#define __GameScene_H__

#include "cocos2d.h"

#define PNG_BACKGROUND "background.png"

class GameScene : public cocos2d::CCLayer {
protected:
	enum kTag{
		kTagBackground = 1,
	};
	
	enum kZOrder{
		kZOrderbakground,
	};
	
	// 2-2-3
	cocos2d::CCSprite* m_background;
	void showBackground();
	
public:
	virtual bool init();
	static cocos2d::CCScene* scene();
	CREATE_FUNC(GameScene);
};

#endif // __GAMESCENE_H__
