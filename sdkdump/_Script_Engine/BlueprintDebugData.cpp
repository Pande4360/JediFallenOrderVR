#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BlueprintDebugData.hpp"
_Script_CoreUObject::Class* _Script_Engine::BlueprintDebugData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.BlueprintDebugData");
    return result;
}
