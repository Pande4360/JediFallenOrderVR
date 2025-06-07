#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ParticleModuleTypeDataBase.hpp"
#include "ParticleModuleTypeDataBeam2.hpp"
bool _Script_Engine::ParticleModuleTypeDataBeam2::get_bAlwaysOn() {
    return (*(uint8_t*)((uintptr_t)this + 0x4c + 0)) & 1 != 0;
}
int32_t& _Script_Engine::ParticleModuleTypeDataBeam2::get_InterpolationPoints() {
    return *(int32_t*)((uintptr_t)this + 0x48);
}
int32_t& _Script_Engine::ParticleModuleTypeDataBeam2::get_MaxBeamCount() {
    return *(int32_t*)((uintptr_t)this + 0x40);
}
void* _Script_Engine::ParticleModuleTypeDataBeam2::get_BeamMethod() {
    return (void*)((uintptr_t)this + 0x30);
}
int32_t& _Script_Engine::ParticleModuleTypeDataBeam2::get_TextureTile() {
    return *(int32_t*)((uintptr_t)this + 0x34);
}
float& _Script_Engine::ParticleModuleTypeDataBeam2::get_TextureTileDistance() {
    return *(float*)((uintptr_t)this + 0x38);
}
int32_t& _Script_Engine::ParticleModuleTypeDataBeam2::get_Sheets() {
    return *(int32_t*)((uintptr_t)this + 0x3c);
}
float& _Script_Engine::ParticleModuleTypeDataBeam2::get_Speed() {
    return *(float*)((uintptr_t)this + 0x44);
}
void _Script_Engine::ParticleModuleTypeDataBeam2::set_bAlwaysOn(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4c + 0);
    *(uint8_t*)((uintptr_t)this + 0x4c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Script_Engine::ParticleModuleTypeDataBeam2::get_UpVectorStepSize() {
    return *(int32_t*)((uintptr_t)this + 0x50);
}
void* _Script_Engine::ParticleModuleTypeDataBeam2::get_BranchParentName() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_Engine::ParticleModuleTypeDataBeam2::get_Distance() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_Engine::ParticleModuleTypeDataBeam2::get_TaperMethod() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_Engine::ParticleModuleTypeDataBeam2::get_TaperFactor() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_Engine::ParticleModuleTypeDataBeam2::get_TaperScale() {
    return (void*)((uintptr_t)this + 0xd8);
}
bool _Script_Engine::ParticleModuleTypeDataBeam2::get_RenderGeometry() {
    return (*(uint8_t*)((uintptr_t)this + 0x110 + 0)) & 1 != 0;
}
void _Script_Engine::ParticleModuleTypeDataBeam2::set_RenderGeometry(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x110 + 0);
    *(uint8_t*)((uintptr_t)this + 0x110 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ParticleModuleTypeDataBeam2::get_RenderDirectLine() {
    return (*(uint8_t*)((uintptr_t)this + 0x110 + 0)) & 2 != 0;
}
void _Script_Engine::ParticleModuleTypeDataBeam2::set_RenderDirectLine(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x110 + 0);
    *(uint8_t*)((uintptr_t)this + 0x110 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::ParticleModuleTypeDataBeam2::get_RenderLines() {
    return (*(uint8_t*)((uintptr_t)this + 0x110 + 0)) & 4 != 0;
}
void _Script_Engine::ParticleModuleTypeDataBeam2::set_RenderLines(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x110 + 0);
    *(uint8_t*)((uintptr_t)this + 0x110 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::ParticleModuleTypeDataBeam2::get_RenderTessellation() {
    return (*(uint8_t*)((uintptr_t)this + 0x110 + 0)) & 8 != 0;
}
void _Script_Engine::ParticleModuleTypeDataBeam2::set_RenderTessellation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x110 + 0);
    *(uint8_t*)((uintptr_t)this + 0x110 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::ParticleModuleTypeDataBeam2::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ParticleModuleTypeDataBeam2");
    return result;
}
