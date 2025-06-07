#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "ButtonMashType.hpp"
_Script_CoreUObject::Class* _Script_SwGame::ButtonMashType::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.ButtonMashType");
    return result;
}
