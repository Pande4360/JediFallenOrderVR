#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Blueprint.hpp"
#include "LevelScriptBlueprint.hpp"
_Script_CoreUObject::Class* _Script_Engine::LevelScriptBlueprint::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.LevelScriptBlueprint");
    return result;
}
