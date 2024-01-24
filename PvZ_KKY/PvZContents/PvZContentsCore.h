#pragma once
#include <EngineCore/EngineCore.h>

// Ό³Έν :
class PvZContentsCore : public EngineCore
{
public:
	// constrcuter destructer
	PvZContentsCore();
	~PvZContentsCore();

	// delete Function
	PvZContentsCore(const PvZContentsCore& _Other) = delete;
	PvZContentsCore(PvZContentsCore&& _Other) noexcept = delete;
	PvZContentsCore& operator=(const PvZContentsCore& _Other) = delete;
	PvZContentsCore& operator=(PvZContentsCore&& _Other) noexcept = delete;

protected:
	void BeginPlay() override;
	void Tick(float _DeltaTime);
	void End() override;

private:

};

