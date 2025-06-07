#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MeshDescription.hpp"
_Script_CoreUObject::Class* _Script_MeshDescription::MeshDescription::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/MeshDescription.MeshDescription");
    return result;
}
