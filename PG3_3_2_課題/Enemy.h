#pragma once
class Enemy
{
public:
	Enemy();
	~Enemy();

	bool IsAlive();

	void SetDeath();

	void Update();
	void Draw();

public:

	static  bool isAllAlive; //true:生存　false:死滅

private:

	bool isAlive; //true:生存　false:死滅
};