#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwProjectileOverrideInfo.hpp"
void* _Script_SwGame::SwProjectileOverrideInfo::get_ProjectileType() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_SwGame::SwProjectileOverrideInfo::get_bOverrideOffScreenAccuracy() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 1 != 0;
}
void* _Script_SwGame::SwProjectileOverrideInfo::get_NumShotsToMissWhenShotOffScreen() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_SwGame::SwProjectileOverrideInfo::get_bUseConsecutiveShots() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 1 != 0;
}
void _Script_SwGame::SwProjectileOverrideInfo::set_bOverrideOffScreenAccuracy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_SwGame::SwProjectileOverrideInfo::set_bUseConsecutiveShots(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwProjectileOverrideInfo::get_ChanceToMissWhenShotOffScreen() {
    return *(float*)((uintptr_t)this + 0x10);
}
void* _Script_SwGame::SwProjectileOverrideInfo::get_MaxNumConsecutiveShots() {
    return (void*)((uintptr_t)this + 0x18);
}
float& _Script_SwGame::SwProjectileOverrideInfo::get_ChanceOfConsecutiveShot() {
    return *(float*)((uintptr_t)this + 0x1c);
}
_Script_CoreUObject::Class* _Script_SwGame::SwProjectileOverrideInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwProjectileOverrideInfo");
    return result;
}
