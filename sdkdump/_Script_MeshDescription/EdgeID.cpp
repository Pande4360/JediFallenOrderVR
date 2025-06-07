#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "EdgeID.hpp"
#include "ElementID.hpp"
_Script_CoreUObject::Class* _Script_MeshDescription::EdgeID::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MeshDescription.EdgeID");
    return result;
}
