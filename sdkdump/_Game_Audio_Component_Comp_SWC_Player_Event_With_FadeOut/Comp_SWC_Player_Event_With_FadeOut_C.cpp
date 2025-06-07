#include "..\FUObjectArray.hpp"
#include "Comp_SWC_Player_Event_With_FadeOut_C.hpp"
#include "..\_Game_Audio_Component_Comp_Volume_Amb_Overlap_Parent\Comp_Volume_Amb_Overlap_Parent_C.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
bool _Game_Audio_Component_Comp_SWC_Player_Event_With_FadeOut::Comp_SWC_Player_Event_With_FadeOut_C::get_OnlyTriggerInCinematic() {
    return (*(uint8_t*)((uintptr_t)this + 0x341 + 0)) & 1 != 0;
}
void _Game_Audio_Component_Comp_SWC_Player_Event_With_FadeOut::Comp_SWC_Player_Event_With_FadeOut_C::set_PlayOnPlayerController_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x342 + 0);
    *(uint8_t*)((uintptr_t)this + 0x342 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Game_Audio_Component_Comp_SWC_Player_Event_With_FadeOut::Comp_SWC_Player_Event_With_FadeOut_C::get_Transition_Duration() {
    return *(int32_t*)((uintptr_t)this + 0x33c);
}
void* _Game_Audio_Component_Comp_SWC_Player_Event_With_FadeOut::Comp_SWC_Player_Event_With_FadeOut_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x328);
}
_Script_AkAudio::AkAudioEvent*& _Game_Audio_Component_Comp_SWC_Player_Event_With_FadeOut::Comp_SWC_Player_Event_With_FadeOut_C::get_Overlap_Begin_Sound() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x330);
}
void* _Game_Audio_Component_Comp_SWC_Player_Event_With_FadeOut::Comp_SWC_Player_Event_With_FadeOut_C::get_Action_Type() {
    return (void*)((uintptr_t)this + 0x338);
}
void* _Game_Audio_Component_Comp_SWC_Player_Event_With_FadeOut::Comp_SWC_Player_Event_With_FadeOut_C::get_Fade_Curve() {
    return (void*)((uintptr_t)this + 0x340);
}
void _Game_Audio_Component_Comp_SWC_Player_Event_With_FadeOut::Comp_SWC_Player_Event_With_FadeOut_C::set_OnlyTriggerInCinematic(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x341 + 0);
    *(uint8_t*)((uintptr_t)this + 0x341 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Audio_Component_Comp_SWC_Player_Event_With_FadeOut::Comp_SWC_Player_Event_With_FadeOut_C::get_PlayOnPlayerController_() {
    return (*(uint8_t*)((uintptr_t)this + 0x342 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Game_Audio_Component_Comp_SWC_Player_Event_With_FadeOut::Comp_SWC_Player_Event_With_FadeOut_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Audio/Component/Comp_SWC_Player_Event_With_FadeOut.Comp_SWC_Player_Event_With_FadeOut_C");
    return result;
}
void _Game_Audio_Component_Comp_SWC_Player_Event_With_FadeOut::Comp_SWC_Player_Event_With_FadeOut_C::TriggerBeginOverlap0(_Script_Engine::Actor* Other_Actor) {
    return;
}
void _Game_Audio_Component_Comp_SWC_Player_Event_With_FadeOut::Comp_SWC_Player_Event_With_FadeOut_C::Trigger_End_Overlap0(_Script_Engine::Actor* Other_Actor) {
    return;
}
void _Game_Audio_Component_Comp_SWC_Player_Event_With_FadeOut::Comp_SWC_Player_Event_With_FadeOut_C::ExecuteUbergraph_Comp_SWC_Player_Event_With_FadeOut(int32_t EntryPoint) {
    return;
}
