#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Volume.hpp"
#include "ProceduralFoliageBlockingVolume.hpp"
#include "ProceduralFoliageVolume.hpp"
_Script_Foliage::ProceduralFoliageVolume*& _Script_Foliage::ProceduralFoliageBlockingVolume::get_ProceduralFoliageVolume() {
    return *(_Script_Foliage::ProceduralFoliageVolume**)((uintptr_t)this + 0x398);
}
_Script_CoreUObject::Class* _Script_Foliage::ProceduralFoliageBlockingVolume::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Foliage.ProceduralFoliageBlockingVolume");
    return result;
}
