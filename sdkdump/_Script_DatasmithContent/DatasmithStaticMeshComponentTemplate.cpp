#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DatasmithSceneComponentTemplate.hpp"
#include "DatasmithStaticMeshComponentTemplate.hpp"
#include "..\_Script_Engine\StaticMesh.hpp"
_Script_Engine::StaticMesh*& _Script_DatasmithContent::DatasmithStaticMeshComponentTemplate::get_StaticMesh() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0xe0);
}
void* _Script_DatasmithContent::DatasmithStaticMeshComponentTemplate::get_OverrideMaterials() {
    return (void*)((uintptr_t)this + 0xe8);
}
_Script_CoreUObject::Class* _Script_DatasmithContent::DatasmithStaticMeshComponentTemplate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/DatasmithContent.DatasmithStaticMeshComponentTemplate");
    return result;
}
