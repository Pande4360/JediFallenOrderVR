#include "..\FUObjectArray.hpp"
#include "BPFX_Damage_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\PostProcessComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
void* _Game_Effects_Blueprints_BPFX_Damage::BPFX_Damage_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x360);
}
_Script_Engine::PostProcessComponent*& _Game_Effects_Blueprints_BPFX_Damage::BPFX_Damage_C::get_DamageFXPostProcess() {
    return *(_Script_Engine::PostProcessComponent**)((uintptr_t)this + 0x368);
}
_Script_Engine::SceneComponent*& _Game_Effects_Blueprints_BPFX_Damage::BPFX_Damage_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x370);
}
float& _Game_Effects_Blueprints_BPFX_Damage::BPFX_Damage_C::get_Timeline_0_NewTrack_0_F0A91F2C4BAED3A8C108AAAFD95B908B() {
    return *(float*)((uintptr_t)this + 0x378);
}
_Script_Engine::TimelineComponent*& _Game_Effects_Blueprints_BPFX_Damage::BPFX_Damage_C::get_Timeline_0() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x380);
}
void* _Game_Effects_Blueprints_BPFX_Damage::BPFX_Damage_C::get_Timeline_0__Direction_F0A91F2C4BAED3A8C108AAAFD95B908B() {
    return (void*)((uintptr_t)this + 0x37c);
}
float& _Game_Effects_Blueprints_BPFX_Damage::BPFX_Damage_C::get_Blend() {
    return *(float*)((uintptr_t)this + 0x388);
}
int32_t& _Game_Effects_Blueprints_BPFX_Damage::BPFX_Damage_C::get_DamageTimelineCount() {
    return *(int32_t*)((uintptr_t)this + 0x38c);
}
_Script_CoreUObject::Class* _Game_Effects_Blueprints_BPFX_Damage::BPFX_Damage_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Effects/Blueprints/BPFX_Damage.BPFX_Damage_C");
    return result;
}
void _Game_Effects_Blueprints_BPFX_Damage::BPFX_Damage_C::UserConstructionScript0() {
    return;
}
void _Game_Effects_Blueprints_BPFX_Damage::BPFX_Damage_C::Timeline_0__FinishedFunc() {
    return;
}
void _Game_Effects_Blueprints_BPFX_Damage::BPFX_Damage_C::Timeline_0__UpdateFunc() {
    return;
}
void _Game_Effects_Blueprints_BPFX_Damage::BPFX_Damage_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Effects_Blueprints_BPFX_Damage::BPFX_Damage_C::PauseMenuToggled(bool PauseMenuOpened) {
    return;
}
void _Game_Effects_Blueprints_BPFX_Damage::BPFX_Damage_C::TakeDamage(float NewBlend) {
    return;
}
void _Game_Effects_Blueprints_BPFX_Damage::BPFX_Damage_C::ExecuteUbergraph_BPFX_Damage(int32_t EntryPoint) {
    return;
}
