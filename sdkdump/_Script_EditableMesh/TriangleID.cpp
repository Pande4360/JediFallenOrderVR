#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "TriangleID.hpp"
#include "..\_Script_MeshDescription\ElementID.hpp"
_Script_CoreUObject::Class* _Script_EditableMesh::TriangleID::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/EditableMesh.TriangleID");
    return result;
}
