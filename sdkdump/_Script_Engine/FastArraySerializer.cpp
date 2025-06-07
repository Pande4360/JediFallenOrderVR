#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FastArraySerializer.hpp"
_Script_CoreUObject::Class* _Script_Engine::FastArraySerializer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.FastArraySerializer");
    return result;
}
