#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "FoliageTypeObject.hpp"
#include "FoliageType_InstancedStaticMesh.hpp"
_Script_CoreUObject::Object*& _Script_Foliage::FoliageTypeObject::get_FoliageTypeObject() {
    return *(_Script_CoreUObject::Object**)((uintptr_t)this + 0x0);
}
_Script_Foliage::FoliageType_InstancedStaticMesh*& _Script_Foliage::FoliageTypeObject::get_TypeInstance() {
    return *(_Script_Foliage::FoliageType_InstancedStaticMesh**)((uintptr_t)this + 0x8);
}
bool _Script_Foliage::FoliageTypeObject::get_bIsAsset() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
void _Script_Foliage::FoliageTypeObject::set_bIsAsset(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Foliage::FoliageTypeObject::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Foliage.FoliageTypeObject");
    return result;
}
void* _Script_Foliage::FoliageTypeObject::get_Type() {
    return (void*)((uintptr_t)this + 0x18);
}
