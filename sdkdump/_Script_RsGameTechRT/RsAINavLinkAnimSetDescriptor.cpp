#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAINavLinkAnimSetDescriptor.hpp"
void* _Script_RsGameTechRT::RsAINavLinkAnimSetDescriptor::get_ApproachMode() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsAINavLinkAnimSetDescriptor::get_TraversalAnimation() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_RsGameTechRT::RsAINavLinkAnimSetDescriptor::get_ApproachAnimation() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAINavLinkAnimSetDescriptor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAINavLinkAnimSetDescriptor");
    return result;
}
