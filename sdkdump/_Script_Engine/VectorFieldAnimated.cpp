#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Texture2D.hpp"
#include "VectorField.hpp"
#include "VectorFieldAnimated.hpp"
#include "VectorFieldStatic.hpp"
_Script_Engine::Texture2D*& _Script_Engine::VectorFieldAnimated::get_Texture() {
    return *(_Script_Engine::Texture2D**)((uintptr_t)this + 0x48);
}
void* _Script_Engine::VectorFieldAnimated::get_ConstructionOp() {
    return (void*)((uintptr_t)this + 0x50);
}
int32_t& _Script_Engine::VectorFieldAnimated::get_SubImagesY() {
    return *(int32_t*)((uintptr_t)this + 0x64);
}
int32_t& _Script_Engine::VectorFieldAnimated::get_VolumeSizeX() {
    return *(int32_t*)((uintptr_t)this + 0x54);
}
int32_t& _Script_Engine::VectorFieldAnimated::get_SubImagesX() {
    return *(int32_t*)((uintptr_t)this + 0x60);
}
int32_t& _Script_Engine::VectorFieldAnimated::get_VolumeSizeY() {
    return *(int32_t*)((uintptr_t)this + 0x58);
}
int32_t& _Script_Engine::VectorFieldAnimated::get_FrameCount() {
    return *(int32_t*)((uintptr_t)this + 0x68);
}
int32_t& _Script_Engine::VectorFieldAnimated::get_VolumeSizeZ() {
    return *(int32_t*)((uintptr_t)this + 0x5c);
}
float& _Script_Engine::VectorFieldAnimated::get_FramesPerSecond() {
    return *(float*)((uintptr_t)this + 0x6c);
}
bool _Script_Engine::VectorFieldAnimated::get_bLoop() {
    return (*(uint8_t*)((uintptr_t)this + 0x70 + 0)) & 1 != 0;
}
void _Script_Engine::VectorFieldAnimated::set_bLoop(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x70 + 0);
    *(uint8_t*)((uintptr_t)this + 0x70 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::VectorFieldStatic*& _Script_Engine::VectorFieldAnimated::get_NoiseField() {
    return *(_Script_Engine::VectorFieldStatic**)((uintptr_t)this + 0x78);
}
float& _Script_Engine::VectorFieldAnimated::get_NoiseScale() {
    return *(float*)((uintptr_t)this + 0x80);
}
float& _Script_Engine::VectorFieldAnimated::get_NoiseMax() {
    return *(float*)((uintptr_t)this + 0x84);
}
_Script_CoreUObject::Class* _Script_Engine::VectorFieldAnimated::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.VectorFieldAnimated");
    return result;
}
