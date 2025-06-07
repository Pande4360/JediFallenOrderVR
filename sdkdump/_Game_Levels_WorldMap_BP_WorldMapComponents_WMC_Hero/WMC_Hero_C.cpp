#include "..\FUObjectArray.hpp"
#include "..\_Game_Levels_WorldMap_BP_BP_WorldMapHologram\BP_WorldMapHologram_C.hpp"
#include "WMC_Hero_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_RsGameTechRT\RsAIGameStateManager.hpp"
void* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Hero::WMC_Hero_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x170);
}
_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Hero::WMC_Hero_C::get_WorldMapHologram_Ref() {
    return *(_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C**)((uintptr_t)this + 0x178);
}
_Script_CoreUObject::Class* _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Hero::WMC_Hero_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/WorldMap/BP/WorldMapComponents/WMC_Hero.WMC_Hero_C");
    return result;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Hero::WMC_Hero_C::ExecuteUbergraph_WMC_Hero(int32_t EntryPoint) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Hero::WMC_Hero_C::OnHeroTookDamage(float Health) {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Hero::WMC_Hero_C::ResetColors() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Hero::WMC_Hero_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Levels_WorldMap_BP_WorldMapComponents_WMC_Hero::WMC_Hero_C::OnGameStateChanged(_Script_RsGameTechRT::RsAIGameStateManager* GameStateManager, void* Previous_State, void* New_State) {
    return;
}
