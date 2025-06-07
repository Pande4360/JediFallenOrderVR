#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "KeyHandleMap.hpp"
_Script_CoreUObject::Class* _Script_Engine::KeyHandleMap::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.KeyHandleMap");
    return result;
}
