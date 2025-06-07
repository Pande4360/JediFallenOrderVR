#include "..\FUObjectArray.hpp"
#include "BP_KillPlaneNEW_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_RsTechRT\RsVolumeBlueprintBase.hpp"
void* _Game_zDoNotShip_WorldInteracts_Hazards_BP_KillPlaneNEW::BP_KillPlaneNEW_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x398);
}
_Script_CoreUObject::Class* _Game_zDoNotShip_WorldInteracts_Hazards_BP_KillPlaneNEW::BP_KillPlaneNEW_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/zDoNotShip/WorldInteracts/Hazards/BP_KillPlaneNEW.BP_KillPlaneNEW_C");
    return result;
}
bool _Game_zDoNotShip_WorldInteracts_Hazards_BP_KillPlaneNEW::BP_KillPlaneNEW_C::get_Enabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x3a0 + 0)) & 1 != 0;
}
void _Game_zDoNotShip_WorldInteracts_Hazards_BP_KillPlaneNEW::BP_KillPlaneNEW_C::set_Enabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3a0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3a0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_zDoNotShip_WorldInteracts_Hazards_BP_KillPlaneNEW::BP_KillPlaneNEW_C::get_DelayTime() {
    return *(float*)((uintptr_t)this + 0x3a4);
}
bool _Game_zDoNotShip_WorldInteracts_Hazards_BP_KillPlaneNEW::BP_KillPlaneNEW_C::get_bAIOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0x3a8 + 0)) & 1 != 0;
}
void _Game_zDoNotShip_WorldInteracts_Hazards_BP_KillPlaneNEW::BP_KillPlaneNEW_C::set_bAIOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3a8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::Actor*& _Game_zDoNotShip_WorldInteracts_Hazards_BP_KillPlaneNEW::BP_KillPlaneNEW_C::get_Actor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x3b0);
}
void _Game_zDoNotShip_WorldInteracts_Hazards_BP_KillPlaneNEW::BP_KillPlaneNEW_C::LVL_Disable() {
    return;
}
void _Game_zDoNotShip_WorldInteracts_Hazards_BP_KillPlaneNEW::BP_KillPlaneNEW_C::LVL_Enable() {
    return;
}
void _Game_zDoNotShip_WorldInteracts_Hazards_BP_KillPlaneNEW::BP_KillPlaneNEW_C::UserConstructionScript() {
    return;
}
void _Game_zDoNotShip_WorldInteracts_Hazards_BP_KillPlaneNEW::BP_KillPlaneNEW_C::ReceiveActorBeginOverlap(_Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_zDoNotShip_WorldInteracts_Hazards_BP_KillPlaneNEW::BP_KillPlaneNEW_C::ReceiveBeginPlay() {
    return;
}
void _Game_zDoNotShip_WorldInteracts_Hazards_BP_KillPlaneNEW::BP_KillPlaneNEW_C::LVL_DoHeroDeath() {
    return;
}
void _Game_zDoNotShip_WorldInteracts_Hazards_BP_KillPlaneNEW::BP_KillPlaneNEW_C::ExecuteUbergraph_BP_KillPlaneNEW(int32_t EntryPoint) {
    return;
}
