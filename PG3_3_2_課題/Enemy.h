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

	static  bool isAllAlive; //true:ê∂ë∂Å@false:éÄñ≈

private:

	bool isAlive; //true:ê∂ë∂Å@false:éÄñ≈
};