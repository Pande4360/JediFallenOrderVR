#include "..\FUObjectArray.hpp"
#include "BPC_FlameTrooper_FireFXHelper_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
void* _Game_Characters_FlameTrooper_Logic_BPC_FlameTrooper_FireFXHelper::BPC_FlameTrooper_FireFXHelper_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x170);
}
_Script_Engine::ParticleSystemComponent*& _Game_Characters_FlameTrooper_Logic_BPC_FlameTrooper_FireFXHelper::BPC_FlameTrooper_FireFXHelper_C::get_ParticleEmitterReference() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x178);
}
_Script_CoreUObject::Class* _Game_Characters_FlameTrooper_Logic_BPC_FlameTrooper_FireFXHelper::BPC_FlameTrooper_FireFXHelper_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/FlameTrooper/Logic/BPC_FlameTrooper_FireFXHelper.BPC_FlameTrooper_FireFXHelper_C");
    return result;
}
void _Game_Characters_FlameTrooper_Logic_BPC_FlameTrooper_FireFXHelper::BPC_FlameTrooper_FireFXHelper_C::set_PendingKill(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x180 + 0);
    *(uint8_t*)((uintptr_t)this + 0x180 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_FlameTrooper_Logic_BPC_FlameTrooper_FireFXHelper::BPC_FlameTrooper_FireFXHelper_C::get_PendingKill() {
    return (*(uint8_t*)((uintptr_t)this + 0x180 + 0)) & 1 != 0;
}
float& _Game_Characters_FlameTrooper_Logic_BPC_FlameTrooper_FireFXHelper::BPC_FlameTrooper_FireFXHelper_C::get_FireLifetime() {
    return *(float*)((uintptr_t)this + 0x184);
}
void _Game_Characters_FlameTrooper_Logic_BPC_FlameTrooper_FireFXHelper::BPC_FlameTrooper_FireFXHelper_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Characters_FlameTrooper_Logic_BPC_FlameTrooper_FireFXHelper::BPC_FlameTrooper_FireFXHelper_C::Refresh() {
    return;
}
void _Game_Characters_FlameTrooper_Logic_BPC_FlameTrooper_FireFXHelper::BPC_FlameTrooper_FireFXHelper_C::Disappear() {
    return;
}
void _Game_Characters_FlameTrooper_Logic_BPC_FlameTrooper_FireFXHelper::BPC_FlameTrooper_FireFXHelper_C::DestroySelf() {
    return;
}
void _Game_Characters_FlameTrooper_Logic_BPC_FlameTrooper_FireFXHelper::BPC_FlameTrooper_FireFXHelper_C::ExecuteUbergraph_BPC_FlameTrooper_FireFXHelper(int32_t EntryPoint) {
    return;
}
