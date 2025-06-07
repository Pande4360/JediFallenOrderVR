#include "..\FUObjectArray.hpp"
#include "..\_Script_AudioMixer\SynthComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "VoipListenerSynthComponent.hpp"
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::VoipListenerSynthComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemUtils.VoipListenerSynthComponent");
    return result;
}
bool _Script_OnlineSubsystemUtils::VoipListenerSynthComponent::IsIdling() {
    return;
}
