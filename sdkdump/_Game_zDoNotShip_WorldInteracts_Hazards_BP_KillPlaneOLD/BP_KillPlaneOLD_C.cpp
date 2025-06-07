#include "..\FUObjectArray.hpp"
#include "BP_KillPlaneOLD_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BoxComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
bool _Game_zDoNotShip_WorldInteracts_Hazards_BP_KillPlaneOLD::BP_KillPlaneOLD_C::get_bAIOnly() {
    return (*(uint8_t*)((uintptr_t)this + 0x379 + 0)) & 1 != 0;
}
bool _Game_zDoNotShip_WorldInteracts_Hazards_BP_KillPlaneOLD::BP_KillPlaneOLD_C::get_Enabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x378 + 0)) & 1 != 0;
}
_Script_Engine::StaticMeshComponent*& _Game_zDoNotShip_WorldInteracts_Hazards_BP_KillPlaneOLD::BP_KillPlaneOLD_C::get_Cube() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x370);
}
_Script_Engine::BoxComponent*& _Game_zDoNotShip_WorldInteracts_Hazards_BP_KillPlaneOLD::BP_KillPlaneOLD_C::get_Box() {
    return *(_Script_Engine::BoxComponent**)((uintptr_t)this + 0x368);
}
void* _Game_zDoNotShip_WorldInteracts_Hazards_BP_KillPlaneOLD::BP_KillPlaneOLD_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x360);
}
void _Game_zDoNotShip_WorldInteracts_Hazards_BP_KillPlaneOLD::BP_KillPlaneOLD_C::set_Enabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x378 + 0);
    *(uint8_t*)((uintptr_t)this + 0x378 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_zDoNotShip_WorldInteracts_Hazards_BP_KillPlaneOLD::BP_KillPlaneOLD_C::set_bAIOnly(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x379 + 0);
    *(uint8_t*)((uintptr_t)this + 0x379 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_zDoNotShip_WorldInteracts_Hazards_BP_KillPlaneOLD::BP_KillPlaneOLD_C::get_bFullDeath() {
    return (*(uint8_t*)((uintptr_t)this + 0x37a + 0)) & 1 != 0;
}
void _Game_zDoNotShip_WorldInteracts_Hazards_BP_KillPlaneOLD::BP_KillPlaneOLD_C::set_bFullDeath(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x37a + 0);
    *(uint8_t*)((uintptr_t)this + 0x37a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_RsGameTechRT::RsCharacter*& _Game_zDoNotShip_WorldInteracts_Hazards_BP_KillPlaneOLD::BP_KillPlaneOLD_C::get_damageActor() {
    return *(_Script_RsGameTechRT::RsCharacter**)((uintptr_t)this + 0x380);
}
_Script_Engine::Actor*& _Game_zDoNotShip_WorldInteracts_Hazards_BP_KillPlaneOLD::BP_KillPlaneOLD_C::get_Actor() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x388);
}
_Script_CoreUObject::Class* _Game_zDoNotShip_WorldInteracts_Hazards_BP_KillPlaneOLD::BP_KillPlaneOLD_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/zDoNotShip/WorldInteracts/Hazards/BP_KillPlaneOLD.BP_KillPlaneOLD_C");
    return result;
}
void _Game_zDoNotShip_WorldInteracts_Hazards_BP_KillPlaneOLD::BP_KillPlaneOLD_C::LVL_Disable() {
    return;
}
void _Game_zDoNotShip_WorldInteracts_Hazards_BP_KillPlaneOLD::BP_KillPlaneOLD_C::LVL_Enable() {
    return;
}
void _Game_zDoNotShip_WorldInteracts_Hazards_BP_KillPlaneOLD::BP_KillPlaneOLD_C::UserConstructionScript0() {
    return;
}
void _Game_zDoNotShip_WorldInteracts_Hazards_BP_KillPlaneOLD::BP_KillPlaneOLD_C::ReceiveActorBeginOverlap0(_Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_zDoNotShip_WorldInteracts_Hazards_BP_KillPlaneOLD::BP_KillPlaneOLD_C::LoadZoneShow(bool Show_) {
    return;
}
void _Game_zDoNotShip_WorldInteracts_Hazards_BP_KillPlaneOLD::BP_KillPlaneOLD_C::ReceiveBeginPlay0() {
    return;
}
void _Game_zDoNotShip_WorldInteracts_Hazards_BP_KillPlaneOLD::BP_KillPlaneOLD_C::ExecuteUbergraph_BP_KillPlaneOLD(int32_t EntryPoint) {
    return;
}
