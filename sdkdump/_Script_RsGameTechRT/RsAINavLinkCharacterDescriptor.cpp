#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAINavLinkCharacterDescriptor.hpp"
void* _Script_RsGameTechRT::RsAINavLinkCharacterDescriptor::get_LeftToRightAnimSet() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsAINavLinkCharacterDescriptor::get_RightToLeftAnimSet() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_RsGameTechRT::RsAINavLinkCharacterDescriptor::get_CharacterType() {
    return (void*)((uintptr_t)this + 0xf0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAINavLinkCharacterDescriptor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAINavLinkCharacterDescriptor");
    return result;
}
