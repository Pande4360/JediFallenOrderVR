#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimBlueprintDebugData.hpp"
_Script_CoreUObject::Class* _Script_Engine::AnimBlueprintDebugData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimBlueprintDebugData");
    return result;
}
