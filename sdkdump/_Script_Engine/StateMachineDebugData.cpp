#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "StateMachineDebugData.hpp"
_Script_CoreUObject::Class* _Script_Engine::StateMachineDebugData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.StateMachineDebugData");
    return result;
}
