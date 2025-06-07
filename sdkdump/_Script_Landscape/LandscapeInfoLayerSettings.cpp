#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LandscapeInfoLayerSettings.hpp"
#include "LandscapeLayerInfoObject.hpp"
_Script_Landscape::LandscapeLayerInfoObject*& _Script_Landscape::LandscapeInfoLayerSettings::get_LayerInfoObj() {
    return *(_Script_Landscape::LandscapeLayerInfoObject**)((uintptr_t)this + 0x0);
}
void* _Script_Landscape::LandscapeInfoLayerSettings::get_LayerName() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Landscape::LandscapeInfoLayerSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Landscape.LandscapeInfoLayerSettings");
    return result;
}
