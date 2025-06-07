#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BlueprintFunctionLibrary.hpp"
#include "DebugDrawService.hpp"
_Script_CoreUObject::Class* _Script_Engine::DebugDrawService::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.DebugDrawService");
    return result;
}
