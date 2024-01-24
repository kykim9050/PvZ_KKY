#include "PvZContentsCore.h"
#include "TitleLevel.h"


PvZContentsCore::PvZContentsCore()
{
}

PvZContentsCore::~PvZContentsCore()
{
}

void PvZContentsCore::BeginPlay()
{
	// PvZ 게임 초기 타이틀 Level
	CreateLevel<UTitleLevel>("TitleLevel");

	ChangeLevel("TitleLevel");
}

void PvZContentsCore::Tick(float _DeltaTime)
{
	
}

void PvZContentsCore::End()
{

}
