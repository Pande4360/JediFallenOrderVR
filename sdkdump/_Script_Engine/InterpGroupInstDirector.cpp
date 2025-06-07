#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InterpGroupInst.hpp"
#include "InterpGroupInstDirector.hpp"
_Script_CoreUObject::Class* _Script_Engine::InterpGroupInstDirector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpGroupInstDirector");
    return result;
}
