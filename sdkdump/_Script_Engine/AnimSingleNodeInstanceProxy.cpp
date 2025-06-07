#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimInstanceProxy.hpp"
#include "AnimSingleNodeInstanceProxy.hpp"
_Script_CoreUObject::Class* _Script_Engine::AnimSingleNodeInstanceProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimSingleNodeInstanceProxy");
    return result;
}
