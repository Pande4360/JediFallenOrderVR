#include "..\FUObjectArray.hpp"
#include "AkAudioInputComponent.hpp"
#include "AkComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_AkAudio::AkAudioInputComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AkAudio.AkAudioInputComponent");
    return result;
}
int32_t _Script_AkAudio::AkAudioInputComponent::PostAssociatedAudioInputEvent() {
    return;
}
