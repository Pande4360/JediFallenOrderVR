#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "RsMapSectionTag.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Rotator;
}
namespace _Script_Engine {
struct DataAsset;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsWorldMapHologramBase : public _Script_Engine::Actor {
    private: char pad_360[0x10]; public:
    void* get_CollectableAcquiredDelegate();
    static _Script_CoreUObject::Class* static_class();
    void UpdateMapLocation(_Script_CoreUObject::Vector& InLocation, _Script_CoreUObject::Rotator& InRotation);
    void TranslateMapToMapSectionCenter(_Script_RsGameTechRT::RsMapSectionTag& MapSection);
    _Script_CoreUObject::Vector TransformWorldPositionToMapPosition(_Script_CoreUObject::Vector& InPositionWorldSpace);
    _Script_CoreUObject::Vector TransformMapPositionToWorldPosition(_Script_CoreUObject::Vector& InPositionMapSpace);
    void ToggleVisibility(bool bVisibile);
    void SetLocationMarker(_Script_CoreUObject::Vector& WorldPosition);
    void SetHolomapMode(void* InHolomapMode);
    void SetHolomapCenterLocation(_Script_CoreUObject::Vector& InHolomapCenter);
    void RequestWorldMapOpen();
    void RequestWorldMapClose();
    void RemoveMapSectionFromActiveLayer(_Script_RsGameTechRT::RsMapSectionTag& MapSection);
    bool IsWorldMapOpen();
    _Script_RsGameTechRT::RsMapSectionTag GetTargetedMapSection();
    _Script_RsGameTechRT::RsMapSectionTag GetSelectedMapSection();
    _Script_Engine::DataAsset* GetRuntimeSettings();
    float GetRelativePlanetScale();
    float GetHolomapYawRotation();
    _Script_CoreUObject::Vector GetHolomapScale();
    void* GetHolomapMode();
    _Script_CoreUObject::Vector GetHolomapCoordiantes();
    _Script_CoreUObject::Vector GetHolomapCenterLocation();
    void* GetActiveInteriorLevel();
    void EnableLockStepTranslationMode(bool bEnabled);
    void ClearLocationMarker();
    void AddMapSectionToActiveLayer(_Script_RsGameTechRT::RsMapSectionTag& MapSection);
}; // Size: 0x370
#pragma pack(pop)
}
