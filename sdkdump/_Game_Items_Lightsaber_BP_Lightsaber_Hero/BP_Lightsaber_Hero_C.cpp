#include "..\FUObjectArray.hpp"
#include "..\_Game_Items_Lightsaber_BP_Lightsaber\BP_Lightsaber_C.hpp"
#include "BP_Lightsaber_Hero_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\StaticMesh.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
void _Game_Items_Lightsaber_BP_Lightsaber_Hero::BP_Lightsaber_Hero_C::SetAsSaber(bool isSecondBlade) {
    return;
}
void* _Game_Items_Lightsaber_BP_Lightsaber_Hero::BP_Lightsaber_Hero_C::get_CereSleeveSoftRef() {
    return (void*)((uintptr_t)this + 0x630);
}
void* _Game_Items_Lightsaber_BP_Lightsaber_Hero::BP_Lightsaber_Hero_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x5d8);
}
_Script_Engine::StaticMeshComponent*& _Game_Items_Lightsaber_BP_Lightsaber_Hero::BP_Lightsaber_Hero_C::get_ExtraHilt() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x5e0);
}
_Script_Engine::StaticMeshComponent*& _Game_Items_Lightsaber_BP_Lightsaber_Hero::BP_Lightsaber_Hero_C::get_Sleeve() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x5e8);
}
void* _Game_Items_Lightsaber_BP_Lightsaber_Hero::BP_Lightsaber_Hero_C::get_CereSwitchSoftRef() {
    return (void*)((uintptr_t)this + 0x608);
}
_Script_Engine::StaticMeshComponent*& _Game_Items_Lightsaber_BP_Lightsaber_Hero::BP_Lightsaber_Hero_C::get_Switch() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x5f0);
}
_Script_Engine::StaticMeshComponent*& _Game_Items_Lightsaber_BP_Lightsaber_Hero::BP_Lightsaber_Hero_C::get_Emitter() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x5f8);
}
_Script_Engine::SceneComponent*& _Game_Items_Lightsaber_BP_Lightsaber_Hero::BP_Lightsaber_Hero_C::get_HeroHiltRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x600);
}
_Script_CoreUObject::Class* _Game_Items_Lightsaber_BP_Lightsaber_Hero::BP_Lightsaber_Hero_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Items/Lightsaber/BP_Lightsaber_Hero.BP_Lightsaber_Hero_C");
    return result;
}
void _Game_Items_Lightsaber_BP_Lightsaber_Hero::BP_Lightsaber_Hero_C::GetExtraTwinHilt(_Script_Engine::StaticMeshComponent*& Mesh) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber_Hero::BP_Lightsaber_Hero_C::GetAndSetUpEndCap(_Script_Engine::StaticMeshComponent*& EndCap) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber_Hero::BP_Lightsaber_Hero_C::GetEmitter(_Script_Engine::StaticMeshComponent*& Emitter) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber_Hero::BP_Lightsaber_Hero_C::ResetBladeTransform() {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber_Hero::BP_Lightsaber_Hero_C::GetSwitch(_Script_Engine::StaticMeshComponent*& Switch) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber_Hero::BP_Lightsaber_Hero_C::GetSleeve(_Script_Engine::StaticMeshComponent*& Sleeve) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber_Hero::BP_Lightsaber_Hero_C::UserConstructionScript() {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber_Hero::BP_Lightsaber_Hero_C::ReceiveBeginPlay() {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber_Hero::BP_Lightsaber_Hero_C::UpdateSaberHiltVisibility(bool IsVisible) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber_Hero::BP_Lightsaber_Hero_C::SetLightsaberColor(_Script_CoreUObject::LinearColor NewBladeColor, _Script_CoreUObject::LinearColor NewBladeGlowColor) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber_Hero::BP_Lightsaber_Hero_C::SetYoungCalSaber(_Script_Engine::StaticMesh* Mesh) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber_Hero::BP_Lightsaber_Hero_C::SetSaberIndigo(bool IsIndigo) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber_Hero::BP_Lightsaber_Hero_C::SetBladeOffset(float Offset) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber_Hero::BP_Lightsaber_Hero_C::SetAsTwinCal() {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber_Hero::BP_Lightsaber_Hero_C::SetAsCere() {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber_Hero::BP_Lightsaber_Hero_C::BladeExtended_Event0(void* Lightsaber) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber_Hero::BP_Lightsaber_Hero_C::BladeRetracted_Event0(void* Lightsaber) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber_Hero::BP_Lightsaber_Hero_C::ChangeLightsaberColor0(_Script_CoreUObject::LinearColor New_Blade_Color, _Script_CoreUObject::LinearColor New_Blade_Glow_Color) {
    return;
}
void _Game_Items_Lightsaber_BP_Lightsaber_Hero::BP_Lightsaber_Hero_C::ExecuteUbergraph_BP_Lightsaber_Hero(int32_t EntryPoint) {
    return;
}
