#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BAFTASpeakerCharacterNameList.hpp"
void* _Script_RsGameTechRT::BAFTASpeakerCharacterNameList::get_PossibleCharacterDisplayNames() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::BAFTASpeakerCharacterNameList::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.BAFTASpeakerCharacterNameList");
    return result;
}
