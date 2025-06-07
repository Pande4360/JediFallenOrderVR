#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTDecorator_CheckAngleTo.hpp"
#include "RsBTDecorator_RelativeToLocationBase.hpp"
bool _Script_RsGameTechRT::RsBTDecorator_CheckAngleTo::get_bUseCustomAxis() {
    return (*(uint8_t*)((uintptr_t)this + 0x98 + 0)) & 1 != 0;
}
void* _Script_RsGameTechRT::RsBTDecorator_CheckAngleTo::get_Axis() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_RsGameTechRT::RsBTDecorator_CheckAngleTo::get_Comparison() {
    return (void*)((uintptr_t)this + 0x91);
}
float& _Script_RsGameTechRT::RsBTDecorator_CheckAngleTo::get_Angle() {
    return *(float*)((uintptr_t)this + 0x94);
}
void _Script_RsGameTechRT::RsBTDecorator_CheckAngleTo::set_bUseCustomAxis(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x98 + 0);
    *(uint8_t*)((uintptr_t)this + 0x98 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsBTDecorator_CheckAngleTo::get_CustomAxisEndLocationKey() {
    return (void*)((uintptr_t)this + 0xa0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTDecorator_CheckAngleTo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTDecorator_CheckAngleTo");
    return result;
}
