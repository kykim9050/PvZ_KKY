#pragma once

// Ό³Έν :
class Zombie
{
public:
	// constrcuter destructer
	Zombie();
	~Zombie();

	// delete Function
	Zombie(const Zombie& _Other) = delete;
	Zombie(Zombie&& _Other) noexcept = delete;
	Zombie& operator=(const Zombie& _Other) = delete;
	Zombie& operator=(Zombie&& _Other) noexcept = delete;

protected:

private:

};

