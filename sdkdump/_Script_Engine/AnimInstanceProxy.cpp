#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimInstanceProxy.hpp"
_Script_CoreUObject::Class* _Script_Engine::AnimInstanceProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimInstanceProxy");
    return result;
}
