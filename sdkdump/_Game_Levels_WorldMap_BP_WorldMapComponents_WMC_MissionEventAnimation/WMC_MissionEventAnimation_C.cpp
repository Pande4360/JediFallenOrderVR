#include "..\FUObjectArray.hpp"
#include "..\_Game_Levels_WorldMap_BP_BP_WorldMapHologram\BP_WorldMapHologram_C.hpp"
#include "WMC_MissionEventAnimation_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_Engine\CurveFloat.hpp"
#include "..\_Script_Engine\CurveVector.hpp"
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::get_CurrentScale() {
    return *(float*)((uintptr_t)this + 0x2f8);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x170);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::get_EndLocation() {
    return (void*)((uintptr_t)this + 0x298);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::get_TraverseLocation() {
    return (void*)((uintptr_t)this + 0x28c);
}
_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::get_WorldMapHologram_Ref() {
    return *(_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C**)((uintptr_t)this + 0x178);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::get_MissionObjectiveDirectionActors() {
    return (void*)((uintptr_t)this + 0x180);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::get_BeginLocation() {
    return (void*)((uintptr_t)this + 0x280);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::get_MissionEventActorToLocation() {
    return (void*)((uintptr_t)this + 0x190);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::get_bAddRotationOffset() {
    return (*(uint8_t*)((uintptr_t)this + 0x328 + 0)) & 1 != 0;
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::get_MissionEventActorToRotation() {
    return (void*)((uintptr_t)this + 0x1e0);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::get_MissionEventActorToZoom() {
    return (void*)((uintptr_t)this + 0x230);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::get_BeginRotation() {
    return (void*)((uintptr_t)this + 0x2a4);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::get_TraverseRotation() {
    return (void*)((uintptr_t)this + 0x2b0);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::get_EndRotation() {
    return (void*)((uintptr_t)this + 0x2bc);
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::get_BeginScale() {
    return *(float*)((uintptr_t)this + 0x2c8);
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::get_TraverseScale() {
    return *(float*)((uintptr_t)this + 0x2cc);
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::get_EndScale() {
    return *(float*)((uintptr_t)this + 0x2d0);
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::get_InterpSpeed() {
    return *(float*)((uintptr_t)this + 0x2d4);
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::get_InterpMovement() {
    return *(float*)((uintptr_t)this + 0x2d8);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::ReceiveBeginPlay0() {
    return;
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::get_bStartInterp() {
    return (*(uint8_t*)((uintptr_t)this + 0x2dc + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::set_bStartInterp(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2dc + 0);
    *(uint8_t*)((uintptr_t)this + 0x2dc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/WorldMap/BP/WorldMapComponents/WMC_MissionEventAnimation.WMC_MissionEventAnimation_C");
    return result;
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::get_CurrentLocation() {
    return (void*)((uintptr_t)this + 0x2e0);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::get_CurrentRotation() {
    return (void*)((uintptr_t)this + 0x2ec);
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::get_CurrentRotateZ() {
    return *(float*)((uintptr_t)this + 0x32c);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::get_bPause() {
    return (*(uint8_t*)((uintptr_t)this + 0x2fc + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::SetMissionEventRotation() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::set_bPause(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2fc + 0);
    *(uint8_t*)((uintptr_t)this + 0x2fc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::Interp() {
    return;
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::get_InterpSpeedMult() {
    return *(float*)((uintptr_t)this + 0x300);
}
_Script_Engine::CurveFloat*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::get_RotationCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x310);
}
_Script_Engine::CurveFloat*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::get_ScaleCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x308);
}
_Script_Engine::CurveFloat*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::get_VelocityCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x318);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::MissionEventMove() {
    return;
}
_Script_Engine::CurveVector*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::get_LocationCurve() {
    return *(_Script_Engine::CurveVector**)((uintptr_t)this + 0x320);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::set_bAddRotationOffset(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x328 + 0);
    *(uint8_t*)((uintptr_t)this + 0x328 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::get_AddRotateZ() {
    return *(float*)((uintptr_t)this + 0x330);
}
_Script_Engine::CurveFloat*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::get_ScaleOutCurve() {
    return *(_Script_Engine::CurveFloat**)((uintptr_t)this + 0x338);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::get_bScaleOut() {
    return (*(uint8_t*)((uintptr_t)this + 0x344 + 0)) & 1 != 0;
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::get_ScaleOutInterp() {
    return *(float*)((uintptr_t)this + 0x340);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::set_bScaleOut(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x344 + 0);
    *(uint8_t*)((uintptr_t)this + 0x344 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::SetInitialValues() {
    return;
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::get_bReverse() {
    return (*(uint8_t*)((uintptr_t)this + 0x345 + 0)) & 1 != 0;
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::get_SpeedBackToArrow() {
    return *(float*)((uintptr_t)this + 0x348);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::set_bReverse(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x345 + 0);
    *(uint8_t*)((uintptr_t)this + 0x345 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::get_BackTo90() {
    return *(float*)((uintptr_t)this + 0x34c);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::get_bBackTo90() {
    return (*(uint8_t*)((uintptr_t)this + 0x350 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::set_bBackTo90(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x350 + 0);
    *(uint8_t*)((uintptr_t)this + 0x350 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_MissionEventAnimation::WMC_MissionEventAnimation_C::ExecuteUbergraph_WMC_MissionEventAnimation(int32_t EntryPoint) {
    return;
}
