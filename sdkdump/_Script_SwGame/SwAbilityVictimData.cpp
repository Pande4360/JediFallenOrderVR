#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "SwAbilityVictimData.hpp"
#include "SwCollisionDamageData.hpp"
void* _Script_SwGame::SwAbilityVictimData::get_TelekinesisGameplayData() {
    return (void*)((uintptr_t)this + 0x318);
}
void* _Script_SwGame::SwAbilityVictimData::get_SlowGameplayData() {
    return (void*)((uintptr_t)this + 0x2c8);
}
void* _Script_SwGame::SwAbilityVictimData::get_PushGameplayData() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_SwGame::SwAbilityVictimData::get_PullFXData() {
    return (void*)((uintptr_t)this + 0x2a8);
}
void* _Script_SwGame::SwAbilityVictimData::get_PushFXData() {
    return (void*)((uintptr_t)this + 0x1b8);
}
void* _Script_SwGame::SwAbilityVictimData::get_PullGameplayData() {
    return (void*)((uintptr_t)this + 0x1e8);
}
void* _Script_SwGame::SwAbilityVictimData::get_TelekinesisFXData() {
    return (void*)((uintptr_t)this + 0x438);
}
void* _Script_SwGame::SwAbilityVictimData::get_SlowFXData() {
    return (void*)((uintptr_t)this + 0x2f0);
}
_Script_SwGame::SwCollisionDamageData*& _Script_SwGame::SwAbilityVictimData::get_CollisionDamageData() {
    return *(_Script_SwGame::SwCollisionDamageData**)((uintptr_t)this + 0x448);
}
void* _Script_SwGame::SwAbilityVictimData::get_DirectionAssistData() {
    return (void*)((uintptr_t)this + 0x450);
}
_Script_CoreUObject::Class* _Script_SwGame::SwAbilityVictimData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwAbilityVictimData");
    return result;
}
