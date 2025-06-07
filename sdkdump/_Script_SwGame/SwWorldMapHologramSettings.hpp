#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsWorldMapHologramSettingsBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwWorldMapHologramSettings : public _Script_RsGameTechRT::RsWorldMapHologramSettingsBase {
    private: char pad_30[0x198]; public:
    float& get_CameraIntroTransitionTime();
    float& get_CameraOutroTransitionTime();
    float& get_MapZoomSpeed();
    float& get_MapRotationSpeed();
    float& get_MapTranslationSpeed();
    float& get_MapVerticalPanSpeed();
    bool get_bInvertRotation();
    void set_bInvertRotation(bool value);
    bool get_bInvertVerticalPan();
    void set_bInvertVerticalPan(bool value);
    bool get_bInvertTranslation();
    void set_bInvertTranslation(bool value);
    float& get_MaxLockStepAngle();
    void* get_MapSectionSnapTransformFloatCurvePtr();
    void* get_HolomapRelativePositionOffset();
    float& get_PlayerArrowScale();
    float& get_DeadZoneMapTranslate();
    float& get_DeadZoneMapRotate();
    float& get_DeadZoneMapZoom();
    int32_t& get_DownsampleFactor();
    bool get_bDownsampleBloom();
    void set_bDownsampleBloom(bool value);
    int32_t& get_BloomDownsampleFactor();
    float& get_Layer1_Opacity();
    void* get_Layer1_BlendMode();
    float& get_Layer2_Opacity();
    void* get_Layer2_BlendMode();
    float& get_Layer3_Opacity();
    void* get_Layer3_BlendMode();
    float& get_Layer4_Opacity();
    void* get_Layer4_BlendMode();
    void* get_SelectedRegionCompleteColor();
    void* get_SelectedRegionIncompleteColor();
    void* get_ActiveRegionCompleteColor();
    void* get_ActiveRegionIncompleteColor();
    void* get_NonActiveMapSectionColor();
    void* get_TerrainColor();
    void* get_PlayerArrowColor();
    void* get_MantisShipColor();
    void* get_GatewayColor();
    void* get_UnlockedDoorColor();
    void* get_LockedDoorColor();
    void* get_UnlockableDoorColor();
    void* get_FogOfWarGatewayColor();
    void* get_MissionObjectiveSectionColor();
    void* get_MissionObjectiveSectionDarkColor();
    void* get_LocalPlanetSettings();
    void* get_HolomapLayers();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1c8
#pragma pack(pop)
}
