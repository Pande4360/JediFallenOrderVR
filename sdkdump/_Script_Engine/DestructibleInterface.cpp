#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "DestructibleInterface.hpp"
_Script_CoreUObject::Class* _Script_Engine::DestructibleInterface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.DestructibleInterface");
    return result;
}
