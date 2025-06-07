#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GPUSpriteLocalVectorFieldInfo.hpp"
#include "VectorField.hpp"
_Script_Engine::VectorField*& _Script_Engine::GPUSpriteLocalVectorFieldInfo::get_Field() {
    return *(_Script_Engine::VectorField**)((uintptr_t)this + 0x0);
}
void* _Script_Engine::GPUSpriteLocalVectorFieldInfo::get_Transform() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::GPUSpriteLocalVectorFieldInfo::get_MinInitialRotation() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::GPUSpriteLocalVectorFieldInfo::get_RotationRate() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Engine::GPUSpriteLocalVectorFieldInfo::get_MaxInitialRotation() {
    return (void*)((uintptr_t)this + 0x4c);
}
bool _Script_Engine::GPUSpriteLocalVectorFieldInfo::get_bIgnoreComponentTransform() {
    return (*(uint8_t*)((uintptr_t)this + 0x6c + 0)) & 1 != 0;
}
float& _Script_Engine::GPUSpriteLocalVectorFieldInfo::get_Intensity() {
    return *(float*)((uintptr_t)this + 0x64);
}
float& _Script_Engine::GPUSpriteLocalVectorFieldInfo::get_Tightness() {
    return *(float*)((uintptr_t)this + 0x68);
}
void _Script_Engine::GPUSpriteLocalVectorFieldInfo::set_bIgnoreComponentTransform(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6c + 0);
    *(uint8_t*)((uintptr_t)this + 0x6c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::GPUSpriteLocalVectorFieldInfo::get_bTileX() {
    return (*(uint8_t*)((uintptr_t)this + 0x6c + 0)) & 2 != 0;
}
void _Script_Engine::GPUSpriteLocalVectorFieldInfo::set_bTileX(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6c + 0);
    *(uint8_t*)((uintptr_t)this + 0x6c + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::GPUSpriteLocalVectorFieldInfo::get_bTileY() {
    return (*(uint8_t*)((uintptr_t)this + 0x6c + 0)) & 4 != 0;
}
void _Script_Engine::GPUSpriteLocalVectorFieldInfo::set_bTileY(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6c + 0);
    *(uint8_t*)((uintptr_t)this + 0x6c + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::GPUSpriteLocalVectorFieldInfo::get_bTileZ() {
    return (*(uint8_t*)((uintptr_t)this + 0x6c + 0)) & 8 != 0;
}
void _Script_Engine::GPUSpriteLocalVectorFieldInfo::set_bTileZ(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6c + 0);
    *(uint8_t*)((uintptr_t)this + 0x6c + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::GPUSpriteLocalVectorFieldInfo::get_bUseFixDT() {
    return (*(uint8_t*)((uintptr_t)this + 0x6c + 0)) & 16 != 0;
}
void _Script_Engine::GPUSpriteLocalVectorFieldInfo::set_bUseFixDT(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x6c + 0);
    *(uint8_t*)((uintptr_t)this + 0x6c + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::GPUSpriteLocalVectorFieldInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.GPUSpriteLocalVectorFieldInfo");
    return result;
}
