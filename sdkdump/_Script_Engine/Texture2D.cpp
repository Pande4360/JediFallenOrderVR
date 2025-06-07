#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Texture.hpp"
#include "Texture2D.hpp"
int32_t& _Script_Engine::Texture2D::get_StreamingIndex() {
    return *(int32_t*)((uintptr_t)this + 0xb0);
}
int32_t& _Script_Engine::Texture2D::get_LevelIndex() {
    return *(int32_t*)((uintptr_t)this + 0xb4);
}
int32_t& _Script_Engine::Texture2D::get_FirstResourceMemMip() {
    return *(int32_t*)((uintptr_t)this + 0xb8);
}
bool _Script_Engine::Texture2D::get_bIsStreamable() {
    return (*(uint8_t*)((uintptr_t)this + 0xbc + 0)) & 2 != 0;
}
bool _Script_Engine::Texture2D::get_bTemporarilyDisableStreaming() {
    return (*(uint8_t*)((uintptr_t)this + 0xbc + 0)) & 1 != 0;
}
void* _Script_Engine::Texture2D::get_AddressY() {
    return (void*)((uintptr_t)this + 0xbe);
}
bool _Script_Engine::Texture2D::get_bHasStreamingUpdatePending() {
    return (*(uint8_t*)((uintptr_t)this + 0xbc + 0)) & 4 != 0;
}
void _Script_Engine::Texture2D::set_bTemporarilyDisableStreaming(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbc + 0);
    *(uint8_t*)((uintptr_t)this + 0xbc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::Texture2D::set_bIsStreamable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbc + 0);
    *(uint8_t*)((uintptr_t)this + 0xbc + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::Texture2D::set_bHasStreamingUpdatePending(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbc + 0);
    *(uint8_t*)((uintptr_t)this + 0xbc + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void* _Script_Engine::Texture2D::get_AddressX() {
    return (void*)((uintptr_t)this + 0xbd);
}
bool _Script_Engine::Texture2D::get_bForceMiplevelsToBeResident() {
    return (*(uint8_t*)((uintptr_t)this + 0xbc + 0)) & 8 != 0;
}
double& _Script_Engine::Texture2D::get_ForceMipLevelsToBeResidentTimestamp() {
    return *(double*)((uintptr_t)this + 0xc8);
}
void _Script_Engine::Texture2D::set_bForceMiplevelsToBeResident(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbc + 0);
    *(uint8_t*)((uintptr_t)this + 0xbc + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::Texture2D::get_bIgnoreStreamingMipBias() {
    return (*(uint8_t*)((uintptr_t)this + 0xbc + 0)) & 16 != 0;
}
void _Script_Engine::Texture2D::set_bIgnoreStreamingMipBias(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbc + 0);
    *(uint8_t*)((uintptr_t)this + 0xbc + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::Texture2D::get_bGlobalForceMipLevelsToBeResident() {
    return (*(uint8_t*)((uintptr_t)this + 0xbc + 0)) & 32 != 0;
}
void _Script_Engine::Texture2D::set_bGlobalForceMipLevelsToBeResident(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xbc + 0);
    *(uint8_t*)((uintptr_t)this + 0xbc + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
void* _Script_Engine::Texture2D::get_ImportedSize() {
    return (void*)((uintptr_t)this + 0xc0);
}
_Script_CoreUObject::Class* _Script_Engine::Texture2D::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.Texture2D");
    return result;
}
int32_t _Script_Engine::Texture2D::Blueprint_GetSizeY() {
    return;
}
int32_t _Script_Engine::Texture2D::Blueprint_GetSizeX() {
    return;
}
