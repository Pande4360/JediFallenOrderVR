#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\StaticMesh.hpp"
#include "SwFloatingInWaterStaticMeshesDefinition.hpp"
_Script_Engine::StaticMesh*& _Script_SwGame::SwFloatingInWaterStaticMeshesDefinition::get_StaticMeshAsset() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwFloatingInWaterStaticMeshesDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwFloatingInWaterStaticMeshesDefinition");
    return result;
}
