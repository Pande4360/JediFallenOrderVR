#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BAFTASpeakerCharacterNameAndConditions.hpp"
void* _Script_RsGameTechRT::BAFTASpeakerCharacterNameAndConditions::get_RequiredTags() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_RsGameTechRT::BAFTASpeakerCharacterNameAndConditions::get_CharacterName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::BAFTASpeakerCharacterNameAndConditions::get_RequiredUnsetTags() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::BAFTASpeakerCharacterNameAndConditions::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.BAFTASpeakerCharacterNameAndConditions");
    return result;
}
