#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BoundActorProxy.hpp"
_Script_CoreUObject::Class* _Script_LevelSequence::BoundActorProxy::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LevelSequence.BoundActorProxy");
    return result;
}
