#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "EditableMesh.hpp"
#include "EditableMeshFactory.hpp"
#include "..\_Script_Engine\PrimitiveComponent.hpp"
_Script_CoreUObject::Class* _Script_EditableMesh::EditableMeshFactory::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/EditableMesh.EditableMeshFactory");
    return result;
}
_Script_EditableMesh::EditableMesh* _Script_EditableMesh::EditableMeshFactory::MakeEditableMesh(_Script_Engine::PrimitiveComponent* PrimitiveComponent, int32_t LODIndex) {
    return;
}
