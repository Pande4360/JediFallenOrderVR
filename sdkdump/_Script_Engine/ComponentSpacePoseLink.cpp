#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ComponentSpacePoseLink.hpp"
#include "PoseLinkBase.hpp"
_Script_CoreUObject::Class* _Script_Engine::ComponentSpacePoseLink::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ComponentSpacePoseLink");
    return result;
}
