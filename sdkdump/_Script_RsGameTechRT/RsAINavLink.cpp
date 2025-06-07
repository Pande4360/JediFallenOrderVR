#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "RsAINavLink.hpp"
#include "RsAINavLinkDefinition.hpp"
void* _Script_RsGameTechRT::RsAINavLink::get_LinkDescriptor() {
    return (void*)((uintptr_t)this + 0x378);
}
_Script_RsGameTechRT::RsAINavLinkDefinition*& _Script_RsGameTechRT::RsAINavLink::get_NavLinkDefinition() {
    return *(_Script_RsGameTechRT::RsAINavLinkDefinition**)((uintptr_t)this + 0x3b0);
}
void* _Script_RsGameTechRT::RsAINavLink::get_EndpointDescriptors() {
    return (void*)((uintptr_t)this + 0x3b8);
}
bool _Script_RsGameTechRT::RsAINavLink::get_bIsEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x3e0 + 0)) & 4 != 0;
}
bool _Script_RsGameTechRT::RsAINavLink::get_bIsValidLink() {
    return (*(uint8_t*)((uintptr_t)this + 0x3e0 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAINavLink::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAINavLink");
    return result;
}
void _Script_RsGameTechRT::RsAINavLink::set_bIsValidLink(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3e0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_RsGameTechRT::RsAINavLink::set_bIsEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3e0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_RsGameTechRT::RsAINavLink::SetLinkEnabled(bool bEnabled) {
    return;
}
bool _Script_RsGameTechRT::RsAINavLink::IsLinkEnabled() {
    return;
}
