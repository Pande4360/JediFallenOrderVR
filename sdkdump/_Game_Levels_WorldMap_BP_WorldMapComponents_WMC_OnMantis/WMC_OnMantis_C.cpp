#include "..\FUObjectArray.hpp"
#include "..\_Game_Levels_WorldMap_BP_BP_WorldMapHologram\BP_WorldMapHologram_C.hpp"
#include "WMC_OnMantis_C.hpp"
#include "..\_Game_UI_UI_HUD_ROOT\UI_HUD_ROOT_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x170);
}
_Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::get_HUDRoot_Ref() {
    return *(_Game_UI_UI_HUD_ROOT::UI_HUD_ROOT_C**)((uintptr_t)this + 0x1a8);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::get_TurnOffMap() {
    return (*(uint8_t*)((uintptr_t)this + 0x18e + 0)) & 1 != 0;
}
_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::get_WorldMapHologram_Ref() {
    return *(_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C**)((uintptr_t)this + 0x178);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::OnTickMantis() {
    return;
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::get_AnimTo() {
    return *(float*)((uintptr_t)this + 0x19c);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::get_MantisLocation() {
    return (void*)((uintptr_t)this + 0x180);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::get_IsOnMantis() {
    return (*(uint8_t*)((uintptr_t)this + 0x18d + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::SetWorldMapOnHolotableOpenTransform(bool OnStart) {
    return;
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::get_ChangeMapToGalaxy() {
    return (*(uint8_t*)((uintptr_t)this + 0x18c + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::set_ChangeMapToGalaxy(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18c + 0);
    *(uint8_t*)((uintptr_t)this + 0x18c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::get_bInteractAnimationCompleted() {
    return (*(uint8_t*)((uintptr_t)this + 0x1a3 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::set_IsOnMantis(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18d + 0);
    *(uint8_t*)((uintptr_t)this + 0x18d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::set_TurnOffMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18e + 0);
    *(uint8_t*)((uintptr_t)this + 0x18e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::set_bFortressMessageRan(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1d0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::get_CurrentPlanet() {
    return (void*)((uintptr_t)this + 0x1d2);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::get_OnMantisHolotable() {
    return (*(uint8_t*)((uintptr_t)this + 0x18f + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::set_OnMantisHolotable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18f + 0);
    *(uint8_t*)((uintptr_t)this + 0x18f + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::SetWorldMapOnHolotableOpenTransformInHyp() {
    return;
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::get_bLastChanceFortress() {
    return (*(uint8_t*)((uintptr_t)this + 0x192 + 0)) & 1 != 0;
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::get_bOnMantisWorldMapOpen() {
    return (*(uint8_t*)((uintptr_t)this + 0x190 + 0)) & 1 != 0;
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::get_bPreventOpening() {
    return (*(uint8_t*)((uintptr_t)this + 0x1d1 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::set_bOnMantisWorldMapOpen(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x190 + 0);
    *(uint8_t*)((uintptr_t)this + 0x190 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::get_bPlanetChosenOrHyp() {
    return (*(uint8_t*)((uintptr_t)this + 0x191 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::set_bPlanetChosenOrHyp(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x191 + 0);
    *(uint8_t*)((uintptr_t)this + 0x191 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::set_bLastChanceFortress(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x192 + 0);
    *(uint8_t*)((uintptr_t)this + 0x192 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::set_bBeginPlay(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1d3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1d3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::get_bStartTransform() {
    return (*(uint8_t*)((uintptr_t)this + 0x193 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::Mantis_SetMapOnMantis(_Script_CoreUObject::Vector MantisLoc, bool BeginPlay_) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::set_bStartTransform(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x193 + 0);
    *(uint8_t*)((uintptr_t)this + 0x193 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::get_bEndTransform() {
    return (*(uint8_t*)((uintptr_t)this + 0x194 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::set_bEndTransform(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x194 + 0);
    *(uint8_t*)((uintptr_t)this + 0x194 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::set_bStartUVAnimation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1a2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1a2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::get_RotateTo() {
    return *(float*)((uintptr_t)this + 0x198);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::get_bToGalaxyStrongAnim() {
    return (*(uint8_t*)((uintptr_t)this + 0x1a0 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::set_bToGalaxyStrongAnim(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1a0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1a0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::get_bUVAnimationFinished() {
    return (*(uint8_t*)((uintptr_t)this + 0x1a1 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::set_bUVAnimationFinished(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1a1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1a1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::get_bStartUVAnimation() {
    return (*(uint8_t*)((uintptr_t)this + 0x1a2 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::set_bInteractAnimationCompleted(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1a3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1a3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::get_bInteractAnim() {
    return (*(uint8_t*)((uintptr_t)this + 0x1a4 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::set_bInteractAnim(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1a4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1a4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::get_CurrentWorldEnum() {
    return (void*)((uintptr_t)this + 0x1a5);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::get_installed_() {
    return (*(uint8_t*)((uintptr_t)this + 0x1b0 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::set_installed_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1b0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1b0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::get_MeteorMST() {
    return (void*)((uintptr_t)this + 0x1b8);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::get_bFortressMessageRan() {
    return (*(uint8_t*)((uintptr_t)this + 0x1d0 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::set_bPreventOpening(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1d1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1d1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::get_bBeginPlay() {
    return (*(uint8_t*)((uintptr_t)this + 0x1d3 + 0)) & 1 != 0;
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::get_bBeginPlayHyp() {
    return (*(uint8_t*)((uintptr_t)this + 0x1d4 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::set_bBeginPlayHyp(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1d4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1d4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::get_bDuringFightClubCine() {
    return (*(uint8_t*)((uintptr_t)this + 0x1d5 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::set_bDuringFightClubCine(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1d5 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1d5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/WorldMap/BP/WorldMapComponents/WMC_OnMantis.WMC_OnMantis_C");
    return result;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::SetRotationAndLocationOnEnter() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::HideOtherPlanetsForFortCine() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::GetGalaxyMapRotation(_Script_CoreUObject::Rotator& Rotation) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::OnEnterMantis(bool BeginPlay_) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::SetLocationOnMapClose() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::CustomDelay(float DelayAmount, bool& ReadyToMoveOn) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::SetMantisLight() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::WalkIntoMantis() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::CloseMantisMap() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::Mantis_OnMantisExit() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::OpenMapOnMantisTable(_Script_CoreUObject::Vector Location) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::CloseFromHolotable() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::AfterPlanetHopLoad(void* Planet) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::MAP_planetChosen_Event(void* Planet) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::SetLocationDuringTakeOff() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::SetMantisLocation(_Script_CoreUObject::Vector MantisLocation) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::PlanetChosenUVAnimation() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::InteractionCompleted() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::InteractionStarted() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::InitiateFortressFinalMessage() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::ResetInstalledMessage() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::TransformToCenter(bool Immediate_) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::TransformToPlanet() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::DismissFortressMessage() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::SetHolotableForFortressCinematic() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::FailsafeOpen() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::CheckFortressUnlocked() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::OnHypSavePointLoad() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::InitialOpenMantisMap() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_OnMantis::WMC_OnMantis_C::ExecuteUbergraph_WMC_OnMantis(int32_t EntryPoint) {
    return;
}
