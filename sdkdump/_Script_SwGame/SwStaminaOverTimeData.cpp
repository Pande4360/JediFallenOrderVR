#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwStaminaOverTimeData.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwStaminaOverTimeData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwStaminaOverTimeData");
    return result;
}
