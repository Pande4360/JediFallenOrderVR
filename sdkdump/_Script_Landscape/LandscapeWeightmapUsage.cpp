#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LandscapeComponent.hpp"
#include "LandscapeWeightmapUsage.hpp"
_Script_Landscape::LandscapeComponent*& _Script_Landscape::LandscapeWeightmapUsage::get_ChannelUsage() {
    return *(_Script_Landscape::LandscapeComponent**)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Landscape::LandscapeWeightmapUsage::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Landscape.LandscapeWeightmapUsage");
    return result;
}
