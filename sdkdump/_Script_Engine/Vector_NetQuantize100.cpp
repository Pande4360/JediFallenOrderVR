#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "Vector_NetQuantize100.hpp"
_Script_CoreUObject::Class* _Script_Engine::Vector_NetQuantize100::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.Vector_NetQuantize100");
    return result;
}
