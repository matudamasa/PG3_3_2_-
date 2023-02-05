#include "Enemy.h"
#include<stdio.h>


bool Enemy::isAllAlive = false;

Enemy::Enemy()
{
    isAlive = true;
    isAllAlive = true;
}

Enemy::~Enemy()
{
}

bool Enemy::IsAlive()
{
    return isAlive;
}

void Enemy::SetDeath()
{
    isAlive = false;
    isAllAlive = false;

}

void Enemy::Update()
{
    printf("更新\n");
    if (isAllAlive == false) {  //全滅したら
        isAlive = false;
    }
}

void Enemy::Draw()
{
    if (IsAlive()) {
        printf("敵\n");
    }
}