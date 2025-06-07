#include "..\FUObjectArray.hpp"
#include "..\_Game_Levels_WorldMap_BP_BP_WorldMapHologram\BP_WorldMapHologram_C.hpp"
#include "..\_Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_Parent\BP_StateTransition_Parent_C.hpp"
#include "BP_StateTransition_ShortcutRope_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsMapSectionTag.hpp"
#include "..\_Script_RsGameTechRT\RsWorldMapStaticMeshComponent.hpp"
void* _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_ShortcutRope::BP_StateTransition_ShortcutRope_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x3a8);
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_ShortcutRope::BP_StateTransition_ShortcutRope_C::set_State_Changed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_RsGameTechRT::RsWorldMapStaticMeshComponent*& _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_ShortcutRope::BP_StateTransition_ShortcutRope_C::get_Shortcut_Rope() {
    return *(_Script_RsGameTechRT::RsWorldMapStaticMeshComponent**)((uintptr_t)this + 0x3b0);
}
_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_ShortcutRope::BP_StateTransition_ShortcutRope_C::get_WorldMapHologram_Ref() {
    return *(_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C**)((uintptr_t)this + 0x3c8);
}
_Script_RsGameTechRT::RsWorldMapStaticMeshComponent*& _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_ShortcutRope::BP_StateTransition_ShortcutRope_C::get_Shortcut_Base() {
    return *(_Script_RsGameTechRT::RsWorldMapStaticMeshComponent**)((uintptr_t)this + 0x3b8);
}
bool _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_ShortcutRope::BP_StateTransition_ShortcutRope_C::get_State_Changed() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c0 + 0)) & 1 != 0;
}
bool _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_ShortcutRope::BP_StateTransition_ShortcutRope_C::get_AllSectionsExplored() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c1 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_ShortcutRope::BP_StateTransition_ShortcutRope_C::set_AllSectionsExplored(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_ShortcutRope::BP_StateTransition_ShortcutRope_C::get_SectionsExplored() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d0 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_ShortcutRope::BP_StateTransition_ShortcutRope_C::set_SectionsExplored(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_ShortcutRope::BP_StateTransition_ShortcutRope_C::get_StartsActivated_() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d1 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_ShortcutRope::BP_StateTransition_ShortcutRope_C::set_StartsActivated_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_ShortcutRope::BP_StateTransition_ShortcutRope_C::get_ForceAbility() {
    return (void*)((uintptr_t)this + 0x3d2);
}
_Script_CoreUObject::Class* _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_ShortcutRope::BP_StateTransition_ShortcutRope_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/WorldMap/BP/StateTransition/BP_StateTransition_ShortcutRope.BP_StateTransition_ShortcutRope_C");
    return result;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_ShortcutRope::BP_StateTransition_ShortcutRope_C::SetColors() {
    return;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_ShortcutRope::BP_StateTransition_ShortcutRope_C::UserConstructionScript0() {
    return;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_ShortcutRope::BP_StateTransition_ShortcutRope_C::ReceiveMapSectionExplored(_Script_RsGameTechRT::RsMapSectionTag& MapSection) {
    return;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_ShortcutRope::BP_StateTransition_ShortcutRope_C::SetVisible() {
    return;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_ShortcutRope::BP_StateTransition_ShortcutRope_C::ReceiveStateChanged(int32_t State) {
    return;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_ShortcutRope::BP_StateTransition_ShortcutRope_C::ReceiveBeginPlay() {
    return;
}
void _Game_Levels_WorldMap_BP_StateTransition_BP_StateTransition_ShortcutRope::BP_StateTransition_ShortcutRope_C::ExecuteUbergraph_BP_StateTransition_ShortcutRope(int32_t EntryPoint) {
    return;
}
