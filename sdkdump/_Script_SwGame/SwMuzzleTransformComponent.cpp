#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "SwMuzzleTransformComponent.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwMuzzleTransformComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwMuzzleTransformComponent");
    return result;
}
