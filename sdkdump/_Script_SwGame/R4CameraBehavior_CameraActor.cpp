#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "R4CameraBehavior_CameraActor.hpp"
#include "R4CameraBehavior_CameraComponent.hpp"
_Script_CoreUObject::Class* _Script_SwGame::R4CameraBehavior_CameraActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.R4CameraBehavior_CameraActor");
    return result;
}
