#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithMeshSectionInfoMapTemplate.hpp"
void* _Script_DatasmithContent::DatasmithMeshSectionInfoMapTemplate::get_Map() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithMeshSectionInfoMapTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/DatasmithContent.DatasmithMeshSectionInfoMapTemplate");
    return result;
}
