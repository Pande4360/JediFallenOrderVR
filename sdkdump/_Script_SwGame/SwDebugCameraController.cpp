#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DebugCameraController.hpp"
#include "SwDebugCameraController.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwDebugCameraController::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwDebugCameraController");
    return result;
}
