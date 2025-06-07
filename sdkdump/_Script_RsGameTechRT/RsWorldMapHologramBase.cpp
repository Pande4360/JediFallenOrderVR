#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "RsMapSectionTag.hpp"
#include "RsWorldMapHologramBase.hpp"
void* _Script_RsGameTechRT::RsWorldMapHologramBase::get_CollectableAcquiredDelegate() {
    return (void*)((uintptr_t)this + 0x360);
}
_Script_CoreUObject::Vector _Script_RsGameTechRT::RsWorldMapHologramBase::TransformMapPositionToWorldPosition(_Script_CoreUObject::Vector& InPositionMapSpace) {
    return;
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsWorldMapHologramBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsWorldMapHologramBase");
    return result;
}
void _Script_RsGameTechRT::RsWorldMapHologramBase::UpdateMapLocation(_Script_CoreUObject::Vector& InLocation, _Script_CoreUObject::Rotator& InRotation) {
    return;
}
void _Script_RsGameTechRT::RsWorldMapHologramBase::TranslateMapToMapSectionCenter(_Script_RsGameTechRT::RsMapSectionTag& MapSection) {
    return;
}
_Script_CoreUObject::Vector _Script_RsGameTechRT::RsWorldMapHologramBase::TransformWorldPositionToMapPosition(_Script_CoreUObject::Vector& InPositionWorldSpace) {
    return;
}
void _Script_RsGameTechRT::RsWorldMapHologramBase::ToggleVisibility(bool bVisibile) {
    return;
}
void _Script_RsGameTechRT::RsWorldMapHologramBase::SetLocationMarker(_Script_CoreUObject::Vector& WorldPosition) {
    return;
}
void _Script_RsGameTechRT::RsWorldMapHologramBase::SetHolomapMode(void* InHolomapMode) {
    return;
}
void _Script_RsGameTechRT::RsWorldMapHologramBase::SetHolomapCenterLocation(_Script_CoreUObject::Vector& InHolomapCenter) {
    return;
}
void _Script_RsGameTechRT::RsWorldMapHologramBase::RequestWorldMapOpen() {
    return;
}
void _Script_RsGameTechRT::RsWorldMapHologramBase::RequestWorldMapClose() {
    return;
}
void _Script_RsGameTechRT::RsWorldMapHologramBase::RemoveMapSectionFromActiveLayer(_Script_RsGameTechRT::RsMapSectionTag& MapSection) {
    return;
}
bool _Script_RsGameTechRT::RsWorldMapHologramBase::IsWorldMapOpen() {
    return;
}
_Script_RsGameTechRT::RsMapSectionTag _Script_RsGameTechRT::RsWorldMapHologramBase::GetTargetedMapSection() {
    return;
}
_Script_RsGameTechRT::RsMapSectionTag _Script_RsGameTechRT::RsWorldMapHologramBase::GetSelectedMapSection() {
    return;
}
_Script_Engine::DataAsset* _Script_RsGameTechRT::RsWorldMapHologramBase::GetRuntimeSettings() {
    return;
}
float _Script_RsGameTechRT::RsWorldMapHologramBase::GetRelativePlanetScale() {
    return;
}
float _Script_RsGameTechRT::RsWorldMapHologramBase::GetHolomapYawRotation() {
    return;
}
_Script_CoreUObject::Vector _Script_RsGameTechRT::RsWorldMapHologramBase::GetHolomapScale() {
    return;
}
void* _Script_RsGameTechRT::RsWorldMapHologramBase::GetHolomapMode() {
    return;
}
_Script_CoreUObject::Vector _Script_RsGameTechRT::RsWorldMapHologramBase::GetHolomapCoordiantes() {
    return;
}
_Script_CoreUObject::Vector _Script_RsGameTechRT::RsWorldMapHologramBase::GetHolomapCenterLocation() {
    return;
}
void* _Script_RsGameTechRT::RsWorldMapHologramBase::GetActiveInteriorLevel() {
    return;
}
void _Script_RsGameTechRT::RsWorldMapHologramBase::EnableLockStepTranslationMode(bool bEnabled) {
    return;
}
void _Script_RsGameTechRT::RsWorldMapHologramBase::ClearLocationMarker() {
    return;
}
void _Script_RsGameTechRT::RsWorldMapHologramBase::AddMapSectionToActiveLayer(_Script_RsGameTechRT::RsMapSectionTag& MapSection) {
    return;
}
