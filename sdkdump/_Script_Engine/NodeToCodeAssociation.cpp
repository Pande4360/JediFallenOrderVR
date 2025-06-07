#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NodeToCodeAssociation.hpp"
_Script_CoreUObject::Class* _Script_Engine::NodeToCodeAssociation::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.NodeToCodeAssociation");
    return result;
}
