#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\StaticMeshComponent.hpp"
#include "RsModelSwapActor.hpp"
_Script_Engine::StaticMeshComponent*& _Script_SwGame::RsModelSwapActor::get_ModelSwapMeshComponent() {
    return *(_Script_Engine::StaticMeshComponent**)((uintptr_t)this + 0x360);
}
_Script_CoreUObject::Class* _Script_SwGame::RsModelSwapActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.RsModelSwapActor");
    return result;
}
