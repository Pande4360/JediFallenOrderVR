#include "..\FUObjectArray.hpp"
#include "SliceableFoliageDataStruct.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Game_GlobalData_DynamicDeformation_Effects_SliceableFoliageDataStruct::SliceableFoliageDataStruct::get_StaticMesh_9_2A1F997D461E56D72F18CF870EC2596E() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Game_GlobalData_DynamicDeformation_Effects_SliceableFoliageDataStruct::SliceableFoliageDataStruct::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/GlobalData/DynamicDeformation/Effects/SliceableFoliageDataStruct.SliceableFoliageDataStruct");
    return result;
}
