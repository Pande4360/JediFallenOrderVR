#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "EffectData.hpp"
#include "RsAbilityEffect.hpp"
_Script_SwGame::RsAbilityEffect*& _Script_SwGame::EffectData::get_Effect() {
    return *(_Script_SwGame::RsAbilityEffect**)((uintptr_t)this + 0x0);
}
void* _Script_SwGame::EffectData::get_EffectType() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_SwGame::EffectData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.EffectData");
    return result;
}
