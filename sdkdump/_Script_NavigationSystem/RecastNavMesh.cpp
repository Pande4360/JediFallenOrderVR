#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NavigationData.hpp"
#include "RecastNavMesh.hpp"
_Script_CoreUObject::Class* _Script_NavigationSystem::RecastNavMesh::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/NavigationSystem.RecastNavMesh");
    return result;
}
