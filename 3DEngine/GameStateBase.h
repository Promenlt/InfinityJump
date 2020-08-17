#pragma once
#include "ResourceManager.h"
#include "GameStateMachine.h"
#include <memory>
#include "StatesType.h"
class GameStateBase
{
public:
	GameStateBase(void){}
	virtual ~GameStateBase(){}

	virtual void Init() = 0;
	virtual void Update() = 0;
	virtual void Exit() = 0;
	virtual void Pause() = 0;
	virtual void Resume() = 0;
	virtual void HandleEvents() = 0;
	virtual void HandleKeyEvents(int key, bool bIsPressed) = 0;
	virtual void HanldeTouchEvents(int x, int y, bool bIsPressed) = 0;
	virtual void Update(float deltaTime) = 0;
	virtual void Draw() = 0;

	static std::shared_ptr<GameStateBase> CreateState(StatesType stt)
	{
		std::shared_ptr<GameStateBase> gs = nullptr;
		switch (stt)
		{
		case STATE_None:
			break;
		case STATE_Welcome:
			gs = std::make_shared<GSWelcom>();
			break;
		case STATE_Credit:
			gs = std::make_shared<GSCredit>();
			break;
		case STATE_Menu:
			gs = std::make_shared<GSMenu>();
			break;
		case STATE_Option:
			gs = std::make_shared<GSOption>();
			break;
		case STATE_Pause:
			gs = std::make_shared<GSPause>();
			break;
		case STATE_Play:
			gs = std::make_shared<GSPlay>();
			break;
		case STATE_HighScore:
			gs = std::make_shared<GSHighScore>();
			break;
		default:
			break;
		}
		return gs;
	}
};