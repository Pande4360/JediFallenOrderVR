#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "EditableMeshAdapter.hpp"
_Script_CoreUObject::Class* _Script_EditableMesh::EditableMeshAdapter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/EditableMesh.EditableMeshAdapter");
    return result;
}
