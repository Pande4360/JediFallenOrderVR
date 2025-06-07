#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "VirtualTextureLayer.hpp"
void* _Script_Engine::VirtualTextureLayer::get_Format() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::VirtualTextureLayer::get_CompressionSettings() {
    return (void*)((uintptr_t)this + 0x3);
}
bool _Script_Engine::VirtualTextureLayer::get_bCompressed() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
void _Script_Engine::VirtualTextureLayer::set_bHasAlpha(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::VirtualTextureLayer::set_bCompressed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::VirtualTextureLayer::get_bHasAlpha() {
    return (*(uint8_t*)((uintptr_t)this + 0x2 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Engine::VirtualTextureLayer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.VirtualTextureLayer");
    return result;
}
