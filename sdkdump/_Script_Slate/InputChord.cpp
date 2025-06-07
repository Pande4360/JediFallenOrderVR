#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InputChord.hpp"
bool _Script_Slate::InputChord::get_bAlt() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 4 != 0;
}
void* _Script_Slate::InputChord::get_Key() {
    return (void*)((uintptr_t)this + 0x0);
}
bool _Script_Slate::InputChord::get_bShift() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 1 != 0;
}
bool _Script_Slate::InputChord::get_bCmd() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 8 != 0;
}
void _Script_Slate::InputChord::set_bShift(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Slate::InputChord::get_bCtrl() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 2 != 0;
}
void _Script_Slate::InputChord::set_bCtrl(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Slate::InputChord::set_bAlt(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Slate::InputChord::set_bCmd(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
_Script_CoreUObject::Class* _Script_Slate::InputChord::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Slate.InputChord");
    return result;
}
