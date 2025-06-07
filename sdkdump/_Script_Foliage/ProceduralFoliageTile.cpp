#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "ProceduralFoliageSpawner.hpp"
#include "ProceduralFoliageTile.hpp"
_Script_Foliage::ProceduralFoliageSpawner*& _Script_Foliage::ProceduralFoliageTile::get_FoliageSpawner() {
    return *(_Script_Foliage::ProceduralFoliageSpawner**)((uintptr_t)this + 0x28);
}
void* _Script_Foliage::ProceduralFoliageTile::get_InstancesArray() {
    return (void*)((uintptr_t)this + 0xd0);
}
_Script_CoreUObject::Class* _Script_Foliage::ProceduralFoliageTile::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Foliage.ProceduralFoliageTile");
    return result;
}
