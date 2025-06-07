#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAILocationSearchStrategy.hpp"
void* _Script_RsGameTechRT::RsAILocationSearchStrategy::get_DistancePolicy() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAILocationSearchStrategy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAILocationSearchStrategy");
    return result;
}
bool _Script_RsGameTechRT::RsAILocationSearchStrategy::get_bMustBeInViewFrustum() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 2 != 0;
}
bool _Script_RsGameTechRT::RsAILocationSearchStrategy::get_bRequiresLOS() {
    return (*(uint8_t*)((uintptr_t)this + 0x4 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsAILocationSearchStrategy::set_bRequiresLOS(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_RsGameTechRT::RsAILocationSearchStrategy::set_bMustBeInViewFrustum(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
