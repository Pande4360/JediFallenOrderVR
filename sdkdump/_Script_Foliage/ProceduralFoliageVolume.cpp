#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Volume.hpp"
#include "ProceduralFoliageComponent.hpp"
#include "ProceduralFoliageVolume.hpp"
_Script_Foliage::ProceduralFoliageComponent*& _Script_Foliage::ProceduralFoliageVolume::get_ProceduralComponent() {
    return *(_Script_Foliage::ProceduralFoliageComponent**)((uintptr_t)this + 0x398);
}
_Script_CoreUObject::Class* _Script_Foliage::ProceduralFoliageVolume::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Foliage.ProceduralFoliageVolume");
    return result;
}
