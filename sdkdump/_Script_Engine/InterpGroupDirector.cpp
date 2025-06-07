#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InterpGroup.hpp"
#include "InterpGroupDirector.hpp"
_Script_CoreUObject::Class* _Script_Engine::InterpGroupDirector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpGroupDirector");
    return result;
}
