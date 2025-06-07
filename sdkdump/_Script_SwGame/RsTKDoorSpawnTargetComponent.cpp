#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\StaticMesh.hpp"
#include "RsSpawnTargetComponent.hpp"
#include "RsTKDoorSpawnTargetComponent.hpp"
_Script_Engine::StaticMesh*& _Script_SwGame::RsTKDoorSpawnTargetComponent::get_StaticMesh() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x2d0);
}
_Script_CoreUObject::Class* _Script_SwGame::RsTKDoorSpawnTargetComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.RsTKDoorSpawnTargetComponent");
    return result;
}
