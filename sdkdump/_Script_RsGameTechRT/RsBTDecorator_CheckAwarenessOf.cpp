#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTDecorator.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTDecorator_CheckAwarenessOf.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTDecorator_CheckAwarenessOf::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTDecorator_CheckAwarenessOf");
    return result;
}
void* _Script_RsGameTechRT::RsBTDecorator_CheckAwarenessOf::get_ActorKey() {
    return (void*)((uintptr_t)this + 0x68);
}
void _Script_RsGameTechRT::RsBTDecorator_CheckAwarenessOf::set_bIsRangeCheck(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsBTDecorator_CheckAwarenessOf::get_Comparison() {
    return (void*)((uintptr_t)this + 0x90);
}
float& _Script_RsGameTechRT::RsBTDecorator_CheckAwarenessOf::get_AwarenessValue() {
    return *(float*)((uintptr_t)this + 0x94);
}
float& _Script_RsGameTechRT::RsBTDecorator_CheckAwarenessOf::get_MinAwarenessValue() {
    return *(float*)((uintptr_t)this + 0x98);
}
float& _Script_RsGameTechRT::RsBTDecorator_CheckAwarenessOf::get_MaxAwarenessValue() {
    return *(float*)((uintptr_t)this + 0x9c);
}
bool _Script_RsGameTechRT::RsBTDecorator_CheckAwarenessOf::get_bIsRangeCheck() {
    return (*(uint8_t*)((uintptr_t)this + 0xa0 + 0)) & 1 != 0;
}
