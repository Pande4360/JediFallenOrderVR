#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ElementID.hpp"
#include "VertexInstanceID.hpp"
_Script_CoreUObject::Class* _Script_MeshDescription::VertexInstanceID::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MeshDescription.VertexInstanceID");
    return result;
}
