#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTDecorator_CheckDistanceTo.hpp"
#include "RsBTDecorator_RelativeToLocationBase.hpp"
bool _Script_RsGameTechRT::RsBTDecorator_CheckDistanceTo::get_bIsRangeCheck() {
    return (*(uint8_t*)((uintptr_t)this + 0x120 + 0)) & 1 != 0;
}
float& _Script_RsGameTechRT::RsBTDecorator_CheckDistanceTo::get_MaxDistance() {
    return *(float*)((uintptr_t)this + 0xf0);
}
float& _Script_RsGameTechRT::RsBTDecorator_CheckDistanceTo::get_MinDistance() {
    return *(float*)((uintptr_t)this + 0xc0);
}
void* _Script_RsGameTechRT::RsBTDecorator_CheckDistanceTo::get_Comparison() {
    return (void*)((uintptr_t)this + 0x90);
}
float& _Script_RsGameTechRT::RsBTDecorator_CheckDistanceTo::get_Distance() {
    return *(float*)((uintptr_t)this + 0x94);
}
void* _Script_RsGameTechRT::RsBTDecorator_CheckDistanceTo::get_DistanceKey() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_RsGameTechRT::RsBTDecorator_CheckDistanceTo::get_MinDistanceKey() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_RsGameTechRT::RsBTDecorator_CheckDistanceTo::get_MaxDistanceKey() {
    return (void*)((uintptr_t)this + 0xf8);
}
void _Script_RsGameTechRT::RsBTDecorator_CheckDistanceTo::set_bIsRangeCheck(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x120 + 0);
    *(uint8_t*)((uintptr_t)this + 0x120 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsBTDecorator_CheckDistanceTo::get_bCheckDistanceIn2D() {
    return (*(uint8_t*)((uintptr_t)this + 0x120 + 0)) & 2 != 0;
}
void _Script_RsGameTechRT::RsBTDecorator_CheckDistanceTo::set_bCheckDistanceIn2D(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x120 + 0);
    *(uint8_t*)((uintptr_t)this + 0x120 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_RsGameTechRT::RsBTDecorator_CheckDistanceTo::get_bCheckDistanceInZ() {
    return (*(uint8_t*)((uintptr_t)this + 0x120 + 0)) & 4 != 0;
}
void _Script_RsGameTechRT::RsBTDecorator_CheckDistanceTo::set_bCheckDistanceInZ(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x120 + 0);
    *(uint8_t*)((uintptr_t)this + 0x120 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_RsGameTechRT::RsBTDecorator_CheckDistanceTo::get_bUseDistanceBlackboardKey() {
    return (*(uint8_t*)((uintptr_t)this + 0x120 + 0)) & 8 != 0;
}
void _Script_RsGameTechRT::RsBTDecorator_CheckDistanceTo::set_bUseDistanceBlackboardKey(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x120 + 0);
    *(uint8_t*)((uintptr_t)this + 0x120 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_RsGameTechRT::RsBTDecorator_CheckDistanceTo::get_bUseMinDistanceBlackboardKey() {
    return (*(uint8_t*)((uintptr_t)this + 0x120 + 0)) & 16 != 0;
}
void _Script_RsGameTechRT::RsBTDecorator_CheckDistanceTo::set_bUseMinDistanceBlackboardKey(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x120 + 0);
    *(uint8_t*)((uintptr_t)this + 0x120 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_RsGameTechRT::RsBTDecorator_CheckDistanceTo::get_bUseMaxDistanceBlackboardKey() {
    return (*(uint8_t*)((uintptr_t)this + 0x120 + 0)) & 32 != 0;
}
void _Script_RsGameTechRT::RsBTDecorator_CheckDistanceTo::set_bUseMaxDistanceBlackboardKey(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x120 + 0);
    *(uint8_t*)((uintptr_t)this + 0x120 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTDecorator_CheckDistanceTo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTDecorator_CheckDistanceTo");
    return result;
}
