#include "..\FUObjectArray.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "RsAIVODefinition.hpp"
void* _Script_RsGameTechRT::RsAIVODefinition::get_AlertedVOPerCharacter() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_AkAudio::AkAudioEvent*& _Script_RsGameTechRT::RsAIVODefinition::get_AlertedVODefault() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x80);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIVODefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAIVODefinition");
    return result;
}
