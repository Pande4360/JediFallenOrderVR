#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "JsonUtilitiesDummyObject.hpp"
_Script_CoreUObject::Class* _Script_JsonUtilities::JsonUtilitiesDummyObject::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/JsonUtilities.JsonUtilitiesDummyObject");
    return result;
}
