#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwSimpleDestructible_CommonReactionOnCharacterOverlap.hpp"
bool _Script_SwGame::SwSimpleDestructible_CommonReactionOnCharacterOverlap::get_ReactOnCharacterOverlap() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_SwGame::SwSimpleDestructible_CommonReactionOnCharacterOverlap::set_ReactOnCharacterOverlap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwSimpleDestructible_CommonReactionOnCharacterOverlap::get_OverlapDetectionComponentName() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_SwGame::SwSimpleDestructible_CommonReactionOnCharacterOverlap::get_MinimumCharacterSpeed() {
    return *(float*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_SwGame::SwSimpleDestructible_CommonReactionOnCharacterOverlap::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwSimpleDestructible_CommonReactionOnCharacterOverlap");
    return result;
}
float& _Script_SwGame::SwSimpleDestructible_CommonReactionOnCharacterOverlap::get_DamageAppliedToThisDestructibleActor() {
    return *(float*)((uintptr_t)this + 0x14);
}
