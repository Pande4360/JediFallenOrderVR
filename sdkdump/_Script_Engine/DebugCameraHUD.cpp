#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DebugCameraHUD.hpp"
#include "HUD.hpp"
_Script_CoreUObject::Class* _Script_Engine::DebugCameraHUD::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.DebugCameraHUD");
    return result;
}
