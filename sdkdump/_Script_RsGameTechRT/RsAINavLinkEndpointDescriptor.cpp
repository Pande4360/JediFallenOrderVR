#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAINavLinkEndpointDescriptor.hpp"
void* _Script_RsGameTechRT::RsAINavLinkEndpointDescriptor::get_NavDataName() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_RsGameTechRT::RsAINavLinkEndpointDescriptor::get_NavDataIndex() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
void* _Script_RsGameTechRT::RsAINavLinkEndpointDescriptor::get_LeftLocation() {
    return (void*)((uintptr_t)this + 0xc);
}
void* _Script_RsGameTechRT::RsAINavLinkEndpointDescriptor::get_RightLocation() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_RsGameTechRT::RsAINavLinkEndpointDescriptor::get_LeftTangent() {
    return (void*)((uintptr_t)this + 0x24);
}
void* _Script_RsGameTechRT::RsAINavLinkEndpointDescriptor::get_RightTangent() {
    return (void*)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAINavLinkEndpointDescriptor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAINavLinkEndpointDescriptor");
    return result;
}
