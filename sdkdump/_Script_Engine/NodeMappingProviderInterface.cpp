#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Interface.hpp"
#include "NodeMappingProviderInterface.hpp"
_Script_CoreUObject::Class* _Script_Engine::NodeMappingProviderInterface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.NodeMappingProviderInterface");
    return result;
}
