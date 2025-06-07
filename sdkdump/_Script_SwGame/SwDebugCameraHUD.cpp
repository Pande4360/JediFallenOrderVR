#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DebugCameraHUD.hpp"
#include "SwDebugCameraHUD.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwDebugCameraHUD::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwDebugCameraHUD");
    return result;
}
