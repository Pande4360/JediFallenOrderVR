#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_Hero\BP_Hero_C.hpp"
#include "Zone_Flashlight_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\BillboardComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\SkyLight.hpp"
#include "..\_Script_Engine\TriggerBox.hpp"
#include "..\_Script_Engine\TriggerSphere.hpp"
#include "..\_Script_Engine\TriggerVolume.hpp"
_Script_Engine::BillboardComponent*& _Game_WorldInteracts_EventZones_Zone_Flashlight::Zone_Flashlight_C::get_Flashlight_icon() {
    return *(_Script_Engine::BillboardComponent**)((uintptr_t)this + 0x368);
}
void* _Game_WorldInteracts_EventZones_Zone_Flashlight::Zone_Flashlight_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x360);
}
_Script_Engine::SkyLight*& _Game_WorldInteracts_EventZones_Zone_Flashlight::Zone_Flashlight_C::get_SkyLight() {
    return *(_Script_Engine::SkyLight**)((uintptr_t)this + 0x380);
}
bool _Game_WorldInteracts_EventZones_Zone_Flashlight::Zone_Flashlight_C::get_Enabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x378 + 0)) & 1 != 0;
}
_Script_Engine::SceneComponent*& _Game_WorldInteracts_EventZones_Zone_Flashlight::Zone_Flashlight_C::get_Scene() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x370);
}
void _Game_WorldInteracts_EventZones_Zone_Flashlight::Zone_Flashlight_C::set_Enabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x378 + 0);
    *(uint8_t*)((uintptr_t)this + 0x378 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_WorldInteracts_EventZones_Zone_Flashlight::Zone_Flashlight_C::get_LVL_entered() {
    return (void*)((uintptr_t)this + 0x388);
}
void* _Game_WorldInteracts_EventZones_Zone_Flashlight::Zone_Flashlight_C::get_LVL_exited() {
    return (void*)((uintptr_t)this + 0x398);
}
_Script_Engine::TriggerVolume*& _Game_WorldInteracts_EventZones_Zone_Flashlight::Zone_Flashlight_C::get_TriggerVolume() {
    return *(_Script_Engine::TriggerVolume**)((uintptr_t)this + 0x3a8);
}
void* _Game_WorldInteracts_EventZones_Zone_Flashlight::Zone_Flashlight_C::get_LVL_turnOff() {
    return (void*)((uintptr_t)this + 0x3b0);
}
void* _Game_WorldInteracts_EventZones_Zone_Flashlight::Zone_Flashlight_C::get_LVL_turnOn() {
    return (void*)((uintptr_t)this + 0x3c0);
}
void _Game_WorldInteracts_EventZones_Zone_Flashlight::Zone_Flashlight_C::FlashlightVolEnter(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
_Script_Engine::TriggerBox*& _Game_WorldInteracts_EventZones_Zone_Flashlight::Zone_Flashlight_C::get_TriggerBox() {
    return *(_Script_Engine::TriggerBox**)((uintptr_t)this + 0x3d0);
}
_Script_Engine::TriggerSphere*& _Game_WorldInteracts_EventZones_Zone_Flashlight::Zone_Flashlight_C::get_TriggerSphere() {
    return *(_Script_Engine::TriggerSphere**)((uintptr_t)this + 0x3d8);
}
_Script_CoreUObject::Class* _Game_WorldInteracts_EventZones_Zone_Flashlight::Zone_Flashlight_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/WorldInteracts/EventZones/Zone_Flashlight.Zone_Flashlight_C");
    return result;
}
void _Game_WorldInteracts_EventZones_Zone_Flashlight::Zone_Flashlight_C::UserConstructionScript0() {
    return;
}
void _Game_WorldInteracts_EventZones_Zone_Flashlight::Zone_Flashlight_C::ReceiveBeginPlay0() {
    return;
}
void _Game_WorldInteracts_EventZones_Zone_Flashlight::Zone_Flashlight_C::FlashlightVolExit(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_WorldInteracts_EventZones_Zone_Flashlight::Zone_Flashlight_C::LVL_turnOn_Event() {
    return;
}
void _Game_WorldInteracts_EventZones_Zone_Flashlight::Zone_Flashlight_C::LVL_turnOff_Event() {
    return;
}
void _Game_WorldInteracts_EventZones_Zone_Flashlight::Zone_Flashlight_C::LVL_entered__DelegateSignature(_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C* Hero) {
    return;
}
void _Game_WorldInteracts_EventZones_Zone_Flashlight::Zone_Flashlight_C::ToggleCollisionEnabled(bool Enabled) {
    return;
}
void _Game_WorldInteracts_EventZones_Zone_Flashlight::Zone_Flashlight_C::SetTriggerEventBindings(_Script_Engine::Actor* Trigger) {
    return;
}
void _Game_WorldInteracts_EventZones_Zone_Flashlight::Zone_Flashlight_C::ExecuteUbergraph_Zone_Flashlight(int32_t EntryPoint) {
    return;
}
void _Game_WorldInteracts_EventZones_Zone_Flashlight::Zone_Flashlight_C::LVL_turnOn__DelegateSignature() {
    return;
}
void _Game_WorldInteracts_EventZones_Zone_Flashlight::Zone_Flashlight_C::LVL_turnOff__DelegateSignature() {
    return;
}
void _Game_WorldInteracts_EventZones_Zone_Flashlight::Zone_Flashlight_C::LVL_exited__DelegateSignature(_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C* Hero) {
    return;
}
