#include "player.h"

bool Player_IsConnected(alt::IPlayer *player)
{
    return player->IsConnected();
}

void Player_Spawn(alt::IPlayer *player, alt::Position pos)
{
    player->Spawn(pos);
}

void Player_Despawn(alt::IPlayer *player)
{
    player->Despawn();
}

const char* Player_GetName(alt::IPlayer *player)
{
    return player->GetName().CStr();
}

void Player_SetName(alt::IPlayer *player, const char* name)
{
    player->SetName(alt::StringView(name));
}

uint16_t Player_GetHealth(alt::IPlayer *player)
{
    return player->GetHealth();
}

void Player_SetHealth(alt::IPlayer *player, uint16_t health)
{
    player->SetHealth(health);
}

void Player_SetDateTime(alt::IPlayer *player, int day, int month, int year, int hour, int minute, int second)
{
    player->SetDateTime(day, month, year, hour, minute, second);
}

void Player_SetWeather(alt::IPlayer *player, uint32_t weather)
{
    player->SetWeather(weather);
}

bool Player_IsDead(alt::IPlayer *player)
{
    return player->IsDead();
}

bool Player_IsJumping(alt::IPlayer *player)
{
    return player->IsJumping();
}

bool Player_IsInRagdoll(alt::IPlayer *player)
{
    return player->IsInRagdoll();
}

bool Player_IsAiming(alt::IPlayer *player)
{
    return player->IsAiming();
}

bool Player_IsShooting(alt::IPlayer *player)
{
    return player->IsShooting();
}

bool Player_IsReloading(alt::IPlayer *player)
{
    return player->IsReloading();
}

uint16_t Player_GetArmor(alt::IPlayer *player)
{
    return player->GetArmor();
}

void Player_SetArmor(alt::IPlayer *player, uint16_t armor)
{
    player->SetArmor(armor);
}

float Player_GetMoveSpeed(alt::IPlayer *player)
{
    return player->GetMoveSpeed();
}

uint32_t Player_GetWeapon(alt::IPlayer *player)
{
    return player->GetWeapon();
}

uint16_t Player_GetAmmo(alt::IPlayer *player)
{
    return player->GetAmmo();
}

alt::Position Player_GetAimPos(alt::IPlayer *player)
{
    return player->GetAimPos();
}

alt::Rotation Player_GetHeadRotation(alt::IPlayer *player)
{
    return player->GetHeadRotation();
}

bool Player_IsInVehicle(alt::IPlayer *player)
{
    return player->IsInVehicle();
}

alt::IVehicle *Player_GetVehicle(alt::IPlayer *player)
{
    return player->GetVehicle();
}

uint8_t Player_GetSeat(alt::IPlayer *player)
{
    return player->GetSeat();
}

void Player_Kick(alt::IPlayer *player, alt::StringView reason)
{
    player->Kick(reason);
}
