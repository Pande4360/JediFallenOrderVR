#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\StaticMesh.hpp"
#include "RsModelSwapData.hpp"
_Script_Engine::StaticMesh*& _Script_SwGame::RsModelSwapData::get_MeshToSwapIn() {
    return *(_Script_Engine::StaticMesh**)((uintptr_t)this + 0x0);
}
void* _Script_SwGame::RsModelSwapData::get_MaterialsToSwapIn() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_SwGame::RsModelSwapData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.RsModelSwapData");
    return result;
}
