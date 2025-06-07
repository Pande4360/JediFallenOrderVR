#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\BlendSpaceBase.hpp"
#include "RsAINavLinkAnimDescriptor.hpp"
void* _Script_RsGameTechRT::RsAINavLinkAnimDescriptor::get_BlendSpaceAssetPtr() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_RsGameTechRT::RsAINavLinkAnimDescriptor::get_BlendInTime() {
    return *(float*)((uintptr_t)this + 0x28);
}
float& _Script_RsGameTechRT::RsAINavLinkAnimDescriptor::get_BlendOutTime() {
    return *(float*)((uintptr_t)this + 0x2c);
}
_Script_Engine::BlendSpaceBase*& _Script_RsGameTechRT::RsAINavLinkAnimDescriptor::get_BlendSpace() {
    return *(_Script_Engine::BlendSpaceBase**)((uintptr_t)this + 0x30);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAINavLinkAnimDescriptor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAINavLinkAnimDescriptor");
    return result;
}
