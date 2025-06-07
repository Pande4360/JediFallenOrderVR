#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FontRenderInfo.hpp"
bool _Script_Engine::FontRenderInfo::get_bClipText() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_Engine::FontRenderInfo::set_bClipText(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::FontRenderInfo::get_bEnableShadow() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 2 != 0;
}
void _Script_Engine::FontRenderInfo::set_bEnableShadow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::FontRenderInfo::get_GlowInfo() {
    return (void*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_Engine::FontRenderInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.FontRenderInfo");
    return result;
}
