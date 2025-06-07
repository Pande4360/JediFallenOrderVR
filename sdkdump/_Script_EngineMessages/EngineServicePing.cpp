#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "EngineServicePing.hpp"
_Script_CoreUObject::Class* _Script_EngineMessages::EngineServicePing::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/EngineMessages.EngineServicePing");
    return result;
}
