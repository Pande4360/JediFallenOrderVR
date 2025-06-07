#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "SwCharacterDeathTestActor.hpp"
bool _Script_SwGame::SwCharacterDeathTestActor::get_IsActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x360 + 0)) & 1 != 0;
}
void _Script_SwGame::SwCharacterDeathTestActor::set_IsActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x360 + 0);
    *(uint8_t*)((uintptr_t)this + 0x360 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwCharacterDeathTestActor::get_IdleTimeBeforeDeathTrigger() {
    return *(float*)((uintptr_t)this + 0x364);
}
void* _Script_SwGame::SwCharacterDeathTestActor::get_DeathDamageType() {
    return (void*)((uintptr_t)this + 0x368);
}
_Script_CoreUObject::Class* _Script_SwGame::SwCharacterDeathTestActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwCharacterDeathTestActor");
    return result;
}
void* _Script_SwGame::SwCharacterDeathTestActor::get_SpawnersToDie() {
    return (void*)((uintptr_t)this + 0x370);
}
