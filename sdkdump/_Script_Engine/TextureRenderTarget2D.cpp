#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "TextureRenderTarget.hpp"
#include "TextureRenderTarget2D.hpp"
int32_t& _Script_Engine::TextureRenderTarget2D::get_SizeX() {
    return *(int32_t*)((uintptr_t)this + 0xb8);
}
int32_t& _Script_Engine::TextureRenderTarget2D::get_SizeY() {
    return *(int32_t*)((uintptr_t)this + 0xbc);
}
void* _Script_Engine::TextureRenderTarget2D::get_ClearColor() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_Engine::TextureRenderTarget2D::get_AddressX() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_Engine::TextureRenderTarget2D::get_AddressY() {
    return (void*)((uintptr_t)this + 0xd1);
}
bool _Script_Engine::TextureRenderTarget2D::get_bForceLinearGamma() {
    return (*(uint8_t*)((uintptr_t)this + 0xd2 + 0)) & 1 != 0;
}
void _Script_Engine::TextureRenderTarget2D::set_bForceLinearGamma(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd2 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::TextureRenderTarget2D::get_bHDR() {
    return (*(uint8_t*)((uintptr_t)this + 0xd2 + 0)) & 2 != 0;
}
void _Script_Engine::TextureRenderTarget2D::set_bHDR(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd2 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd2 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::TextureRenderTarget2D::get_bGPUSharedFlag() {
    return (*(uint8_t*)((uintptr_t)this + 0xd2 + 0)) & 4 != 0;
}
void _Script_Engine::TextureRenderTarget2D::set_bGPUSharedFlag(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd2 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd2 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::TextureRenderTarget2D::get_bAutoGenerateMips() {
    return (*(uint8_t*)((uintptr_t)this + 0xd2 + 0)) & 8 != 0;
}
void _Script_Engine::TextureRenderTarget2D::set_bAutoGenerateMips(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd2 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd2 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void* _Script_Engine::TextureRenderTarget2D::get_RenderTargetFormat() {
    return (void*)((uintptr_t)this + 0xd3);
}
void* _Script_Engine::TextureRenderTarget2D::get_OverrideFormat() {
    return (void*)((uintptr_t)this + 0xd4);
}
_Script_CoreUObject::Class* _Script_Engine::TextureRenderTarget2D::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.TextureRenderTarget2D");
    return result;
}
