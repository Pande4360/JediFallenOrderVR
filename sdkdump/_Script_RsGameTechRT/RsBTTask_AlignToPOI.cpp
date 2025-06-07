#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTTaskNode.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTTask_AlignToPOI.hpp"
float& _Script_RsGameTechRT::RsBTTask_AlignToPOI::get_TotalTime() {
    return *(float*)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTTask_AlignToPOI::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTTask_AlignToPOI");
    return result;
}
void _Script_RsGameTechRT::RsBTTask_AlignToPOI::set_bIgnoreAlignmentInZ(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x74 + 0);
    *(uint8_t*)((uintptr_t)this + 0x74 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsBTTask_AlignToPOI::get_bIgnoreAlignmentInZ() {
    return (*(uint8_t*)((uintptr_t)this + 0x74 + 0)) & 1 != 0;
}
bool _Script_RsGameTechRT::RsBTTask_AlignToPOI::get_bUseActorMotionRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0x75 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsBTTask_AlignToPOI::set_bUseActorMotionRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x75 + 0);
    *(uint8_t*)((uintptr_t)this + 0x75 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
