#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwForceOverTimeData.hpp"
_Script_CoreUObject::Class* _Script_SwGame::SwForceOverTimeData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwForceOverTimeData");
    return result;
}
