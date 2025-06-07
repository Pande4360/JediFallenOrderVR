#include "..\FUObjectArray.hpp"
#include "BP_BoglingHole_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
_Script_Engine::StaticMeshComponent*& _Game_Models_Bogano_Ground_BP_BoglingHole::BP_BoglingHole_C::get_StaticMesh() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x360);
}
_Script_Engine::SceneComponent*& _Game_Models_Bogano_Ground_BP_BoglingHole::BP_BoglingHole_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x368);
}
_Script_CoreUObject::Class* _Game_Models_Bogano_Ground_BP_BoglingHole::BP_BoglingHole_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Models/Bogano/Ground/BP_BoglingHole.BP_BoglingHole_C");
    return result;
}
void _Game_Models_Bogano_Ground_BP_BoglingHole::BP_BoglingHole_C::UserConstructionScript0() {
    return;
}
