#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "TextureRenderTarget.hpp"
#include "TextureRenderTargetCube.hpp"
int32_t& _Script_Engine::TextureRenderTargetCube::get_SizeX() {
    return *(int32_t*)((uintptr_t)this + 0xb8);
}
void* _Script_Engine::TextureRenderTargetCube::get_OverrideFormat() {
    return (void*)((uintptr_t)this + 0xcc);
}
void* _Script_Engine::TextureRenderTargetCube::get_ClearColor() {
    return (void*)((uintptr_t)this + 0xbc);
}
bool _Script_Engine::TextureRenderTargetCube::get_bForceLinearGamma() {
    return (*(uint8_t*)((uintptr_t)this + 0xcd + 0)) & 2 != 0;
}
bool _Script_Engine::TextureRenderTargetCube::get_bHDR() {
    return (*(uint8_t*)((uintptr_t)this + 0xcd + 0)) & 1 != 0;
}
void _Script_Engine::TextureRenderTargetCube::set_bHDR(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcd + 0);
    *(uint8_t*)((uintptr_t)this + 0xcd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::TextureRenderTargetCube::set_bForceLinearGamma(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xcd + 0);
    *(uint8_t*)((uintptr_t)this + 0xcd + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::TextureRenderTargetCube::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.TextureRenderTargetCube");
    return result;
}
