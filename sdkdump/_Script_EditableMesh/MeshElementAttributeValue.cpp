#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MeshElementAttributeValue.hpp"
_Script_CoreUObject::Class* _Script_EditableMesh::MeshElementAttributeValue::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/EditableMesh.MeshElementAttributeValue");
    return result;
}
