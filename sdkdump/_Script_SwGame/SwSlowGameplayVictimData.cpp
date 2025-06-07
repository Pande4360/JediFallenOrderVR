#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimationAsset.hpp"
#include "..\_Script_Engine\CurveFloat.hpp"
#include "SwSlowGameplayVictimData.hpp"
void _Script_SwGame::SwSlowGameplayVictimData::set_bCanForceSlowOnTopOf(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::AnimationAsset*& _Script_SwGame::SwSlowGameplayVictimData::get_ForceSlowStaggerAnimation() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x0);
}
bool _Script_SwGame::SwSlowGameplayVictimData::get_bCanForceSlowOnTopOf() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 1 != 0;
}
float& _Script_SwGame::SwSlowGameplayVictimData::get_ForceSlowDuration() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_SwGame::SwSlowGameplayVictimData::get_ForceSlowBoostedTimeDilation() {
    return *(float*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_SwGame::SwSlowGameplayVictimData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwSlowGameplayVictimData");
    return result;
}
float& _Script_SwGame::SwSlowGameplayVictimData::get_ForceSlowTimeDilation() {
    return *(float*)((uintptr_t)this + 0xc);
}
_Script_Engine::CurveFloat*& _Script_SwGame::SwSlowGameplayVictimData::get_ForceSlowCharacterTimeDilationCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x18);
}
bool _Script_SwGame::SwSlowGameplayVictimData::get_bCanForceSlowRotateToTarget() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 1 != 0;
}
void _Script_SwGame::SwSlowGameplayVictimData::set_bCanForceSlowRotateToTarget(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
