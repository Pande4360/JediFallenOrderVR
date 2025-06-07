#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_Engine\Volume.hpp"
#include "ProceduralFoliageComponent.hpp"
#include "ProceduralFoliageSpawner.hpp"
_Script_Engine::Volume*& _Script_Foliage::ProceduralFoliageComponent::get_SpawningVolume() {
    return *(_Script_Engine::Volume**)((uintptr_t)this + 0x180);
}
_Script_Foliage::ProceduralFoliageSpawner*& _Script_Foliage::ProceduralFoliageComponent::get_FoliageSpawner() {
    return *(_Script_Foliage::ProceduralFoliageSpawner**)((uintptr_t)this + 0x170);
}
float& _Script_Foliage::ProceduralFoliageComponent::get_TileOverlap() {
    return *(float*)((uintptr_t)this + 0x178);
}
void* _Script_Foliage::ProceduralFoliageComponent::get_ProceduralGuid() {
    return (void*)((uintptr_t)this + 0x188);
}
_Script_CoreUObject::Class* _Script_Foliage::ProceduralFoliageComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Foliage.ProceduralFoliageComponent");
    return result;
}
