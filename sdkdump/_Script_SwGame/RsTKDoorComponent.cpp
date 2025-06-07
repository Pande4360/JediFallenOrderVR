#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "RsTKDoorComponent.hpp"
_Script_CoreUObject::Class* _Script_SwGame::RsTKDoorComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.RsTKDoorComponent");
    return result;
}
