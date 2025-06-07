#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithMeshSectionInfoTemplate.hpp"
int32_t& _Script_DatasmithContent::DatasmithMeshSectionInfoTemplate::get_MaterialIndex() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithMeshSectionInfoTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/DatasmithContent.DatasmithMeshSectionInfoTemplate");
    return result;
}
