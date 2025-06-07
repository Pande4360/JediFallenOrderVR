#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LandscapeLayerInfoObject.hpp"
#include "WeightmapLayerAllocationInfo.hpp"
_Script_Landscape::LandscapeLayerInfoObject*& _Script_Landscape::WeightmapLayerAllocationInfo::get_LayerInfo() {
    return *(_Script_Landscape::LandscapeLayerInfoObject**)((uintptr_t)this + 0x0);
}
void* _Script_Landscape::WeightmapLayerAllocationInfo::get_WeightmapTextureIndex() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Landscape::WeightmapLayerAllocationInfo::get_WeightmapTextureChannel() {
    return (void*)((uintptr_t)this + 0x9);
}
_Script_CoreUObject::Class* _Script_Landscape::WeightmapLayerAllocationInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Landscape.WeightmapLayerAllocationInfo");
    return result;
}
