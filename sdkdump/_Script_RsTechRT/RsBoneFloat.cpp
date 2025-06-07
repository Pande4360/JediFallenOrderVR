#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBoneFloat.hpp"
void* _Script_RsTechRT::RsBoneFloat::get_BoneReference() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_RsTechRT::RsBoneFloat::get_Value() {
    return *(float*)((uintptr_t)this + 0x18);
}
bool _Script_RsTechRT::RsBoneFloat::get_bOverrideChildren() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c + 0)) & 1 != 0;
}
void _Script_RsTechRT::RsBoneFloat::set_bOverrideChildren(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RsTechRT::RsBoneFloat::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsTechRT.RsBoneFloat");
    return result;
}
