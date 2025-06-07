#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "Texture.hpp"
void _Script_Engine::Texture::set_SRGB(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4b + 0);
    *(uint8_t*)((uintptr_t)this + 0x4b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Engine::Texture::get_LightingGuid() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_Engine::Texture::get_Filter() {
    return (void*)((uintptr_t)this + 0x49);
}
int32_t& _Script_Engine::Texture::get_LODBias() {
    return *(int32_t*)((uintptr_t)this + 0x40);
}
int32_t& _Script_Engine::Texture::get_NumCinematicMipLevels() {
    return *(int32_t*)((uintptr_t)this + 0x44);
}
void* _Script_Engine::Texture::get_CompressionSettings() {
    return (void*)((uintptr_t)this + 0x48);
}
bool _Script_Engine::Texture::get_SRGB() {
    return (*(uint8_t*)((uintptr_t)this + 0x4b + 0)) & 1 != 0;
}
void* _Script_Engine::Texture::get_LODGroup() {
    return (void*)((uintptr_t)this + 0x4a);
}
bool _Script_Engine::Texture::get_NeverStream() {
    return (*(uint8_t*)((uintptr_t)this + 0x4b + 0)) & 2 != 0;
}
void _Script_Engine::Texture::set_NeverStream(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4b + 0);
    *(uint8_t*)((uintptr_t)this + 0x4b + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::Texture::get_bNoTiling() {
    return (*(uint8_t*)((uintptr_t)this + 0x4b + 0)) & 4 != 0;
}
void _Script_Engine::Texture::set_bNoTiling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4b + 0);
    *(uint8_t*)((uintptr_t)this + 0x4b + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::Texture::get_bUseCinematicMipLevels() {
    return (*(uint8_t*)((uintptr_t)this + 0x4b + 0)) & 8 != 0;
}
void _Script_Engine::Texture::set_bUseCinematicMipLevels(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4b + 0);
    *(uint8_t*)((uintptr_t)this + 0x4b + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::Texture::get_bAsyncResourceReleaseHasBeenStarted() {
    return (*(uint8_t*)((uintptr_t)this + 0x4b + 0)) & 16 != 0;
}
void _Script_Engine::Texture::set_bAsyncResourceReleaseHasBeenStarted(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4b + 0);
    *(uint8_t*)((uintptr_t)this + 0x4b + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
int32_t& _Script_Engine::Texture::get_CachedCombinedLODBias() {
    return *(int32_t*)((uintptr_t)this + 0x4c);
}
void* _Script_Engine::Texture::get_AssetUserData() {
    return (void*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_Engine::Texture::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.Texture");
    return result;
}
