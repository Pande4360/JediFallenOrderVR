#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LandscapeEditorLayerSettings.hpp"
_Script_CoreUObject::Class* _Script_Landscape::LandscapeEditorLayerSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Landscape.LandscapeEditorLayerSettings");
    return result;
}
