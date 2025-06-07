#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTDecorator_CheckDistanceBetween.hpp"
#include "RsBTDecorator_RelativeToLocationBase.hpp"
void* _Script_RsGameTechRT::RsBTDecorator_CheckDistanceBetween::get_Comparison() {
    return (void*)((uintptr_t)this + 0x90);
}
float& _Script_RsGameTechRT::RsBTDecorator_CheckDistanceBetween::get_Distance() {
    return *(float*)((uintptr_t)this + 0x94);
}
void _Script_RsGameTechRT::RsBTDecorator_CheckDistanceBetween::set_bUseDistanceBlackboardKey(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsBTDecorator_CheckDistanceBetween::get_DistanceKey() {
    return (void*)((uintptr_t)this + 0x98);
}
bool _Script_RsGameTechRT::RsBTDecorator_CheckDistanceBetween::get_bUseDistanceBlackboardKey() {
    return (*(uint8_t*)((uintptr_t)this + 0xc0 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTDecorator_CheckDistanceBetween::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTDecorator_CheckDistanceBetween");
    return result;
}
