#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\HUD.hpp"
#include "SwPhotomodeCameraHUD.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwPhotomodeCameraHUD::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwPhotomodeCameraHUD");
    return result;
}
