#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "VirtualKeyboardOptions.hpp"
void _Script_Slate::VirtualKeyboardOptions::set_bEnableAutocorrect(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Slate::VirtualKeyboardOptions::get_bEnableAutocorrect() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Slate::VirtualKeyboardOptions::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Slate.VirtualKeyboardOptions");
    return result;
}
