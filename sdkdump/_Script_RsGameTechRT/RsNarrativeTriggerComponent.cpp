#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "NarrativeEventResult.hpp"
#include "RsNarrativeTriggerComponent.hpp"
void* _Script_RsGameTechRT::RsNarrativeTriggerComponent::get_EventDetails() {
    return (void*)((uintptr_t)this + 0x170);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsNarrativeTriggerComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsNarrativeTriggerComponent");
    return result;
}
_Script_RsGameTechRT::NarrativeEventResult _Script_RsGameTechRT::RsNarrativeTriggerComponent::TriggerNarrativeForActors(void*& Actors) {
    return;
}
_Script_RsGameTechRT::NarrativeEventResult _Script_RsGameTechRT::RsNarrativeTriggerComponent::TriggerNarrative() {
    return;
}
