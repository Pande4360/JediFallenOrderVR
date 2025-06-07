#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\CurveVector.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "SwSuperJumpSettings.hpp"
float& _Script_SwGame::SwSuperJumpSettings::get_JumpChargeTime() {
    return *(float*)((uintptr_t)this + 0x58);
}
float& _Script_SwGame::SwSuperJumpSettings::get_JumpAscentHorizontalDisplacement() {
    return *(float*)((uintptr_t)this + 0x34);
}
float& _Script_SwGame::SwSuperJumpSettings::get_JumpVerticalDisplacement() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_SwGame::SwSuperJumpSettings::get_JumpDescentHorizontalDisplacement() {
    return *(float*)((uintptr_t)this + 0x3c);
}
float& _Script_SwGame::SwSuperJumpSettings::get_JumpAscentTime() {
    return *(float*)((uintptr_t)this + 0x38);
}
void _Script_SwGame::SwSuperJumpSettings::set_EndJumpOnTakeDamage(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x91 + 0);
    *(uint8_t*)((uintptr_t)this + 0x91 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwSuperJumpSettings::get_JumpDescentTime() {
    return *(float*)((uintptr_t)this + 0x40);
}
_Script_Engine::CurveVector*& _Script_SwGame::SwSuperJumpSettings::get_JumpAscentCurve() {
    return *(_Script_Engine::CurveVector**)((uintptr_t)this + 0x48);
}
_Script_Engine::CurveVector*& _Script_SwGame::SwSuperJumpSettings::get_JumpDescentCurve() {
    return *(_Script_Engine::CurveVector**)((uintptr_t)this + 0x50);
}
void* _Script_SwGame::SwSuperJumpSettings::get_JumpChargeForceMeterUsageRow() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_SwGame::SwSuperJumpSettings::get_JumpChargeForceMeterUsage() {
    return (void*)((uintptr_t)this + 0x70);
}
bool _Script_SwGame::SwSuperJumpSettings::get_JumpChargeRequiresForceMeter() {
    return (*(uint8_t*)((uintptr_t)this + 0x71 + 0)) & 1 != 0;
}
void _Script_SwGame::SwSuperJumpSettings::set_JumpChargeRequiresForceMeter(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x71 + 0);
    *(uint8_t*)((uintptr_t)this + 0x71 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwSuperJumpSettings::get_SuperJumpChargeMotionTweak() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_SwGame::SwSuperJumpSettings::get_SuperJumpAscendMotionTweak() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_SwGame::SwSuperJumpSettings::get_SuperJumpDescendMotionTweak() {
    return (void*)((uintptr_t)this + 0x88);
}
bool _Script_SwGame::SwSuperJumpSettings::get_EndChargeOnTakeDamage() {
    return (*(uint8_t*)((uintptr_t)this + 0x90 + 0)) & 1 != 0;
}
void _Script_SwGame::SwSuperJumpSettings::set_EndChargeOnTakeDamage(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x90 + 0);
    *(uint8_t*)((uintptr_t)this + 0x90 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwSuperJumpSettings::get_EndJumpOnTakeDamage() {
    return (*(uint8_t*)((uintptr_t)this + 0x91 + 0)) & 1 != 0;
}
bool _Script_SwGame::SwSuperJumpSettings::get_DispatchPrematureJumpAscentCompleted() {
    return (*(uint8_t*)((uintptr_t)this + 0x92 + 0)) & 1 != 0;
}
void _Script_SwGame::SwSuperJumpSettings::set_DispatchPrematureJumpAscentCompleted(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x92 + 0);
    *(uint8_t*)((uintptr_t)this + 0x92 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwSuperJumpSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwSuperJumpSettings");
    return result;
}
