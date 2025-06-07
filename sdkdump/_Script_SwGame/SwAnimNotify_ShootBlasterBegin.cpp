#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotify.hpp"
#include "SwAnimNotify_ShootBlasterBegin.hpp"
bool _Script_SwGame::SwAnimNotify_ShootBlasterBegin::get_bFireAlternativeBlasterType() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Script_SwGame::SwAnimNotify_ShootBlasterBegin::set_bCanShotDuringForceSlow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_SwGame::SwAnimNotify_ShootBlasterBegin::set_bFireAlternativeBlasterType(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwAnimNotify_ShootBlasterBegin::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwAnimNotify_ShootBlasterBegin");
    return result;
}
bool _Script_SwGame::SwAnimNotify_ShootBlasterBegin::get_bCanShotDuringForceSlow() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 2 != 0;
}
void* _Script_SwGame::SwAnimNotify_ShootBlasterBegin::get_AccuracyOverrideMode() {
    return (void*)((uintptr_t)this + 0x3c);
}
float& _Script_SwGame::SwAnimNotify_ShootBlasterBegin::get_ShootingConeHalfAngle() {
    return *(float*)((uintptr_t)this + 0x40);
}
