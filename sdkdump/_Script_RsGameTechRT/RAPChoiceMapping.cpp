#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RAPChoiceMapping.hpp"
void* _Script_RsGameTechRT::RAPChoiceMapping::get_NodeIDToInteractionID() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RAPChoiceMapping::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RAPChoiceMapping");
    return result;
}
