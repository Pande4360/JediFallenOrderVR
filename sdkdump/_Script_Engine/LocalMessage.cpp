#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "LocalMessage.hpp"
_Script_CoreUObject::Class* _Script_Engine::LocalMessage::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.LocalMessage");
    return result;
}
