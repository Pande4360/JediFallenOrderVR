#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Landscape.hpp"
#include "LandscapeProxy.hpp"
_Script_CoreUObject::Class* _Script_Landscape::Landscape::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Landscape.Landscape");
    return result;
}
