#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "StaticMeshDescriptions.hpp"
_Script_CoreUObject::Class* _Script_Engine::StaticMeshDescriptions::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.StaticMeshDescriptions");
    return result;
}
