#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "LandscapeInfoMap.hpp"
_Script_CoreUObject::Class* _Script_Landscape::LandscapeInfoMap::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Landscape.LandscapeInfoMap");
    return result;
}
