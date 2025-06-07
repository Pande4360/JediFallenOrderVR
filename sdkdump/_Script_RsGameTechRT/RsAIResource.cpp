#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "RsAIResource.hpp"
bool _Script_RsGameTechRT::RsAIResource::get_bIsGlobalResource() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsAIResource::set_bIsGlobalResource(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsAIResource::get_bUseMaxAIResourceCount() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 2 != 0;
}
int32_t& _Script_RsGameTechRT::RsAIResource::get_MaxAIResourceCount() {
    return *(int32_t*)((uintptr_t)this + 0x34);
}
void _Script_RsGameTechRT::RsAIResource::set_bUseMaxAIResourceCount(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_RsGameTechRT::RsAIResource::get_bQueuedRequestsBlock() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsAIResource::set_bQueuedRequestsBlock(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIResource::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAIResource");
    return result;
}
