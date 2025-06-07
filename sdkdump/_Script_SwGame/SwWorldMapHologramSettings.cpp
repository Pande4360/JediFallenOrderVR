#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsWorldMapHologramSettingsBase.hpp"
#include "SwWorldMapHologramSettings.hpp"
float& _Script_SwGame::SwWorldMapHologramSettings::get_CameraIntroTransitionTime() {
    return *(float*)((uintptr_t)this + 0x30);
}
bool _Script_SwGame::SwWorldMapHologramSettings::get_bInvertRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
void* _Script_SwGame::SwWorldMapHologramSettings::get_TerrainColor() {
    return (void*)((uintptr_t)this + 0x110);
}
void _Script_SwGame::SwWorldMapHologramSettings::set_bInvertRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwWorldMapHologramSettings::get_CameraOutroTransitionTime() {
    return *(float*)((uintptr_t)this + 0x34);
}
void* _Script_SwGame::SwWorldMapHologramSettings::get_Layer4_BlendMode() {
    return (void*)((uintptr_t)this + 0xbc);
}
float& _Script_SwGame::SwWorldMapHologramSettings::get_MapZoomSpeed() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_SwGame::SwWorldMapHologramSettings::get_MapVerticalPanSpeed() {
    return *(float*)((uintptr_t)this + 0x44);
}
void _Script_SwGame::SwWorldMapHologramSettings::set_bDownsampleBloom(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x98 + 0);
    *(uint8_t*)((uintptr_t)this + 0x98 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwWorldMapHologramSettings::get_MapRotationSpeed() {
    return *(float*)((uintptr_t)this + 0x3c);
}
void* _Script_SwGame::SwWorldMapHologramSettings::get_SelectedRegionCompleteColor() {
    return (void*)((uintptr_t)this + 0xc0);
}
float& _Script_SwGame::SwWorldMapHologramSettings::get_MapTranslationSpeed() {
    return *(float*)((uintptr_t)this + 0x40);
}
bool _Script_SwGame::SwWorldMapHologramSettings::get_bInvertVerticalPan() {
    return (*(uint8_t*)((uintptr_t)this + 0x49 + 0)) & 1 != 0;
}
void* _Script_SwGame::SwWorldMapHologramSettings::get_LocalPlanetSettings() {
    return (void*)((uintptr_t)this + 0x1b0);
}
void _Script_SwGame::SwWorldMapHologramSettings::set_bInvertVerticalPan(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x49 + 0);
    *(uint8_t*)((uintptr_t)this + 0x49 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwWorldMapHologramSettings::get_bInvertTranslation() {
    return (*(uint8_t*)((uintptr_t)this + 0x4a + 0)) & 1 != 0;
}
void _Script_SwGame::SwWorldMapHologramSettings::set_bInvertTranslation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4a + 0);
    *(uint8_t*)((uintptr_t)this + 0x4a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwWorldMapHologramSettings::get_MaxLockStepAngle() {
    return *(float*)((uintptr_t)this + 0x4c);
}
void* _Script_SwGame::SwWorldMapHologramSettings::get_MapSectionSnapTransformFloatCurvePtr() {
    return (void*)((uintptr_t)this + 0x50);
}
float& _Script_SwGame::SwWorldMapHologramSettings::get_PlayerArrowScale() {
    return *(float*)((uintptr_t)this + 0x84);
}
void* _Script_SwGame::SwWorldMapHologramSettings::get_HolomapRelativePositionOffset() {
    return (void*)((uintptr_t)this + 0x78);
}
float& _Script_SwGame::SwWorldMapHologramSettings::get_DeadZoneMapTranslate() {
    return *(float*)((uintptr_t)this + 0x88);
}
float& _Script_SwGame::SwWorldMapHologramSettings::get_DeadZoneMapRotate() {
    return *(float*)((uintptr_t)this + 0x8c);
}
float& _Script_SwGame::SwWorldMapHologramSettings::get_DeadZoneMapZoom() {
    return *(float*)((uintptr_t)this + 0x90);
}
int32_t& _Script_SwGame::SwWorldMapHologramSettings::get_DownsampleFactor() {
    return *(int32_t*)((uintptr_t)this + 0x94);
}
bool _Script_SwGame::SwWorldMapHologramSettings::get_bDownsampleBloom() {
    return (*(uint8_t*)((uintptr_t)this + 0x98 + 0)) & 1 != 0;
}
int32_t& _Script_SwGame::SwWorldMapHologramSettings::get_BloomDownsampleFactor() {
    return *(int32_t*)((uintptr_t)this + 0x9c);
}
float& _Script_SwGame::SwWorldMapHologramSettings::get_Layer1_Opacity() {
    return *(float*)((uintptr_t)this + 0xa0);
}
void* _Script_SwGame::SwWorldMapHologramSettings::get_Layer1_BlendMode() {
    return (void*)((uintptr_t)this + 0xa4);
}
float& _Script_SwGame::SwWorldMapHologramSettings::get_Layer2_Opacity() {
    return *(float*)((uintptr_t)this + 0xa8);
}
void* _Script_SwGame::SwWorldMapHologramSettings::get_Layer2_BlendMode() {
    return (void*)((uintptr_t)this + 0xac);
}
float& _Script_SwGame::SwWorldMapHologramSettings::get_Layer3_Opacity() {
    return *(float*)((uintptr_t)this + 0xb0);
}
void* _Script_SwGame::SwWorldMapHologramSettings::get_Layer3_BlendMode() {
    return (void*)((uintptr_t)this + 0xb4);
}
float& _Script_SwGame::SwWorldMapHologramSettings::get_Layer4_Opacity() {
    return *(float*)((uintptr_t)this + 0xb8);
}
void* _Script_SwGame::SwWorldMapHologramSettings::get_SelectedRegionIncompleteColor() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_SwGame::SwWorldMapHologramSettings::get_ActiveRegionCompleteColor() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_SwGame::SwWorldMapHologramSettings::get_UnlockableDoorColor() {
    return (void*)((uintptr_t)this + 0x170);
}
void* _Script_SwGame::SwWorldMapHologramSettings::get_ActiveRegionIncompleteColor() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_SwGame::SwWorldMapHologramSettings::get_NonActiveMapSectionColor() {
    return (void*)((uintptr_t)this + 0x100);
}
void* _Script_SwGame::SwWorldMapHologramSettings::get_PlayerArrowColor() {
    return (void*)((uintptr_t)this + 0x120);
}
void* _Script_SwGame::SwWorldMapHologramSettings::get_MantisShipColor() {
    return (void*)((uintptr_t)this + 0x130);
}
void* _Script_SwGame::SwWorldMapHologramSettings::get_GatewayColor() {
    return (void*)((uintptr_t)this + 0x140);
}
void* _Script_SwGame::SwWorldMapHologramSettings::get_UnlockedDoorColor() {
    return (void*)((uintptr_t)this + 0x150);
}
void* _Script_SwGame::SwWorldMapHologramSettings::get_LockedDoorColor() {
    return (void*)((uintptr_t)this + 0x160);
}
void* _Script_SwGame::SwWorldMapHologramSettings::get_FogOfWarGatewayColor() {
    return (void*)((uintptr_t)this + 0x180);
}
void* _Script_SwGame::SwWorldMapHologramSettings::get_MissionObjectiveSectionColor() {
    return (void*)((uintptr_t)this + 0x190);
}
void* _Script_SwGame::SwWorldMapHologramSettings::get_MissionObjectiveSectionDarkColor() {
    return (void*)((uintptr_t)this + 0x1a0);
}
void* _Script_SwGame::SwWorldMapHologramSettings::get_HolomapLayers() {
    return (void*)((uintptr_t)this + 0x1c0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwWorldMapHologramSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwWorldMapHologramSettings");
    return result;
}
