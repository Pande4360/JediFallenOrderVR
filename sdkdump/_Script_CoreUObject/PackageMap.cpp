#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "Object.hpp"
#include "PackageMap.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::PackageMap::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CoreUObject.PackageMap");
    return result;
}
