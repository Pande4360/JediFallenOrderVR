#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsInputChord.hpp"
void _Script_RsTechRT::RsInputChord::set_bShift(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_RsTechRT::RsInputChord::get_Key() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_RsTechRT::RsInputChord::get_bAlt() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 4 != 0;
}
bool _Script_RsTechRT::RsInputChord::get_bCtrl() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 1 != 0;
}
void _Script_RsTechRT::RsInputChord::set_bCtrl(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsTechRT::RsInputChord::get_bShift() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 2 != 0;
}
_Script_CoreUObject::Class* _Script_RsTechRT::RsInputChord::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsTechRT.RsInputChord");
    return result;
}
void _Script_RsTechRT::RsInputChord::set_bAlt(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
