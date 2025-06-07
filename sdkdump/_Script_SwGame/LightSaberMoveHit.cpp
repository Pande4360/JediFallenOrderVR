#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LightSaberMoveHit.hpp"
_Script_CoreUObject::Class* _Script_SwGame::LightSaberMoveHit::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.LightSaberMoveHit");
    return result;
}
