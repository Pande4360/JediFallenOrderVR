#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotifyState.hpp"
#include "SwAnimNotify_HeroSoftLock.hpp"
#include "SwHero.hpp"
float& _Script_SwGame::SwAnimNotify_HeroSoftLock::get_MaxRotationSpeed() {
    return *(float*)((uintptr_t)this + 0x40);
}
bool _Script_SwGame::SwAnimNotify_HeroSoftLock::get_bReacquireSoftTarget() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void _Script_SwGame::SwAnimNotify_HeroSoftLock::set_bReacquireSoftTarget(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwAnimNotify_HeroSoftLock::get_MaxDistance() {
    return *(float*)((uintptr_t)this + 0x34);
}
_Script_SwGame::SwHero*& _Script_SwGame::SwAnimNotify_HeroSoftLock::get_HeroRef() {
    return *(_Script_SwGame::SwHero**)((uintptr_t)this + 0x48);
}
float& _Script_SwGame::SwAnimNotify_HeroSoftLock::get_MaxHalfAngle() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_SwGame::SwAnimNotify_HeroSoftLock::get_OffsetAngle() {
    return *(float*)((uintptr_t)this + 0x3c);
}
_Script_CoreUObject::Class* _Script_SwGame::SwAnimNotify_HeroSoftLock::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwAnimNotify_HeroSoftLock");
    return result;
}
