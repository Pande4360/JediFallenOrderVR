#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTDecorator_IsMultipleAwayFrom.hpp"
#include "RsBTDecorator_RelativeToLocationBase.hpp"
void* _Script_RsGameTechRT::RsBTDecorator_IsMultipleAwayFrom::get_Comparison() {
    return (void*)((uintptr_t)this + 0x90);
}
bool _Script_RsGameTechRT::RsBTDecorator_IsMultipleAwayFrom::get_bCheckDistanceIn2D() {
    return (*(uint8_t*)((uintptr_t)this + 0xc0 + 0)) & 1 != 0;
}
void* _Script_RsGameTechRT::RsBTDecorator_IsMultipleAwayFrom::get_MultiplicandSource() {
    return (void*)((uintptr_t)this + 0x91);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTDecorator_IsMultipleAwayFrom::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTDecorator_IsMultipleAwayFrom");
    return result;
}
float& _Script_RsGameTechRT::RsBTDecorator_IsMultipleAwayFrom::get_Multiplier() {
    return *(float*)((uintptr_t)this + 0x94);
}
void* _Script_RsGameTechRT::RsBTDecorator_IsMultipleAwayFrom::get_MultiplicandKey() {
    return (void*)((uintptr_t)this + 0x98);
}
void _Script_RsGameTechRT::RsBTDecorator_IsMultipleAwayFrom::set_bCheckDistanceIn2D(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
