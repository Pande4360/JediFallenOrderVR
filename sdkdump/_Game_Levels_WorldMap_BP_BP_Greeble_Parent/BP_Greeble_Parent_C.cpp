#include "..\FUObjectArray.hpp"
#include "BP_Greeble_Parent_C.hpp"
#include "..\_Game_Levels_WorldMap_BP_BP_WorldMapHologram\BP_WorldMapHologram_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BillboardComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_RsGameTechRT\RsWorldMapActor.hpp"
_Script_Engine::SceneComponent*& _Game_Levels_WorldMap_BP_BP_Greeble_Parent::BP_Greeble_Parent_C::get_Scene() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x378);
}
void* _Game_Levels_WorldMap_BP_BP_Greeble_Parent::BP_Greeble_Parent_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x368);
}
_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& _Game_Levels_WorldMap_BP_BP_Greeble_Parent::BP_Greeble_Parent_C::get_WorldMapHologram_Ref() {
    return *(_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C**)((uintptr_t)this + 0x388);
}
_Script_Engine::BillboardComponent*& _Game_Levels_WorldMap_BP_BP_Greeble_Parent::BP_Greeble_Parent_C::get_EditorOnly() {
    return *(_Script_Engine::BillboardComponent**)((uintptr_t)this + 0x370);
}
bool _Game_Levels_WorldMap_BP_BP_Greeble_Parent::BP_Greeble_Parent_C::get_AlwaysVisible_() {
    return (*(uint8_t*)((uintptr_t)this + 0x380 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_BP_Greeble_Parent::BP_Greeble_Parent_C::set_AlwaysVisible_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x380 + 0);
    *(uint8_t*)((uintptr_t)this + 0x380 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Levels_WorldMap_BP_BP_Greeble_Parent::BP_Greeble_Parent_C::get_WidgetType() {
    return (void*)((uintptr_t)this + 0x381);
}
void* _Game_Levels_WorldMap_BP_BP_Greeble_Parent::BP_Greeble_Parent_C::get_Planet() {
    return (void*)((uintptr_t)this + 0x390);
}
_Script_CoreUObject::Class* _Game_Levels_WorldMap_BP_BP_Greeble_Parent::BP_Greeble_Parent_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/WorldMap/BP/BP_Greeble_Parent.BP_Greeble_Parent_C");
    return result;
}
void _Game_Levels_WorldMap_BP_BP_Greeble_Parent::BP_Greeble_Parent_C::UserConstructionScript() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_Greeble_Parent::BP_Greeble_Parent_C::ReceiveBeginPlay() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_Greeble_Parent::BP_Greeble_Parent_C::SetVisible0() {
    return;
}
void _Game_Levels_WorldMap_BP_BP_Greeble_Parent::BP_Greeble_Parent_C::ExecuteUbergraph_BP_Greeble_Parent(int32_t EntryPoint) {
    return;
}
