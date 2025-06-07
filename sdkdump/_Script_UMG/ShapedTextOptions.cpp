#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ShapedTextOptions.hpp"
bool _Script_UMG::ShapedTextOptions::get_bOverride_TextShapingMethod() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void* _Script_UMG::ShapedTextOptions::get_TextFlowDirection() {
    return (void*)((uintptr_t)this + 0x2);
}
void _Script_UMG::ShapedTextOptions::set_bOverride_TextShapingMethod(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_UMG::ShapedTextOptions::get_bOverride_TextFlowDirection() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 2 != 0;
}
_Script_CoreUObject::Class* _Script_UMG::ShapedTextOptions::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/UMG.ShapedTextOptions");
    return result;
}
void _Script_UMG::ShapedTextOptions::set_bOverride_TextFlowDirection(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_UMG::ShapedTextOptions::get_TextShapingMethod() {
    return (void*)((uintptr_t)this + 0x1);
}
