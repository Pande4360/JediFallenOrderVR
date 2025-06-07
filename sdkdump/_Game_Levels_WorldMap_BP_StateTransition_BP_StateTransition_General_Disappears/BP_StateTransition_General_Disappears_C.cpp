#include "..\FUObjectArray.hpp"
#include "..\_Game_Levels_WorldMap_BP_BP_WorldMapHologram\BP_WorldMapHologram_C.hpp"
#include "BP_StateTransition_General_Disappears_C.hpp"
#include "..\_Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Parent\BP_StateTransition_Parent_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsMapSectionTag.hpp"
#include "..\_Script_RsGameTechRT\RsWorldMapStaticMeshComponent.hpp"
void* _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_General_Disappears::BP_StateTransition_General_Disappears_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x3a8);
}
_Script_RsGameTechRT::RsWorldMapStaticMeshComponent*& _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_General_Disappears::BP_StateTransition_General_Disappears_C::get_State_One() {
    return *(_Script_RsGameTechRT::RsWorldMapStaticMeshComponent**)((uintptr_t)this + 0x3b0);
}
_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_General_Disappears::BP_StateTransition_General_Disappears_C::get_WorldMapHologram_Ref() {
    return *(_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C**)((uintptr_t)this + 0x3c0);
}
bool _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_General_Disappears::BP_StateTransition_General_Disappears_C::get_State_Changed() {
    return (*(uint8_t*)((uintptr_t)this + 0x3b8 + 0)) & 1 != 0;
}
void* _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_General_Disappears::BP_StateTransition_General_Disappears_C::get_ForceAbility() {
    return (void*)((uintptr_t)this + 0x3c8);
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_General_Disappears::BP_StateTransition_General_Disappears_C::set_State_Changed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3b8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_General_Disappears::BP_StateTransition_General_Disappears_C::get_IsLocked() {
    return (*(uint8_t*)((uintptr_t)this + 0x3b9 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_General_Disappears::BP_StateTransition_General_Disappears_C::set_IsLocked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3b9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3b9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_General_Disappears::BP_StateTransition_General_Disappears_C::get_IsGateway() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c9 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_General_Disappears::BP_StateTransition_General_Disappears_C::Tutorial() {
    return;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_General_Disappears::BP_StateTransition_General_Disappears_C::set_IsGateway(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_General_Disappears::BP_StateTransition_General_Disappears_C::get_IsTutorial() {
    return (*(uint8_t*)((uintptr_t)this + 0x3ca + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_General_Disappears::BP_StateTransition_General_Disappears_C::set_IsTutorial(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3ca + 0);
    *(uint8_t*)((uintptr_t)this + 0x3ca + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_General_Disappears::BP_StateTransition_General_Disappears_C::get_TutorialFinished() {
    return (*(uint8_t*)((uintptr_t)this + 0x3cb + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_General_Disappears::BP_StateTransition_General_Disappears_C::set_TutorialFinished(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3cb + 0);
    *(uint8_t*)((uintptr_t)this + 0x3cb + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_General_Disappears::BP_StateTransition_General_Disappears_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/WorldMap/BP/StateTransition/BP_StateTransition_General_Disappears.BP_StateTransition_General_Disappears_C");
    return result;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_General_Disappears::BP_StateTransition_General_Disappears_C::CheckIfLocked() {
    return;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_General_Disappears::BP_StateTransition_General_Disappears_C::SetColors() {
    return;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_General_Disappears::BP_StateTransition_General_Disappears_C::UserConstructionScript0() {
    return;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_General_Disappears::BP_StateTransition_General_Disappears_C::ReceiveMapSectionExplored(_Script_RsGameTechRT::RsMapSectionTag& MapSection) {
    return;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_General_Disappears::BP_StateTransition_General_Disappears_C::SetVisible() {
    return;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_General_Disappears::BP_StateTransition_General_Disappears_C::ReceiveStateChanged(int32_t State) {
    return;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_General_Disappears::BP_StateTransition_General_Disappears_C::ReceiveBeginPlay() {
    return;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_General_Disappears::BP_StateTransition_General_Disappears_C::ExecuteUbergraph_BP_StateTransition_General_Disappears(int32_t EntryPoint) {
    return;
}
