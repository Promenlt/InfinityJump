#include "stdafx.h"
#include "GameStateBase.h"


GameStateBase::GameStateBase()
{
}


GameStateBase::~GameStateBase()
{
}

std::shared_ptr<GameStateBase> GameStateBase::CreateState(StateTypes stt)
{
	return std::shared_ptr<GameStateBase>();
}
