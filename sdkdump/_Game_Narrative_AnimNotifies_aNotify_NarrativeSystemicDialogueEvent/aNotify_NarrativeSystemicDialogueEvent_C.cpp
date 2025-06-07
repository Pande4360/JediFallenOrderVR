#include "..\FUObjectArray.hpp"
#include "aNotify_NarrativeSystemicDialogueEvent_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotify.hpp"
#include "..\_Script_Engine\AnimSequenceBase.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
void* _Game_Narrative_AnimNotifies_aNotify_NarrativeSystemicDialogueEvent::aNotify_NarrativeSystemicDialogueEvent_C::get_CustomContent() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Game_Narrative_AnimNotifies_aNotify_NarrativeSystemicDialogueEvent::aNotify_NarrativeSystemicDialogueEvent_C::get_SystemicEventContext() {
    return (void*)((uintptr_t)this + 0x38);
}
bool _Game_Narrative_AnimNotifies_aNotify_NarrativeSystemicDialogueEvent::aNotify_NarrativeSystemicDialogueEvent_C::get_DoAffirmOnSuccess() {
    return (*(uint8_t*)((uintptr_t)this + 0x60 + 0)) & 1 != 0;
}
void _Game_Narrative_AnimNotifies_aNotify_NarrativeSystemicDialogueEvent::aNotify_NarrativeSystemicDialogueEvent_C::set_DoAffirmOnSuccess(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x60 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Game_Narrative_AnimNotifies_aNotify_NarrativeSystemicDialogueEvent::aNotify_NarrativeSystemicDialogueEvent_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Narrative/AnimNotifies/aNotify_NarrativeSystemicDialogueEvent.aNotify_NarrativeSystemicDialogueEvent_C");
    return result;
}
bool _Game_Narrative_AnimNotifies_aNotify_NarrativeSystemicDialogueEvent::aNotify_NarrativeSystemicDialogueEvent_C::Received_Notify0(_Script_Engine::SkeletalMeshComponent* MeshComp, _Script_Engine::AnimSequenceBase* Animation) {
    return;
}
