#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\StaticMesh.hpp"
#include "LandscapeGrassType.hpp"
_Script_Engine::StaticMesh*& _Script_Landscape::LandscapeGrassType::get_GrassMesh() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x40);
}
void* _Script_Landscape::LandscapeGrassType::get_GrassVarieties() {
    return (void*)((uintptr_t)this + 0x28);
}
int32_t& _Script_Landscape::LandscapeGrassType::get_EndCullDistance() {
    return *(int32_t*)((uintptr_t)this + 0x54);
}
bool _Script_Landscape::LandscapeGrassType::get_bEnableDensityScaling() {
    return (*(uint8_t*)((uintptr_t)this + 0x38 + 0)) & 1 != 0;
}
void _Script_Landscape::LandscapeGrassType::set_bEnableDensityScaling(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x38 + 0);
    *(uint8_t*)((uintptr_t)this + 0x38 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Landscape::LandscapeGrassType::get_GrassDensity() {
    return *(float*)((uintptr_t)this + 0x48);
}
float& _Script_Landscape::LandscapeGrassType::get_PlacementJitter() {
    return *(float*)((uintptr_t)this + 0x4c);
}
int32_t& _Script_Landscape::LandscapeGrassType::get_StartCullDistance() {
    return *(int32_t*)((uintptr_t)this + 0x50);
}
bool _Script_Landscape::LandscapeGrassType::get_RandomRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0x58 + 0)) & 1 != 0;
}
void _Script_Landscape::LandscapeGrassType::set_RandomRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x58 + 0);
    *(uint8_t*)((uintptr_t)this + 0x58 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Landscape::LandscapeGrassType::set_AlignToSurface(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x59 + 0);
    *(uint8_t*)((uintptr_t)this + 0x59 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Landscape::LandscapeGrassType::get_AlignToSurface() {
    return (*(uint8_t*)((uintptr_t)this + 0x59 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Landscape::LandscapeGrassType::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Landscape.LandscapeGrassType");
    return result;
}
