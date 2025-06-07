#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAIAcquireResourceParameters.hpp"
float& _Script_RsGameTechRT::RsAIAcquireResourceParameters::get_Timeout() {
    return *(float*)((uintptr_t)this + 0xc);
}
void* _Script_RsGameTechRT::RsAIAcquireResourceParameters::get_ResourceClass() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_RsGameTechRT::RsAIAcquireResourceParameters::get_bTryOnce() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 2 != 0;
}
void _Script_RsGameTechRT::RsAIAcquireResourceParameters::set_bQueued(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsAIAcquireResourceParameters::get_bQueued() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void* _Script_RsGameTechRT::RsAIAcquireResourceParameters::get_ResourceProviderKey() {
    return (void*)((uintptr_t)this + 0x18);
}
void _Script_RsGameTechRT::RsAIAcquireResourceParameters::set_bTryOnce(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_RsGameTechRT::RsAIAcquireResourceParameters::get_ResourceProvider() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIAcquireResourceParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAIAcquireResourceParameters");
    return result;
}
