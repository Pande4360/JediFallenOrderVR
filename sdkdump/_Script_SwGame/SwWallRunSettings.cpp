#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "..\_Script_RsGameTechRT\RsHeroStateModifierDefinition.hpp"
#include "SwWallRunSettings.hpp"
float& _Script_SwGame::SwWallRunSettings::get_VelocityDotViewThreshold() {
    return *(float*)((uintptr_t)this + 0x40);
}
void* _Script_SwGame::SwWallRunSettings::get_WallRunSurfaceAttribute() {
    return (void*)((uintptr_t)this + 0x30);
}
float& _Script_SwGame::SwWallRunSettings::get_FacingWallInputThreshold() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_SwGame::SwWallRunSettings::get_FacingWallViewThreshold() {
    return *(float*)((uintptr_t)this + 0x3c);
}
float& _Script_SwGame::SwWallRunSettings::get_InputDotViewThreshold() {
    return *(float*)((uintptr_t)this + 0x44);
}
float& _Script_SwGame::SwWallRunSettings::get_VelocityAlongWallThreshold() {
    return *(float*)((uintptr_t)this + 0x48);
}
bool _Script_SwGame::SwWallRunSettings::get_DebugDrawGroundSweep() {
    return (*(uint8_t*)((uintptr_t)this + 0xa1 + 0)) & 1 != 0;
}
float& _Script_SwGame::SwWallRunSettings::get_MaxVerticalEnterVelocity() {
    return *(float*)((uintptr_t)this + 0x50);
}
float& _Script_SwGame::SwWallRunSettings::get_MinVerticalEnterVelocity() {
    return *(float*)((uintptr_t)this + 0x4c);
}
float& _Script_SwGame::SwWallRunSettings::get_MinWallNormalAngleFromVertical() {
    return *(float*)((uintptr_t)this + 0x54);
}
float& _Script_SwGame::SwWallRunSettings::get_MaxWallNormalAngleFromVertical() {
    return *(float*)((uintptr_t)this + 0x58);
}
float& _Script_SwGame::SwWallRunSettings::get_MinDistanceFromGround() {
    return *(float*)((uintptr_t)this + 0x5c);
}
bool _Script_SwGame::SwWallRunSettings::get_bAllowMultipleWallRunsOnSameSide() {
    return (*(uint8_t*)((uintptr_t)this + 0x60 + 0)) & 1 != 0;
}
void _Script_SwGame::SwWallRunSettings::set_bAllowMultipleWallRunsOnSameSide(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x60 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwWallRunSettings::get_bEnableWallVerificationSweep() {
    return (*(uint8_t*)((uintptr_t)this + 0x61 + 0)) & 1 != 0;
}
void _Script_SwGame::SwWallRunSettings::set_bEnableWallVerificationSweep(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x61 + 0);
    *(uint8_t*)((uintptr_t)this + 0x61 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwWallRunSettings::get_WallVerificationSweepLength() {
    return *(float*)((uintptr_t)this + 0x64);
}
bool _Script_SwGame::SwWallRunSettings::get_bDebugDrawWallVerificationSweep() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 1 != 0;
}
void _Script_SwGame::SwWallRunSettings::set_bDebugDrawWallVerificationSweep(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwWallRunSettings::get_ForceMeterRow() {
    return (void*)((uintptr_t)this + 0x70);
}
float& _Script_SwGame::SwWallRunSettings::get_WallRunTime() {
    return *(float*)((uintptr_t)this + 0x80);
}
float& _Script_SwGame::SwWallRunSettings::get_WallRunExpiredTime() {
    return *(float*)((uintptr_t)this + 0x84);
}
float& _Script_SwGame::SwWallRunSettings::get_WallRunProximity() {
    return *(float*)((uintptr_t)this + 0x88);
}
float& _Script_SwGame::SwWallRunSettings::get_MinInputMagnitude() {
    return *(float*)((uintptr_t)this + 0x8c);
}
float& _Script_SwGame::SwWallRunSettings::get_LostWallGracePeriod() {
    return *(float*)((uintptr_t)this + 0x90);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_SwGame::SwWallRunSettings::get_WallRunExpiredModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0x98);
}
bool _Script_SwGame::SwWallRunSettings::get_WallRunRequiresForce() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 1 != 0;
}
void _Script_SwGame::SwWallRunSettings::set_WallRunRequiresForce(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_SwGame::SwWallRunSettings::set_DebugDrawGroundSweep(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa1 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwWallRunSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwWallRunSettings");
    return result;
}
