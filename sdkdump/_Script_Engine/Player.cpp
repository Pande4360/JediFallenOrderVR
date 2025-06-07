#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "Player.hpp"
#include "PlayerController.hpp"
_Script_Engine::PlayerController*& _Script_Engine::Player::get_PlayerController() {
    return *(_Script_Engine::PlayerController**)((uintptr_t)this + 0x30);
}
int32_t& _Script_Engine::Player::get_CurrentNetSpeed() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
int32_t& _Script_Engine::Player::get_ConfiguredInternetSpeed() {
    return *(int32_t*)((uintptr_t)this + 0x3c);
}
int32_t& _Script_Engine::Player::get_ConfiguredLanSpeed() {
    return *(int32_t*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_Engine::Player::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.Player");
    return result;
}
