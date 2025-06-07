#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DepthFieldGlowInfo.hpp"
bool _Script_Engine::DepthFieldGlowInfo::get_bEnableGlow() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_Engine::DepthFieldGlowInfo::set_bEnableGlow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::DepthFieldGlowInfo::get_GlowColor() {
    return (void*)((uintptr_t)this + 0x4);
}
void* _Script_Engine::DepthFieldGlowInfo::get_GlowOuterRadius() {
    return (void*)((uintptr_t)this + 0x14);
}
_Script_CoreUObject::Class* _Script_Engine::DepthFieldGlowInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.DepthFieldGlowInfo");
    return result;
}
void* _Script_Engine::DepthFieldGlowInfo::get_GlowInnerRadius() {
    return (void*)((uintptr_t)this + 0x1c);
}
