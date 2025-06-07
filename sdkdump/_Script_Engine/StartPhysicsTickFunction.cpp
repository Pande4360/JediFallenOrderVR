#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "StartPhysicsTickFunction.hpp"
#include "TickFunction.hpp"
_Script_CoreUObject::Class* _Script_Engine::StartPhysicsTickFunction::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.StartPhysicsTickFunction");
    return result;
}
