#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "PrimitiveComponentPostPhysicsTickFunction.hpp"
#include "TickFunction.hpp"
_Script_CoreUObject::Class* _Script_Engine::PrimitiveComponentPostPhysicsTickFunction::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.PrimitiveComponentPostPhysicsTickFunction");
    return result;
}
