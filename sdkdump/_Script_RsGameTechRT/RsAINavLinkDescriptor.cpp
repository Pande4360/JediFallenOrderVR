#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAINavLinkDescriptor.hpp"
void* _Script_RsGameTechRT::RsAINavLinkDescriptor::get_Left() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAINavLinkDescriptor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAINavLinkDescriptor");
    return result;
}
void* _Script_RsGameTechRT::RsAINavLinkDescriptor::get_Right() {
    return (void*)((uintptr_t)this + 0xc);
}
void* _Script_RsGameTechRT::RsAINavLinkDescriptor::get_Direction() {
    return (void*)((uintptr_t)this + 0x18);
}
float& _Script_RsGameTechRT::RsAINavLinkDescriptor::get_SnapToEdgeRadius() {
    return *(float*)((uintptr_t)this + 0x1c);
}
void* _Script_RsGameTechRT::RsAINavLinkDescriptor::get_UserId() {
    return (void*)((uintptr_t)this + 0x30);
}
float& _Script_RsGameTechRT::RsAINavLinkDescriptor::get_SnapToGroundHeight() {
    return *(float*)((uintptr_t)this + 0x20);
}
void* _Script_RsGameTechRT::RsAINavLinkDescriptor::get_AreaClass() {
    return (void*)((uintptr_t)this + 0x28);
}
