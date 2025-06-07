#include "..\FUObjectArray.hpp"
#include "BPFX_Shock_C.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
void* _Game_Effects_Blueprints_BPFX_Shock::BPFX_Shock_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x360);
}
_Script_Engine::ParticleSystemComponent*& _Game_Effects_Blueprints_BPFX_Shock::BPFX_Shock_C::get_ShockEffect() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x370);
}
_Script_Engine::SceneComponent*& _Game_Effects_Blueprints_BPFX_Shock::BPFX_Shock_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x368);
}
void* _Game_Effects_Blueprints_BPFX_Shock::BPFX_Shock_C::get_Shock_Color() {
    return (void*)((uintptr_t)this + 0x378);
}
_Script_AkAudio::AkAudioEvent*& _Game_Effects_Blueprints_BPFX_Shock::BPFX_Shock_C::get_SFX() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x388);
}
_Script_CoreUObject::Class* _Game_Effects_Blueprints_BPFX_Shock::BPFX_Shock_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Effects/Blueprints/BPFX_Shock.BPFX_Shock_C");
    return result;
}
void _Game_Effects_Blueprints_BPFX_Shock::BPFX_Shock_C::UserConstructionScript0() {
    return;
}
void _Game_Effects_Blueprints_BPFX_Shock::BPFX_Shock_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Effects_Blueprints_BPFX_Shock::BPFX_Shock_C::ReceiveTick0(float DeltaSeconds) {
    return;
}
void _Game_Effects_Blueprints_BPFX_Shock::BPFX_Shock_C::ParticleSystemFinished(_Script_Engine::ParticleSystemComponent* PSystem) {
    return;
}
void _Game_Effects_Blueprints_BPFX_Shock::BPFX_Shock_C::ExecuteUbergraph_BPFX_Shock(int32_t EntryPoint) {
    return;
}
