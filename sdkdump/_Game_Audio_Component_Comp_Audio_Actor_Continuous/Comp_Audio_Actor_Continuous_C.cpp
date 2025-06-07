#include "..\FUObjectArray.hpp"
#include "Comp_Audio_Actor_Continuous_C.hpp"
#include "..\_Game_Audio_Component_Comp_SW_Amb_Overlap\Comp_SW_Amb_Overlap_C.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
void _Game_Audio_Component_Comp_Audio_Actor_Continuous::Comp_Audio_Actor_Continuous_C::set_IsManualBeginPlay(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x335 + 0);
    *(uint8_t*)((uintptr_t)this + 0x335 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Audio_Component_Comp_Audio_Actor_Continuous::Comp_Audio_Actor_Continuous_C::get_UberGraphFrame0() {
    return (void*)((uintptr_t)this + 0x320);
}
_Script_AkAudio::AkAudioEvent*& _Game_Audio_Component_Comp_Audio_Actor_Continuous::Comp_Audio_Actor_Continuous_C::get_Sound_Start() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x328);
}
int32_t& _Game_Audio_Component_Comp_Audio_Actor_Continuous::Comp_Audio_Actor_Continuous_C::get_Fade_Out_Sound_Duration__ms__On_Destroy() {
    return *(int32_t*)((uintptr_t)this + 0x330);
}
bool _Game_Audio_Component_Comp_Audio_Actor_Continuous::Comp_Audio_Actor_Continuous_C::get_IsManualBeginPlay() {
    return (*(uint8_t*)((uintptr_t)this + 0x335 + 0)) & 1 != 0;
}
bool _Game_Audio_Component_Comp_Audio_Actor_Continuous::Comp_Audio_Actor_Continuous_C::get_OcclusionEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x334 + 0)) & 1 != 0;
}
void _Game_Audio_Component_Comp_Audio_Actor_Continuous::Comp_Audio_Actor_Continuous_C::set_OcclusionEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x334 + 0);
    *(uint8_t*)((uintptr_t)this + 0x334 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Audio_Component_Comp_Audio_Actor_Continuous::Comp_Audio_Actor_Continuous_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Audio/Component/Comp_Audio_Actor_Continuous.Comp_Audio_Actor_Continuous_C");
    return result;
}
void _Game_Audio_Component_Comp_Audio_Actor_Continuous::Comp_Audio_Actor_Continuous_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Audio_Component_Comp_Audio_Actor_Continuous::Comp_Audio_Actor_Continuous_C::Death(_Script_Engine::Actor* DeadActor) {
    return;
}
void _Game_Audio_Component_Comp_Audio_Actor_Continuous::Comp_Audio_Actor_Continuous_C::Manual_Stop() {
    return;
}
void _Game_Audio_Component_Comp_Audio_Actor_Continuous::Comp_Audio_Actor_Continuous_C::Manual_Start() {
    return;
}
void _Game_Audio_Component_Comp_Audio_Actor_Continuous::Comp_Audio_Actor_Continuous_C::OnDestroyed_Event_0(_Script_Engine::Actor* DestroyedActor) {
    return;
}
void _Game_Audio_Component_Comp_Audio_Actor_Continuous::Comp_Audio_Actor_Continuous_C::OnOverlapHeroBegin_Event_0() {
    return;
}
void _Game_Audio_Component_Comp_Audio_Actor_Continuous::Comp_Audio_Actor_Continuous_C::CustomEvent_00() {
    return;
}
void _Game_Audio_Component_Comp_Audio_Actor_Continuous::Comp_Audio_Actor_Continuous_C::ExecuteUbergraph_Comp_Audio_Actor_Continuous(int32_t EntryPoint) {
    return;
}
