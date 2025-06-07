#include "..\FUObjectArray.hpp"
#include "..\_Game_Levels_WorldMap_BP_BP_WorldMapHologram\BP_WorldMapHologram_C.hpp"
#include "BP_Gateway_OneWay_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_RsGameTechRT\RsWorldMapGatewayActor.hpp"
_Script_CoreUObject::Class* _Game_Levels_WorldMap_BP_GatewayActor_BP_Gateway_OneWay::BP_Gateway_OneWay_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Levels/WorldMap/BP/GatewayActor/BP_Gateway_OneWay.BP_Gateway_OneWay_C");
    return result;
}
void* _Game_Levels_WorldMap_BP_GatewayActor_BP_Gateway_OneWay::BP_Gateway_OneWay_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x390);
}
void _Game_Levels_WorldMap_BP_GatewayActor_BP_Gateway_OneWay::BP_Gateway_OneWay_C::set_SingleConnection_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3a4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3a4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& _Game_Levels_WorldMap_BP_GatewayActor_BP_Gateway_OneWay::BP_Gateway_OneWay_C::get_WorldMapHologram_Ref() {
    return *(_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C**)((uintptr_t)this + 0x398);
}
void _Game_Levels_WorldMap_BP_GatewayActor_BP_Gateway_OneWay::BP_Gateway_OneWay_C::UserConstructionScript() {
    return;
}
int32_t& _Game_Levels_WorldMap_BP_GatewayActor_BP_Gateway_OneWay::BP_Gateway_OneWay_C::get_IsConnectedToCurrentRegion() {
    return *(int32_t*)((uintptr_t)this + 0x3a0);
}
bool _Game_Levels_WorldMap_BP_GatewayActor_BP_Gateway_OneWay::BP_Gateway_OneWay_C::get_SingleConnection_() {
    return (*(uint8_t*)((uintptr_t)this + 0x3a4 + 0)) & 1 != 0;
}
void _Game_Levels_WorldMap_BP_GatewayActor_BP_Gateway_OneWay::BP_Gateway_OneWay_C::CheckIfBothSectionsAreExplored(bool& SectionsExplored) {
    return;
}
void _Game_Levels_WorldMap_BP_GatewayActor_BP_Gateway_OneWay::BP_Gateway_OneWay_C::SetVisible() {
    return;
}
void _Game_Levels_WorldMap_BP_GatewayActor_BP_Gateway_OneWay::BP_Gateway_OneWay_C::ReceiveBeginPlay() {
    return;
}
void _Game_Levels_WorldMap_BP_GatewayActor_BP_Gateway_OneWay::BP_Gateway_OneWay_C::ExecuteUbergraph_BP_Gateway_OneWay(int32_t EntryPoint) {
    return;
}
