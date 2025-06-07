#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LandscapeLayerInfoObject.hpp"
#include "LandscapeLayerStruct.hpp"
_Script_Landscape::LandscapeLayerInfoObject*& _Script_Landscape::LandscapeLayerStruct::get_LayerInfoObj() {
    return *(_Script_Landscape::LandscapeLayerInfoObject**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Landscape::LandscapeLayerStruct::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Landscape.LandscapeLayerStruct");
    return result;
}
