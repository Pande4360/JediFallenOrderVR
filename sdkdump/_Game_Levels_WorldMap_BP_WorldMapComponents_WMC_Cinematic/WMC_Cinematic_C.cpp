#include "..\FUObjectArray.hpp"
#include "..\_Game_Levels_WorldMap_BP_BP_WorldMapHologram\BP_WorldMapHologram_C.hpp"
#include "WMC_Cinematic_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_RsGameTechRT\RsMapSectionTag.hpp"
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Cinematic::WMC_Cinematic_C::get_CineToBeScaled() {
    return (*(uint8_t*)((uintptr_t)this + 0x180 + 0)) & 1 != 0;
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Cinematic::WMC_Cinematic_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x170);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Cinematic::WMC_Cinematic_C::get_bIsCine() {
    return (*(uint8_t*)((uintptr_t)this + 0x240 + 0)) & 1 != 0;
}
_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Cinematic::WMC_Cinematic_C::get_WorldMapHologram_Ref() {
    return *(_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C**)((uintptr_t)this + 0x178);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Cinematic::WMC_Cinematic_C::set_CineToBeScaled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x180 + 0);
    *(uint8_t*)((uintptr_t)this + 0x180 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Cinematic::WMC_Cinematic_C::get_CineFocusedMapSection() {
    return (void*)((uintptr_t)this + 0x188);
}
bool _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Cinematic::WMC_Cinematic_C::get_TransformMap() {
    return (*(uint8_t*)((uintptr_t)this + 0x1b0 + 0)) & 1 != 0;
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Cinematic::WMC_Cinematic_C::get_Cine_FocusedMapSectionTMap() {
    return (void*)((uintptr_t)this + 0x1a0);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Cinematic::WMC_Cinematic_C::set_TransformMap(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1b0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1b0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Cinematic::WMC_Cinematic_C::get_Cine_Scale() {
    return *(float*)((uintptr_t)this + 0x1b4);
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Cinematic::WMC_Cinematic_C::get_Cine_Yaw() {
    return *(float*)((uintptr_t)this + 0x1b8);
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Cinematic::WMC_Cinematic_C::get_Cine_CamOffset() {
    return *(float*)((uintptr_t)this + 0x1bc);
}
float& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Cinematic::WMC_Cinematic_C::get_Cine_SmallCamOffset() {
    return *(float*)((uintptr_t)this + 0x1c0);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Cinematic::WMC_Cinematic_C::get_Cine_InMapLocation() {
    return (void*)((uintptr_t)this + 0x1c4);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Cinematic::WMC_Cinematic_C::get_Cine_NameToMST() {
    return (void*)((uintptr_t)this + 0x1d0);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Cinematic::WMC_Cinematic_C::get_Cine_HolomapLocation() {
    return (void*)((uintptr_t)this + 0x220);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Cinematic::WMC_Cinematic_C::get_Cine_CinematicName() {
    return (void*)((uintptr_t)this + 0x22c);
}
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Cinematic::WMC_Cinematic_C::get_Cine_MSTToExplore() {
    return (void*)((uintptr_t)this + 0x230);
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Cinematic::WMC_Cinematic_C::set_bIsCine(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x240 + 0);
    *(uint8_t*)((uintptr_t)this + 0x240 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Cinematic::WMC_Cinematic_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/WorldMap/BP/WorldMapComponents/WMC_Cinematic.WMC_Cinematic_C");
    return result;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Cinematic::WMC_Cinematic_C::SetMeshesExplored(_Script_RsGameTechRT::RsMapSectionTag Tag, bool IsTerrain_, bool On_) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Cinematic::WMC_Cinematic_C::ChangeScaleOfMap(float Scale) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Cinematic::WMC_Cinematic_C::SetCineSelectedSectionParameters() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Cinematic::WMC_Cinematic_C::Cine_HideAllGatewayActors(void* Cine) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Cinematic::WMC_Cinematic_C::Cine_OnTick() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Cinematic::WMC_Cinematic_C::Cine_OnEnd() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Cinematic::WMC_Cinematic_C::Cine_SetNewFocusLocation() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Cinematic::WMC_Cinematic_C::Cine_SetCinematicAndHologramLocation(_Script_CoreUObject::Vector CineHologramLocation, void* Cinematic) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Cinematic::WMC_Cinematic_C::GetMSTFromStruct(int32_t MapSectionTagLocation, void* Cinematic, bool SpecificMapSection_, _Script_CoreUObject::Vector& CentroidOfSelectedTag, _Script_CoreUObject::Vector& AverageOfCinematicTags) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Cinematic::WMC_Cinematic_C::DecideMaskFate() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Cinematic::WMC_Cinematic_C::Cine_OnStart() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Cinematic::WMC_Cinematic_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Cinematic::WMC_Cinematic_C::ExecuteUbergraph_WMC_Cinematic(int32_t EntryPoint) {
    return;
}
