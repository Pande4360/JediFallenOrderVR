#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "ProceduralFoliageSpawner.hpp"
int32_t& _Script_Foliage::ProceduralFoliageSpawner::get_RandomSeed() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
bool _Script_Foliage::ProceduralFoliageSpawner::get_bNeedsSimulation() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 1 != 0;
}
float& _Script_Foliage::ProceduralFoliageSpawner::get_TileSize() {
    return *(float*)((uintptr_t)this + 0x2c);
}
float& _Script_Foliage::ProceduralFoliageSpawner::get_MinimumQuadTreeSize() {
    return *(float*)((uintptr_t)this + 0x34);
}
int32_t& _Script_Foliage::ProceduralFoliageSpawner::get_NumUniqueTiles() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
void* _Script_Foliage::ProceduralFoliageSpawner::get_FoliageTypes() {
    return (void*)((uintptr_t)this + 0x40);
}
void _Script_Foliage::ProceduralFoliageSpawner::set_bNeedsSimulation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Foliage::ProceduralFoliageSpawner::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Foliage.ProceduralFoliageSpawner");
    return result;
}
void _Script_Foliage::ProceduralFoliageSpawner::Simulate(int32_t NumSteps) {
    return;
}
