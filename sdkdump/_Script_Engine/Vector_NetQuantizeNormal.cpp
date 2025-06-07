#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "Vector_NetQuantizeNormal.hpp"
_Script_CoreUObject::Class* _Script_Engine::Vector_NetQuantizeNormal::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.Vector_NetQuantizeNormal");
    return result;
}
