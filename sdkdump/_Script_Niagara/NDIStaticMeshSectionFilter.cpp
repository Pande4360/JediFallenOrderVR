#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NDIStaticMeshSectionFilter.hpp"
void* _Script_Niagara::NDIStaticMeshSectionFilter::get_AllowedMaterialSlots() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Niagara::NDIStaticMeshSectionFilter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NDIStaticMeshSectionFilter");
    return result;
}
